class Person:
    id_counter = 100
    def __init__(self, email, password) -> None:
        self.email = email
        self.password = password
        self.user_id = Person.generate_id()

    @classmethod
    def generate_id(self):
        id = self.id_counter
        self.id_counter += 1
        return id

    def __repr__(self) -> str:
        return f"email: {self.email} person_id: {self.user_id}"
    
class Product:
    def __init__(self, name, price, quantity) -> None:
        self.name = name
        self.price = price
        self.quantity = quantity

    def __repr__(self) -> str:
        return f"name: {self.name} price: {self.price} quantity: {self.quantity}"

class Store:
    def __init__(self) -> None:
        self.tota_products = {}

    def add_product(self, seller_id, product):
        
        # print(seller_id)
        productDict = vars(product)
        # print(productDict)
        if seller_id not in self.tota_products:
            self.tota_products[seller_id] = []

            seller_info = {}
            seller_info["total_sell_product"] = 0
            seller_info["total_sell_amount"] = 0
            seller_info["total_profit_amount"] = 0

            self.tota_products[seller_id].append(seller_info)

        self.tota_products[seller_id].append(productDict)

class Owner(Person):
    def __init__(self, email, password) -> None:

        self.total_sell_products = 0
        self.total_sell_amount = 0
        self.total_profit_amount = 0

        super().__init__(email, password)

    def shop_info(self, store):
        all_selle_id = store.tota_products.keys()
        # print(all_selle_id)
        for seller_id in all_selle_id:
            # print(seller_id)
            sell_info = store.tota_products[seller_id][0]
            # print(sell_info)
            self.total_sell_products += sell_info["total_sell_product"]
            self.total_sell_amount += sell_info["total_sell_amount"]

        sell_info = {
            "total_sell_product": self.total_sell_products,
            "total_sell_amount": self.total_sell_amount,
            "total_profit_amount": self.total_profit_amount
        }
        return sell_info


class Seller(Person):
    def __init__(self, email, password) -> None:
        super().__init__(email, password)

    def add_product(self, store, product_name, product_price, product_quantity):
        product = Product(product_name, product_price, product_quantity)
        # print(product, self.user_id)
        store.add_product(self.user_id, product)

    def sell_info(self, store):
        # print(self.user_id)
        print(store.tota_products[self.user_id][0])

class Customer(Person):
    def __init__(self, email, password) -> None:

        self.total_buy_amount = 0
        self.total_buy_products = 0

        super().__init__(email, password)

    def show_products(self, store):
        all_seller_keys = store.tota_products.keys()
        
        for seller_id in all_seller_keys:
            print("seller_id: ",seller_id)
            print("================")
            for index in range(1, len(store.tota_products[seller_id])):
                product = store.tota_products[seller_id][index]
                print("name: ", product["name"], "price: ", product["price"], "quantity: ", product["quantity"])

    def buy_product(self, store, seller_id, product_name, quantity):
        # print(store.tota_products)
        # print(store.tota_products[seller_id])
        for index in range(1, len(store.tota_products[seller_id])):
            product = store.tota_products[seller_id][index]
            
            if product["name"] == product_name:
                # print(product)
                product["quantity"] -= quantity
                self.total_buy_products += quantity
                self.total_buy_amount += product["price"] * quantity

                seller = store.tota_products[seller_id][0]
                seller["total_sell_product"] += quantity
                seller["total_sell_amount"] += product["price"] * quantity


store = Store()

seller1 = Seller("seller1@gmail.com", 1234)
seller2 = Seller("seller2@gmail.com", 1235)
seller3 = Seller("seller3@gmail.com", 1235)

seller1.add_product(store, "iphone10", 150, 10)
seller1.add_product(store, "iphone11", 200, 9)

seller2.add_product(store, "samsungS10", 140, 15)
seller2.add_product(store, "samsungS11", 150, 11)

seller3.add_product(store, "oppo2", 90, 20)
seller3.add_product(store, "oneplus nord", 120, 17)

curtomer1 = Customer("customer1@gmail.com", 3456)

# print(store.tota_products)

# curtomer1.show_products(store)
# print(curtomer1.total_buy_products, curtomer1.total_buy_amount)

curtomer1.buy_product(store, 100, "iphone10", 4)

# print()
# print()

# curtomer1.show_products(store)
# print(store.tota_products)

# print(curtomer1.total_buy_products, curtomer1.total_buy_amount)

# seller1.sell_info(store)
# seller2.sell_info(store)
# seller3.sell_info(store)

curtomer1.buy_product(store, 101, "samsungS10", 8)

# print()
# print()
# seller1.sell_info(store)
# seller2.sell_info(store)
# seller3.sell_info(store)
print(store.tota_products)

owner = Owner("admin@admin.com", 789)

print(owner.shop_info(store))
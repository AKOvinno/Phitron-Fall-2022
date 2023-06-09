# class Phone:
#     brand = "samsung"

#     @classmethod
#     def get_brand(cls):
#         return cls.brand

# brand = Phone.get_brand()
# print(brand) 

class Phone:
    brand = "samsung"

    @staticmethod
    def make_sound():
        print("Making a sound!")

Phone.make_sound() 


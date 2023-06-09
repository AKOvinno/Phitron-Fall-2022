from abc import ABC, abstractmethod


class User(ABC):
    def __init__(self, name, email, nId) -> None:
        self.name = name
        self.email = email
        # TODO: set user id dynamically
        self.__id = 0
        self.__nid = nId
        self.wallet = 0

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError
    
class Rider(User):
    def __init__(self, name, email, nId) -> None:
        self.current_ride = None
        super().__init__(name, email, nId)

    def display_profile(self):
        print(f'Rider: with name: {self.name} {self.email}')

    def request_ride(self, location, destination):
        if not self.current_ride:
            # TODO: set ride properly
            # TODO: set current ride via ride match
            ride_request = None
            self.current_ride = None

class Driver(User):
    def __init__(self, name, email, nId, current_location) -> None:
        super().__init__(name, email, nId)
        self.current_location = current_location

    def display_profile(self):
        print(f'Driver with name: {self.name} and email: {self.email}')
    
    def accept_ride(self, ride):
        ride.set_driver(self)



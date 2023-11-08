from itemGetterSetter import Item

class Phone(Item):
    pay_rate = 0.5
    def __init__(self, name: str, price: float, quantity=0, brokenPhones = 0 ):

        #Calling Super method to have access to all attributes/methods
        super().__init__(
            name, price, quantity
        )

        # Run validations to the received arguments
        assert brokenPhones >= 0, f"Broken Phones {brokenPhones} is not greater or equal to zero!"

        # Assign to self object
        self.brokenPhones = brokenPhones
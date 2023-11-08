# How to create a class:
class Item:
    #if we do not want to write anything in the class for now, then we can write "pass" inside the class so that we do not get any errors.
    # 
    #Python passes object itself as first argument every time, that is why we are not allowed to create a method that will never receive parameters, hence we write self.
    def calculate_total_price(self, x, y):  #method inside a class.
        return x * y

# How to create an instance of a class
item1 = Item()

# Assign attributes:
item1.name = "Phone"    #belongs to class String. Means it is instance of String. An instance in Python is an object that is created from a class.
item1.price = 100
item1.quantity = 5

# Calling methods from instances of a class:
print(item1.calculate_total_price(item1.price, item1.quantity))

# How to create an instance of a class (We could create as much as instances we'd like to)
item2 = Item()

# Assign attributes
item2.name = "Laptop"
item2.price = 1000
item2.quantity = 3

# Calling methods from instances of a class: 
print(item2.calculate_total_price(item2.price, item2.quantity))
# In Dictionaries, all keys need to be initialized.
# In DefaultDict, All keys are already initialized.
from collections import defaultdict

city_map = defaultdict(list)

cities = ["A", "B", "C"]
city_map["A_Country"] += cities #Here, key is already initialized, as we are using defaultdict. If we use normal dictionary, we need to initialize key first, or else we will get erorr.

""""
hashmap.keys()  //gives all keys from dictionary in the form of list.
hashmap.values()    //gives all values from dictionary in the form of list.
hashmap.items() //it return the list of all key-value pairs as tuples.

"""



print(city_map)
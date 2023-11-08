my_dict = {
    "index1": "Value1",
    "index2": "Value2",
    "index3": "Value3"
}

# print(my_dict)
# print(type(my_dict))

new_dict = ()   #creating empty dictionary
new_dict = dict(Index1="Value1", Index2="Value2")
# print(new_dict)

# print(new_dict.values())    #displaying all the values
# print(new_dict.get("Index1"))   #Accessing values using keys
# print(new_dict.items()) 


#Updating Values
new_dict["Index1"] = "ChangeValue1" #changing values
print(new_dict)
new_dict["Index3"] = "NewValue" #adding value
print(new_dict)
new_dict.pop("Index2")  #deleting value
print(new_dict)
new_dict.popitem()  #deleting last item
print(new_dict)
new_dict["Index4"] = new_dict["Index2"] + new_dict["Index1"]
print(new_dict)
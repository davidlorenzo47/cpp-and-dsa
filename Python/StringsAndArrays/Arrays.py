"""You are given a 0-indexed array of strings words and a character x.
Return an array of indices representing the words that contain the character x.
Note that the returned array may be in any order.

Tips:
words[i].includes(x)
OR
words[i].indexOf(x) > -1
The str.contains() method is used to check if a substring is present in a string. It takes a substring as an argument and returns True if the substring is present in the string, and False otherwise.
"""
def contains_func(words, x):
    ans = []
    for i in range (len(words)):
        if x in words[i]:   #searcing if subarray present in guven array.
            ans.append(i)   #appending.
    return ans

# nums.sort()   #sorting array
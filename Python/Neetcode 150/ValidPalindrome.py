def pali(s):
    temp = ""
    for letter in s:
        if letter.isalnum() == False:
            s.pop()
    print(temp)
    return True if (temp == temp[::-1]) else False


s = "a)(*A"
print(pali(s))
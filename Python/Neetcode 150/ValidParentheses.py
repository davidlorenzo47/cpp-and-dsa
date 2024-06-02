def validParen(s):
    par = []
    for i in range (len(s)):
        if s[i] == "(" or s[i] == "{" or s[i] == "[":
            par.append(s[i])
        elif not par:
            return False    
        elif s[i] == ")" and par.pop() != "(":
            return False
        elif s[i] == "}" and par.pop() != "{":
            return False
        elif s[i] == "]" and par.pop() != "[":
            return False
        print(par)
    return True


s = "{[][]{[({([[[[(){()}[]]]]])})]}[()]}"
print(validParen(s))
cases = int(input(""))
ansKey = []
for i in range (cases):
    statements = int(input(""))
    dict_assign = {}
    eq = 0
    for j in range (statements):
        s = input("")
        cln = s.find(":")
        if s[cln] == ":":   dict_assign[s[0:cln-1]] = s[cln+3:]
        else:
            add = s.find("+")
            eq = s.find("=")
            dict_assign[s[0:eq-1]] = dict_assign[s[eq+2:add-1]] + dict_assign[s[add+2:]]
    eq = s.find("=")
    if s.find(":") > 0: final_str = dict_assign[s[0:eq-2]]
    else:   final_str = dict_assign[s[0:eq-1]]
    ans = 0
    for i in range (len(final_str)-3):
        if final_str[i:i+4] == "haha":
            ans = ans + 1
    ansKey.append(ans)
        
for i in range (len(ansKey)):
    print(ansKey[i])
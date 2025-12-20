def check_paren(sentence):
    list = []
    for i in sentence:
        if len(list) == 0 and (i == ")" or i == "]"):
            return "no"
        elif i == "(" or i == "[":
            list.append(i)
        elif (i == ")" and list[-1] == "[") or (i == "]" and list[-1] == "("):
            return "no"
        elif i == ")" and list[-1] == "(":
            list.pop()
        elif i == "]" and list[-1] == "[":
            list.pop()
    if len(list) == 0:
        return "yes"
    else:
        return "no"


while True:
    sentence = input()
    if sentence == ".":
        break
    print(check_paren(sentence))

line = input().split(" ")

a = line[0]
op = line[1]
b = line[2]

a = int(a.replace("7", "0"))
b = int(b.replace("7", "0"))

result = ""

if op == "+":
    soma = a + b
    result = str(soma).replace("7", "0")
else:
    mult = a * b
    result = str(mult).replace("7", "0")

print(int(result))

t = int(input())
while t:
    leitura = input().split()

    a = int(leitura[0])
    b = int(leitura[1])
    
    if b > a:
        print(b - a)
    elif b < a:
        resto = a % b
        if resto == 0:
            print(0)
        else:
            print(b - resto)
    else:
        print(0) 

    t -= 1
    
    
def main():
    A = int(input())
    B = int(input())
    C = int(input())

    lista = [A, B, C]

    dicionario = {}
    
    for value in lista:
      if value not in dicionario:
        dicionario[value] = 1
      else:
        dicionario[value] += 1
        
    for key, value in dicionario.items():
      if value == 1:
        print(key)
        break
        

if __name__ == "__main__":
    main()

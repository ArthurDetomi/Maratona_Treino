N = int(input())


for i in range(N):
  palavras = input().split(" ")
  
  palavras_sort = sorted(palavras, key=len, reverse=True)
  
  size = len(palavras_sort)
  
  for j in range(size):
    print(palavras_sort[j], end="")
    if j != size - 1:
      print(" ", end="")
  print()
    
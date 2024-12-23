

def quick_sort(lista : list):
  if len(lista) < 2:
    return lista
  else:
    pivo = lista[0]
    menores = [i for i in lista[1:] if i <= pivo]
    maiores = [i for i in lista[1:] if i > pivo]
    return quick_sort(menores) + [pivo] + quick_sort(maiores)
  
  
print(quick_sort([9, 8, 4, 2]))
def divide_terra(x : int, y: int):
  
  aux_1 = max(x, y)
  aux_2 = min(x, y)
  
  if (aux_1 % aux_2 == 0):
    return aux_2
  
  div = int(aux_1 / aux_2)
  
  return divide_terra(aux_1 - div * aux_2, aux_2)


def soma_lista(lista):
    tamanho = len(lista)
    
    if tamanho == 1:
        return lista[0]
    
    meio = tamanho // 2
    esquerda = lista[:meio]
    direita = lista[meio:]
    
    return soma_lista(esquerda) + soma_lista(direita)

  
  
  

print(divide_terra(1680, 640))

print(soma_lista([1, 2, 3, 4]))


  
def selection_sort(list):
  size = len(list)
  
  for i in range(size):
    min_number = list[i]
    
    index_of_min_number = i
    
    for j in range(i + 1, size):
      current_number = list[j]
    
      if current_number < min_number:        
        min_number = current_number
        index_of_min_number = j
    
    aux = list[i]
    
    list[i] = min_number
    list[index_of_min_number] = aux
  
  
  

list = [9, 3, 6, 7, 2, 1, 0, 13]

selection_sort(list)

print(list)
         
a = [1, 2, 3, 4]

b = a

b.append(12)

print("a:",a)
print("b:",b)

c = a.copy()

c.append(13)

print("a:",a)
print("c:",c)

# Efeito colateral
def double(numbers = []):
  result = numbers
  
  for i in range(len(result)):
    result[i] *= 2
    
  return result

numbers = [1, 2, 3, 4]

numbers_double = double(numbers)

print("Com efeito colateral:")
print("numbers:", numbers)
print("numbers_double:", numbers_double)


# Efeito colateral corrigido
def double2(numbers = []):
  result = numbers.copy()
  
  for i in range(len(result)):
    result[i] *= 2
    
  return result  

numbers = [1, 2, 3, 4]

numbers_double = double2(numbers)

print("\nSem efeito colateral:")
print("numbers:", numbers)
print("numbers_double:", numbers_double)
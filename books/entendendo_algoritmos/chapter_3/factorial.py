def fat(n: int):
  if n == 1:
    return 1
  return n * fat(n - 1)



def fat_tail(n: int, result = 1):
  if n == 1:
    return result
  
  return fat_tail(n - 1, result * n)


print(fat(5))
print(fat_tail(5))
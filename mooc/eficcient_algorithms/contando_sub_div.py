def count_splits(numbers = []):
  result = 0
  total_sum = sum(numbers)
  n = len(numbers)
  left_sum = 0
  
  for i in range(n):
    left_sum += numbers[i]
    right_sum = total_sum - left_sum
    if left_sum == right_sum:
      result += 1
      
  return result

numbers = [1,-1,1,-1,1,-1,1,-1]

print(count_splits(numbers))
    
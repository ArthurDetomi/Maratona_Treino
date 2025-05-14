import random

# O(n²)
def best_profit_brute(prices):
  n = len(prices)
  best = 0
  for i in range(n):
    for j in range(i + 1, n):
      best = max(best, prices[j] - prices[i])
  return best

# O(n²)
def best_profit_2(prices):
  n = len(prices)
  best = 0
  for i in range(n):
    min_price = min(prices[0:i+1])
    best = max(best, prices[i] - min_price)
  return best

# O(n)
def best_profit_fast(prices):
  n = len(prices)
  best = 0
  min_price = prices[0]
  for i in range(n):
    min_price = min(min_price, prices[i])
    best = max(best, prices[i] - min_price)
  return best

while True:
  n = random.randint(1, 20)
  prices = [random.randint(1, 10) for _ in range(n)]
  
  result_brute = best_profit_brute(prices)
  result_fast = best_profit_fast(prices)
  
  print(prices, result_brute, result_fast)

  if result_brute != result_fast:
    print('ERROR')
    break
    


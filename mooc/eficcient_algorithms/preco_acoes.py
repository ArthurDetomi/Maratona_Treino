def best_profit(prices = []):
  n = len(prices)
  best = 0
  min_price = prices[0]
  
  for i in range(n):
    min_price = min(min_price, prices[i])
    best = max(best, prices[i] - min_price)
  
  return best

prices = [3, 7, 5, 1, 4, 6, 2, 3]

print("best:", best_profit(prices))


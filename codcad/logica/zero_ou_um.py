def print_winner(A: int, B : int, C : int, value : int):
  if A == value:
    print("A")
  elif B == value:
    print("B")
  elif C == value:
    print("C")
    
def main():
  A, B, C = map(int, input().split())

  sum_values = A + B + C

  if sum_values == 1:
    print_winner(A, B, C, 1)
  elif sum_values == 2:
    print_winner(A, B, C, 0)
  else:
    print("*")
      

        
        
if __name__ == "__main__":
    main()

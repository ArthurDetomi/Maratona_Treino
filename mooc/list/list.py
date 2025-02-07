numbers = [i for i in range(10)]
len(numbers)

numbers.append(12)
numbers.insert(0, 0)

print(2 in numbers)
print(numbers.count(0))
print(numbers.index(2))

numbers.pop()
numbers.remove(2)
print(numbers)



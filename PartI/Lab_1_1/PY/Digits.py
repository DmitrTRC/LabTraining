def digits(n):
    if n < 10:
        return 1
    return 1 + digits(n // 10)


print(digits(25))  # Should print 2
print(digits(144))  # Should print 3
print(digits(1000))  # Should print 4
print(digits(0))  # Should print 1

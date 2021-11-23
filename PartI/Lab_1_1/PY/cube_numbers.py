"""
prints the first 10 cube numbers (x**3), starting with x=1 and ending with x=10.
"""

print(*(i ** 3 for i in range(1, 11)))

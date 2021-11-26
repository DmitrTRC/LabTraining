def is_power_of(number, base):
    """
    This function checks if a number is a power of a base.
    """
    if number == 1:
        return True
    elif number % base == 0:
        return is_power_of(number // base, base)
    else:
        return False


print(is_power_of(8, 2))  # Should be True
print(is_power_of(64, 4))  # Should be True4896
print(is_power_of(70, 10))  # Should be False

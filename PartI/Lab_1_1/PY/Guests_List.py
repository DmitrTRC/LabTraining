def guest_list(guests):
    for guest in guests:
        print(f"{guest[0]} is {guest[1]} years old and works as {guest[2]}")


guest_list([('Ken', 30, "Chef"), ("Pat", 35, 'Lawyer'), ('Amanda', 25, "Engineer")])

"""
    Output should match:
    Ken is 30 years old and works as Chef
    Pat is 35 years old and works as Lawyer
    Amanda is 25 years old and works as Engineer
"""

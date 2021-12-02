def decade_counter():
    while year < 50:
        year += 10
    return year


for x in range(1, 10, 3):
    print(x)


def votes(params):
    for vote in params:
        print("Possible option:" + vote)


for x in range(10):
    for y in range(x):
        print(y)

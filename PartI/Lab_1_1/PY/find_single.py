from functools import reduce


def get_not_dup(array):
    return reduce(lambda x, y: x and y, array)


if __name__ == '__main__':
    test_load = [
        ([1, 3, 6, 6, 7, 7, 2, 2, 9, 3, 9, 8, 8, 5, 4, 4, 0, 0, 1], 5),
        ([2000, 2001, 2002, 17, 2002, 2001, 2000], 17)
    ]

    for test in test_load:
        print(get_not_dup(test[0]))
        assert get_not_dup(test[0]) == test[1], 'Test failed :  GOT {} EXPECTED {}'.format(get_not_dup(test[0]),
                                                                                                test[1])

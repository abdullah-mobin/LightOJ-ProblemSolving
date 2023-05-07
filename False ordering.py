# function to find the number of divisors for a given number
def count_divisors(n):
    count = 0
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            count += 2 if i != n // i else 1
    return count


# read the number of test cases
t = int(input())

# process each test case
for case in range(1, t+1):
    # read the value of n
    n = int(input())

    # create a list of tuples (number, number of divisors)
    numbers = [(i, count_divisors(i)) for i in range(1, 1001)]

    # sort the numbers based on the number of divisors
    numbers.sort(key=lambda x: (x[1], -x[0]))

    # output the nth number after sorting
    print("Case {}: {}".format(case, numbers[n-1][0]))
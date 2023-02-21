def primes_sieve(n):
    """Return a list of prime numbers up to n."""
    primes = [True] * (n+1)
    primes[0] = primes[1] = False
    for i in range(2, int(n**0.5)+1):
        if primes[i]:
            for j in range(i*i, n+1, i):
                primes[j] = False
    return [i for i in range(n+1) if primes[i]]


t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    primes = primes_sieve(b)
    count = sum(1 for p in primes if p >= a)
    print(count)

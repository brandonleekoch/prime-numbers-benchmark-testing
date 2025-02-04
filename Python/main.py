import time
import math


def is_prime(num, primes):
    """Check if a number is prime using previously found primes."""
    if num < 2:
        return False
    limit = int(math.sqrt(num))
    for prime in primes:
        if prime > limit:
            break  # Stop checking beyond sqrt(num)
        if num % prime == 0:
            return False
    return True


def generate_primes(n):
    """Generate the first `n` prime numbers."""
    primes = []
    num = 2

    while len(primes) < n:
        if is_prime(num, primes):
            primes.append(num)
        num += 1

    return primes


# Start timing
start_time = time.perf_counter()

# Generate 100 primes
primes = generate_primes(100)

# End timing
end_time = time.perf_counter()
execution_time = end_time - start_time

# Print results
print("First 100 Prime Numbers:")
for i, prime in enumerate(primes, 1):
    print(f"{prime:4}", end="\t")
    if i % 10 == 0:
        print()  # Newline every 10 primes

# Print execution time
print(f"\nExecution Time: {execution_time:.6f} seconds")

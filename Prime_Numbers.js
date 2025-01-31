// Function to check if a number is prime
function isPrime(num, primes) {
    if (num < 2) return false;
    let limit = Math.sqrt(num);
    
    for (let prime of primes) {
        if (prime > limit) break;  // Stop checking beyond sqrt(num)
        if (num % prime === 0) return false;
    }
    return true;
}

// Function to generate the first `n` prime numbers
function generatePrimes(n) {
    let primes = [];
    let num = 2;

    while (primes.length < n) {
        if (isPrime(num, primes)) {
            primes.push(num);
        }
        num++;
    }
    
    return primes;
}

// Start timing
console.time("Execution Time");

// Generate 100 primes
const primes = generatePrimes(100);

// End timing
console.timeEnd("Execution Time");

// Print results
console.log("First 100 Prime Numbers:");
for (let i = 0; i < primes.length; i++) {
    process.stdout.write(primes[i] + "\t");
    if ((i + 1) % 10 === 0) console.log();  // Newline every 10 primes
}


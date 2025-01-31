#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define max_primes 100 //Number of prime generations

int is_prime(int num, int primes[], int count) {
  if (num < 2) return 0; //Excluding numbers less than 2

  int limit = (int) sqrt(num);
  for (int i = 0; i < count; i++) {
    if (primes[i] > limit) break; //Stops checking beyoond the sqrt
    if (num % primes[i] == 0) return 0;
  }
  return 1;
}

int main() {
  int primes[max_primes]; // Array to store the first 100 prime numbers
  int count = 0; // Prime counter
  int num = 2; // Start check at number 2

  clock_t start = clock(); // Start timer

  while (count < max_primes) {
    if (is_prime(num, primes, count)) {
      primes[count++] = num; // Store the prime number
    }
    num++; // Proceed to next number
  }

  clock_t end = clock(); //Stop timer
  double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

  // Output
  printf("First %d Prime Numbers:\n", max_primes);
  for (int i = 0; i < max_primes; i++) {
    printf("%d\t", primes[i]);
    if ((i + 1) % 10 == 0) printf("\n"); //New line for every 10th prime number
  }

  //Print execution time
  printf("\nExecution Time: %f seconds\n", time_taken);

  return 0;
}



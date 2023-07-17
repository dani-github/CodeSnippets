// Function to check if a number is prime
function isPrime(number) {
  if (number <= 1) {
    return false;
  }
  
  for (let i = 2; i < number; i++) {
    if (number % i === 0) {
      return false;
    }
  }
  
  return true;
}

// Function to generate and display prime numbers within a range
function generatePrimes(start, end) {
  console.log(`Prime numbers between ${start} and ${end}:`);
  
  for (let i = start; i <= end; i++) {
    if (isPrime(i)) {
      console.log(i);
    }
  }
}

// Input numbers and generate
const startRange = parseInt(prompt('Enter the start of the range:'));
const endRange = parseInt(prompt('Enter the end of the range:'));

generatePrimes(startRange, endRange);
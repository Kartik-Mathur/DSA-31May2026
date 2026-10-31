let a = 10;

a = "hello";

// Array
a = [1, 2, 3, "Hello", "World", true, 10.11]; // hetrogenous array

// Loop
for (let i = 0; i < a.length; i++) {
  console.log(a[i]); // Apne aap endl add kar dega
}

// Object (same as python ki dictionary)
let person = {
  name: "Arun",
  age: 10,
};

person.college = "DTU"; // college naam ki key and value DTU add kar dega
console.log(person);

// Hashmap
let m = new Map();
m.set("name", "Mayank");
console.log(m);

// cout alternative is console.log()
console.log("Name", m.get("name"));

function sum(a, b) {
  return a + b;
}

console.log(sum(10, 20));

function isPrime(n) {
  for (let i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

console.log(isPrime(10));
console.log(isPrime(7));

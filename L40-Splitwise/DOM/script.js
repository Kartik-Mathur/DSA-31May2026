class Graph {
  constructor() {
    this.adj = new Map();
  }

  addEdge(u, v, d, bidir = false) {
    if (!this.adj.has(u)) {
      this.adj.set(u, []);
    }
    this.adj.get(u).push([v, d]);

    if (bidir) {
      if (!this.adj.has(v)) {
        this.adj.set(v, []);
      }
      this.adj.get(v).push([u, d]);
    }
  }

  print() {
    for (const [vertex, neighbors] of this.adj) {
      let result = vertex + "-->";

      for (const [neighbor, weight] of neighbors) {
        result += `(${neighbor}, ${weight})`;
      }

      console.log(result);
    }
  }

  splitwise() {
    const money = new Map();

    // Calculate net balance of every person
    for (const [person, children] of this.adj) {
      for (const [child, amount] of children) {
        money.set(person, (money.get(person) || 0) - amount);

        money.set(child, (money.get(child) || 0) + amount);
      }
    }

    // Store {amount, name} in a sorted array
    let s = [];

    for (const [name, amount] of money) {
      s.push([amount, name]);
    }

    // Sort by amount, then by name
    const sortSet = () => {
      s.sort((a, b) => {
        if (a[0] !== b[0]) {
          return a[0] - b[0];
        }
        return a[1].localeCompare(b[1]);
      });
    };

    sortSet();

    // Print initial balances
    for (const [amount, name] of s) {
      console.log(`${amount}, ${name}`);
    }

    // Settle transactions
    while (s.length > 0) {
      // Person who owes the most
      const front = s.shift();

      // Person who should receive the most
      const end = s.pop();

      let frontAmount = front[0];
      let frontName = front[1];

      let endAmount = end[0];
      let endName = end[1];

      const settlementAmount = Math.min(-frontAmount, endAmount);

      frontAmount += settlementAmount;
      endAmount -= settlementAmount;

      console.log(`${frontName} --> ${endName} paid: ${settlementAmount}`);

      if (frontAmount !== 0) {
        s.push([frontAmount, frontName]);
      }

      if (endAmount !== 0) {
        s.push([endAmount, endName]);
      }

      sortSet();
    }
  }
}

let person1 = document.getElementById("person1");
let person2 = document.getElementById("person2");
let amount = document.getElementById("amount");
let add = document.getElementById("add");
let calculate = document.getElementById("calculate");
let settlement = document.getElementById("settlement");

// Main function
const g = new Graph();

add.onclick = function clicked() {
  // console.log(person1.value)
  // console.log(person2.value)
  // console.log(amount.value)

  // g.addEdge(person1.value, person2.value, Number(amount));
  g.addEdge("Aadeep", "Agrim", 1000);
  g.addEdge("Agrim", "Anurag", 200);
  g.addEdge("Niyati", "Aadeep", 1100);
  g.addEdge("Harman", "Niyati", 500);
  g.addEdge("Aryan", "Agrim", 800);
};

calculate.onclick = function calculate() {
  g.splitwise();
};

function solve(array) {
  array.sort((a, b) => {
    return a[0] - b[0];
  });

  let response = [array[0]];

  for (let i = 1; i < array.length; i++) {
    let curr = response[response.length - 1];

    let prox = array[i];

    let minCurr = curr[0],
      maxCurr = curr[1];

    if (maxCurr >= prox[0]) {
      if (prox[1] > maxCurr) {
        response.pop();
        response.push([minCurr, prox[1]]);
      }
    } else {
      response.push(prox);
    }
  }

  return response;
}

const fs = require("fs");
const input = fs.readFileSync(0, "utf8");

const inputValues = input.split("\n");

const [P, S] = inputValues[0].split(" ").map(Number);

const sorveteiros = [];

for (let i = 1; i <= S; i++) {
  const [u, v] = inputValues[i].split(" ").map(Number);

  sorveteiros.push([u, v]);
}

const response = solve(sorveteiros);

//process.stdout.write();
for (const pair of response) {
  process.stdout.write(`${pair[0]} ${pair[1]}\n`);
}

** start of script.js **

function sym(...args) {
  const response = new Set();

  let S = new Set(); 

  let count = 2;

  for (let i = 0; i < args.length; i++) {
   if (i == count) {
     S.clear();
     response.forEach(v => S.add(v));

     count++;
   } 

   for (let j = 0; j < args[i].length;j++) {
     let value = args[i][j]; 

     if (!S.has(value))  {
       response.add(value)
     } else {
       response.delete(value);
     }
   } 

   args[i].forEach(v => S.add(v));
  }

  return Array.from(response);
}

console.log(sym([1, 2, 3], [5, 2, 1, 4]));

console.log(sym([1, 2, 3, 3], [5, 2, 1, 4]))

console.log(sym([1, 2, 5], [2, 3, 5], [3, 4, 5]));

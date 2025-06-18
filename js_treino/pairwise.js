** start of script.js **

function pairwise(arr, arg) {
  const M = {}, indices = [], usados = new Array(arr.length);

  usados.fill(false);

  for (let i = 0; i < arr.length; i++) {
    if (usados[i]) {
      continue;
    }

    let value = arr[i];

    let compl = arg - value;

    if (compl in M) {
      if (M[compl].length == 0) {
        continue;
      }

      const indiceCompl = M[compl].shift();

      indices.push(i);
      indices.push(indiceCompl);

      usados[i] = true;
      usados[indiceCompl] = true;

      continue;
    }

    if (!M[value]) M[value] = [];

    M[value].push(i);
  }

  return indices.reduce((acc, value) => acc + value, 0);
}

console.log(pairwise([1, 1, 1], 2));

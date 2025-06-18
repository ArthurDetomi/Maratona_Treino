** start of script.js **


function isValido(arr, letra) {
  let size = arr.length;

  if (size === 0) {
    return true;
  }

  return arr[size - 1] !== letra;
}

function gerarSolucoes(arr, usados, str, solucoes)  {
  if (str.length == arr.length) {
    solucoes.push(arr.slice());
    return;
  }

  for (let i = 0; i < str.length; i++) {
    if (!usados[i]) {

      let letra = str[i];
      
      if (!isValido(arr, letra)) continue;

      arr.push(letra);
      usados[i] = true;

      gerarSolucoes(arr, usados, str, solucoes);

      arr.pop();
      usados[i] = false;
    }
  }
}


function permAlone(str) {
  const solucoes = [];

  const usados = []

  for (let i = 0; i < str.length; i++) {
    usados[i] = false;
  }

  gerarSolucoes([], usados, str, solucoes);

  console.log(solucoes);


  return solucoes.length;
}

console.log(permAlone('aabb'));

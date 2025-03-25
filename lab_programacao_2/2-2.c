#include <stdio.h>
#include <string.h>

void solve(char *word, int n) {
  if (n == 0) {
    return;
  }

  solve(word + 1, n - 1);

  printf("%c", word[0]);
}

void print_descending_order(char *word, int n) {
  solve(word, n);
  printf("\n");
}

int main() {
  char word[50];

  scanf("%s", word);

  int size = strlen(word);

  print_descending_order(word, size);

  return 0;
}
#include <bits/stdc++.h>
#include <string.h>
#include <string>

using namespace std;

string trimRightRegex(const string &str) {
  return regex_replace(str, regex("\\s+$"), "");
}

string urlify(const string &str) {
  string str_trimmed = trimRightRegex(str);
  ostringstream url;

  for (char c : str_trimmed) {
    if (c != ' ') {
      url << c;
    } else {
      url << "%20";
    }
  }

  return url.str();
}

void replace_spaces(char str[], int size) {
  int space_count = 0, index, i = 0;

  for (i = 0; i < size; i++) {
    if (str[i] == ' ') {
      space_count++;
    }
  }

  index = size + space_count * 2;
  if (size < (int)strlen(str)) {
    str[size] = '\0';
  }

  for (i = size - 1; i >= 0; i--) {
    if (str[i] == ' ') {
      str[index - 1] = '0';
      str[index - 2] = '2';
      str[index - 3] = '%';

      index -= 3;
    } else {
      str[index - 1] = str[i];
      index--;
    }
  }
}

int main() {
  string s;

  getline(cin, s);

  string url = urlify(s);

  cout << url << endl;

  char c[120];

  cin.getline(c, 120);

  int true_length;
  cout << "Informe o tamanho verdadeiro da string: ";
  cin >> true_length;

  replace_spaces(c, true_length);

  cout << c << endl;

  return 0;
}
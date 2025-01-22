#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

vector<string> generateGrayCode(int n) {
  if (n == 1) {
    return {"0", "1"};
  }

  vector<string> prev_gray_code = generateGrayCode(n - 1);

  vector<string> reversed_gray_code = prev_gray_code;

  reverse(reversed_gray_code.begin(), reversed_gray_code.end());

  int prev_size = prev_gray_code.size();

  int index = 0;

  while (index < prev_size) {
    string appended_zero = "0" + prev_gray_code[index];

    prev_gray_code[index] = "1" + reversed_gray_code[index];
    prev_gray_code.push_back(appended_zero);
    index++;
  }

  return prev_gray_code;
}

int main() {
  int n;

  cin >> n;

  vector<string> grayCode = generateGrayCode(n);
  for (auto code : grayCode)
    cout << code << "\n";
  return 0;
}
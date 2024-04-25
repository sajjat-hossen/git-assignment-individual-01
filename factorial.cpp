#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n; cin >> n;
  int fact = 1;
  for (int i = 1; i <= n; ++i) {
    fact *= i;
  }
  cout << "This is the result of " << n << " factorial = ";
  cout << fact << '\n';
  return 0;
}
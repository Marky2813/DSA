#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  vector<int> v(1000001, 0);
  for (int i = 2; i < 1000001; i++)
  {
    if (v[i] != 0)
      continue;

    for (int j = i; j < 1000001; j += i)
    {
      int x = j;

      if (x % i == 0)
      {
        if(v[j]) {
          v[j] = min(v[j], i);
        } else {
        v[j] = i;
        }
      }

    }
  }
  for (int i = 0; i < q; i++)
  {
    int n;
    cin >> n;
    while(n > 1) {
      int p = v[n];
      int count = 0;
      while(n%p == 0) {
        n /= p; 
        count++;
      }
      cout << p << "^" << count << " ";
    }
    cout << "\n";
  }
}
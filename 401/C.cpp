#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9;
int main ()
{
  long long n , k, sum = 0;
  cin >> n >> k;
  vector <long long> v(n+1,1);
  sum = k;
  for(int i=k; i<=n; i++)
  {
    v[i] = sum;
    sum -= v[i-k];
    sum = (sum + v[i]);
    sum = sum % MOD;
  }
  cout << v[n] << endl;
}
#include<iostream>
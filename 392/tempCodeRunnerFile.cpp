#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n, m , k;
  cin >> n >> m >> k;
  if(n%m==0 || m%n ==0 || k%n==0)
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }
  
}
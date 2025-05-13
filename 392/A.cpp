#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n, m , k;
  cin >> n >> m >> k;
  if(n*m==k || m*k==n || n*k==m)
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }
  
}
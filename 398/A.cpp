#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long n;
  cin >> n;
  if(n&1)
  {
    for(int i=1; i<=n; i++)
    {
      if(n/2+1 == i)
      {
        cout << "=";
      }
      else
      {
        cout << "-";
      }
    }
  }
  else 
  {
    for(int i=1; i<=n; i++)
    {
      if(n/2 == i || n/2+1 == i)
      {
        cout << "=";
      }
      else
      {
        cout << "-";
      }
    }
  }
}
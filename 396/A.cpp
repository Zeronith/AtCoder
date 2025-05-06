#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin  >> n;
  int a[n];
  for(int i=0; i<n; i++)
  {
    cin >> a[i];
  }
  int count=0 ,max = 0;
  for(int i=0; i<(n-1); i++)
  {
    if(a[i] == a[i+1])
    {
      count++;
    }
    else
    {
      count  = 0;
    }
    if( max < count)
    {
      max = count ;
    }
  }
  // cout << max;
  if(max >= 2)
  {
    cout << "Yes" ;
  }
  else
  {
    cout << "No" ;
  }
}
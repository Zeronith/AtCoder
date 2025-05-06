#include<bits/stdc++.h>
#define int long long 
#define LIMIT 1000000000
using namespace std;
signed main ()
{
  int n, m;
  cin >> n >> m;
  int sum = 0;
  for(int i=0; i<=m; i++)
  {
    int pow=1;
    for(int j=1; j<=i; j++)
    { 
      pow*=n;
    }
    sum += pow;
    if( sum > LIMIT )
    {
      cout << "inf" << endl;
      return 0;
    }
  }
  cout << sum ;
  

}
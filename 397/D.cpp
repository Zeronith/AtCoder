#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main ()
{
  int n;
  cin >> n;
  for(int i=1 ; i<=n ; i++)
  {
    // cout << cbrt(n+(i*i*i)) <<":";
    double ans = cbrt(n+(i*i*i));
    if( ans == (int) ans )
    {
      cout << ans << " " << i << "\n";
      return 0;
    }
  }
  cout << "-1" << "\n";
  return 0 ;
}


/// Yu blodeinaa
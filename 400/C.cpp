#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main ()
{
  // Problem : How to make it faster . 
  // It's getting TLE = TIME LIMIT EXCEEDED
  int n;
  cin >> n;
  int ans = 0;
  for(int i1=2; i1<=n; i1+=2)
  {
    int i = i1;
    bool flag = false;
    if((i&(i-1))==0)
    {
      ans++;
      continue;
    }
    while(i%2==0)
    {
      flag = true;
      i=i/2;
      int a = (int)(sqrt(i));
      if(a*a == i && flag)
      {
        ans++;
        break;
      }
    }
    
  }
  cout << ans  << "\n";
}
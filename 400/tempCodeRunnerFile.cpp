#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main ()
{
  int n;
  cin >> n;
  vector < int > ans;
  for(int i1=2; i1<=n; i1+=2)
  {
    int i = i1;
    bool flag = false;
    while(i%2==0)
    {
      flag = true;
      i=i/2;
      int a = (int)(sqrt(i));
      if(a*a == i && flag)
      {
        // cout << "Entering Value : " << i1 << "\n";
        ans.push_back(i);
        break;
      }
    }
    
  }
  for(int i=0; i<ans.size(); i++)
  {
    // cout<< ans[i] << " ";
  }
  cout << ans.size()  << "\n";
}
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  bool isLogged = false;
  int n, ans=0;
  cin >> n;
  // string a[n];
  vector<string> a(n);
  for(int i=0; i<n; i++)
  {
    cin >> a[i];
    if(a[i]=="login")
    {
      isLogged = true;
    }
    else if(a[i]=="logout")
    {
      isLogged = false;
    }
    else if(a[i]=="private")
    {
      if(!isLogged)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
}
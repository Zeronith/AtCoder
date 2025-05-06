#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n, cnt=0;
  cin >> n;
  string s, t;
  cin >> s;
  cin >> t;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i]!=t[i])
    {
      cnt++;
    }
  }
  cout << cnt;
}
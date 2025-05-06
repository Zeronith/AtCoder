#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main ()
{
  string s;
  cin >> s;
  ll freq = 0;
  for(int i=0; i<s.size()-1; i++)
  {
    if(s[i] == s[i+1])
    {
      freq++;
    }
  }
  if((s.size() + freq) % 2 ==1 )
  {
    cout << freq+1;
    return 0;
  }
  else if(s[0]=='o')
  {
    cout << freq + 2;
    return 0;
  }
  cout << freq;
  return 0;
 

}
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n, k;
  vector < int > vc;
  cin >> n >> k;
  string s;
  cin >> s;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i]=='?')
    {
      if((i > 0 && s[i-1]=='o') || (i < s.size()-1 && s[i+1]=='o'))
      {
        s[i]='.';
      }
    }
  }
  for(int i=1; i<s.size()-1; i++)
  {
    if(s[i]=='?' && s[i-1]=='.' && s[i+1]=='.')
    {
      s[i]='o';
    }
  }
  
  cout << s;

}
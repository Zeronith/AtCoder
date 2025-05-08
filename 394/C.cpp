#include<bits/stdc++.h>
using namespace std;
int main ()
{
  string s;
  cin >> s;
  vector < char> v;
  bool isW = true;
  int cnt = 0;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i]=='W' )
    {
      v.push_back('W');
      isW = true;
    }
    else if(s[i] == 'A' && isW)
    {
      cnt++;
      cout << 'A' ;
      for(int j=0; j<v.size(); j++)
      {
        cout << 'C';
      }
      v.clear();
      isW = false;
    }
    else if(s[i]!='A' && isW)
    {
      for(int j=0; j<v.size() ; j++)
      {
        cout << 'W';
      }
      v.clear();
      cout << s[i];
      isW = false;
    }
    else
    {
      cout << s[i];
    }
}
      for(int j=0; j<v.size(); j++)
      {
        cout << v[j];
      }
}
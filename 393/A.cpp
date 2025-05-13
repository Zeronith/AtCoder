#include<bits/stdc++.h>
using namespace std;
int main ()
{
  string s1, s2;
  cin >> s1 >> s2;
  if(s1 == s2 && s1 == "fine")
  {
    cout << "4\n";
  }
  else if(s1 == s2 && s1 == "sick")
  {
    cout << "1\n";
  }
  else
  {
    if(s1 == "fine" && s2 == "sick")
    {
      cout << "3\n";
    }
    else
    {
      cout << "2\n";
    }
  }
}
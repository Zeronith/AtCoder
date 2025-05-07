#include<bits/stdc++.h>
using namespace std;
int main ()
{
  map <int , string> map;
  int n;
  cin >> n;
  for(int i=0; i<n ; i++)
  {
    string p;
    cin >> p;
    map[p.length()] = p;
  }
  
  for(auto el : map)
  {
    cout << el.second;
  }
}
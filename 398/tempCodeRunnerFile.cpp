#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main ()
{
  int a1, a2, a3,a4, a5,a6, a7;
  cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
  unordered_map <int , int > map;
  map[a1]++;
  map[a2]++;
  map[a3]++;
  map[a4]++;
  map[a5]++;
  map[a6]++;
  map[a7]++;

  bool Set = false ;
  bool TwoPair = false;
  for(auto el : map)
  {
    if(el.second == 3)
    {
      Set = true;
    }
    else if(el.second == 2)
    {
      TwoPair = true;
    }
  }
  if(Set && TwoPair)
    {
      cout << "Yes" << endl;
      return 0;
    }
  cout << "No" << "\n";

}
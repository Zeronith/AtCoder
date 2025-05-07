#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main ()
{
  int n;
  cin >> n;
  unordered_map <int , vector <int>> map;
  set <int> s;
  for(int i=0; i<n ; i++)
  {
    int p;
    cin >> p;
    map[p].push_back(i);
    s.insert(p);
  }
  int min = INT32_MAX;
  if(s.size() == n)
  {
    cout << "-1";
    return 0;
  }

  for(auto el : map)
  {
    for(int i=0; i<el.second.size()-1; i++)
    {
      int sub = abs(el.second[i] - el.second[i+1]);
      if(min > sub)
      {
        min = sub;
      }
    }
  }
  cout << ++min;
}
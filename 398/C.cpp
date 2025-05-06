#include<bits/stdc++.h>
using namespace std;
#define ing long long
signed main ()
{
  int n;
  cin >> n;
  vector <int > v;
  unordered_map <int , int> map;
  for(int i=0; i<n ;i++)
  {
    int p;
    cin >> p;
    v.push_back(p);
    map[p]++;
  }
  int max = 0;
  for(auto el : map)
  {
    if(el.second == 1)
    {
      if(max < el.first)
      {
        max = el.first;
      }
    } 
  }
  for(int i=0; i<v.size() ; i++)
  {
    if(v[i]==max)
    {
      cout << i+1 << "\n";
      return 0;
    }
  }
  cout << "-1" << "\n";
}

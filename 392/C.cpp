#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main ()
{
  int n;
  cin >> n;
  unordered_map <int, int> map;
  vector <int> v;
  for(int i=0; i<n ; i++)
  {
    int p;
    cin >> p;
    v.push_back(p);
  }
  
  vector<int> t;
  for(int i=0; i<n; i++)
  {
    int p;
    cin >> p;
    t.push_back(p);
    map[p] = i+1 ;
  }
  // for(auto el : map)
  // {
  //   cout << el.first << " " << el.second << "\n";
  // }

  for(int i=0; i<n; i++)
  {
    cout << t[v[map[i+1]-1]-1] << " ";
  }

}
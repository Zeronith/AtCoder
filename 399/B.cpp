#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  unordered_map <int, int> map;
  vector <int> v , ans;
  for(int i=0; i<n ; i++)
  {
    int p;
    cin >> p;
    v.push_back(p);
    ans.push_back(p);
  }

  int r=1;
  int num = v.size();
  while(r<=v.size())
  {
    int mx = 0, mxI=0;
    for(int i=0; i<v.size(); i++)
    {
      if(mx < v[i])
      {
        mx = v[i];
        mxI = i;
      }
    }
    int freq = 0;
    for(int i=0; i<v.size(); i++)
    {
      if(mx == v[i])
      {
        freq++;
        v[i] = 0;
      }
    }
    // cout << mx << " maximum's frequency : " << freq << "\n";
    map[mx] = r;   
    // cout << " Map Ranking : "<< map[mx] << "\n"; 
    r = r + freq;
  }
  for(int i=0; i<ans.size(); i++)
  {
    cout << map[ans[i]] << "\n";
  }
}

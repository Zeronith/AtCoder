#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main ()
{
  int n;
  cin >> n;
  vector <int> v;
  unordered_map <int, int> a, b;
  for(int i=0 ; i<n; i++)
  {
    int p;
    cin >> p;
    v.push_back(p);
    if(i==0)
    { 
      a[p]++;
    }
    else
    {
      b[p]++;
    }
  }
  int max = a.size() + b.size();
  for(int i=1; i<v.size(); i++)
  {
    a[v[i]]++;
    b[v[i]]--;
    if(b[v[i]]==0)
    {
      b.erase(v[i]);
    }
    if( max < (a.size() + b.size()))
    {
      max = a.size() + b.size() ;
    }
  }
  cout << max ;

}
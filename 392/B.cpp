#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n, m;
  cin >> n >> m;
  map <int, int> map ;
  for(int i=0; i<n ; i++)
  {
    map[i+1] = 1;
  }
  for(int i=0; i<m ; i++)
  {
    int p;
    cin >> p;
    map[p]--;
  }
  int cnt = 0;
  for(auto el : map)
  {
    if(el.second > 0 )
    {
      cnt++;
    }
  }
  cout << cnt << endl;
  for(auto el : map)
  {
    if(el.second > 0)
    {
      cout << el.first  << " ";
    }
  }
}
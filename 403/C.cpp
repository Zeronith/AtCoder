#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n, m , q;
  cin >> n >> m >> q;
  unordered_map <int, vector <bool>> map;
  unordered_map <int, bool > map2;
  for(int i=1; i<=n; i++)
  {
    map[i] = vector<bool>(m, false);
  }
  
  for(int i=1; i<=q; i++)
  {
    int p;
    cin >> p;
    if(p == 1)
    {
      int x, y;
      cin >> x >> y;
      map[x][y-1] = true;
    }
    else if (p==2)
    {
      int x;
      cin >> x;
      map2[x] = true;
    }
    else if(p == 3)
    {
      int x, y;
      cin >> x >> y;
      if(map2[x] == true)
      {
        cout << "Yes" << "\n";
        continue;
      }
      if(map[x][y-1] == true)
      {
        cout << "Yes" << "\n";
      }
      else
      {
        cout << "No" << "\n";
      }
    }
  }
}

#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main ()
{
  int n , q;
  cin >> n >> q;
  // What about we keep tracks of each pigeon and whereas them in hashmap;
  // pigeon : nest 
  unordered_map <int, int> track;
  for(int i=1; i<=n ; i++)
  {
    track[i] = i;
  }
  unordered_map <int , int> nest;
  for(int i=1; i<=n ; i++)
  {
    nest[i] = 1;
  }
  int overflowed = 0;
  for(int i=0; i<q; i++)
  {
    int t;
    cin >> t;
    if(t==1)
    {
      int p, h;
      cin >> p >> h;
      if(nest[track[p]] == 2)
      {
        overflowed -- ;
      }
      nest[track[p]]--;
      track[p] = h;
      if(nest[h] == 1)
      {
        overflowed ++ ;
      }
      nest[h]++;      
    }
    else if(t==2)
    {
      cout << overflowed << "\n";
    }
  }
}
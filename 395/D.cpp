#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n, q;
  cin >> n >> q;
  unordered_map <int, int> map;
  for(int i=0;i<n ; i++)
  {
    map[i+1] = i+1;
  }

  for(int i=0; i<q; i++)
  {
    int p;
    cin >> p;
    if(p == 1)
    {
      int a, b;
      cin >>a >> b;
      map[a] = b;
      // cout << "Updated : " << a << " " << map[a] << endl;
    } 
    else if(p == 2)

    // NEEDS TO OPTIMIZE WHOLE PART GETTING TLE BECAUSE OF O(3N^2)
    // {
    //   int a ,b;
    //   cin >> a >> b;
    //   vector <int> temp;
    //   for(int j=1; j<=map.size(); j++)
    //   {
    //     if(map[j] == b)
    //     {
    //       temp.push_back(j);
    //     }
    //   }
    //   for(int j=1; j<=map.size(); j++)
    //   {
    //     if(map[j] == a)
    //     {
    //       map[j] = b;
    //       // cout << "Updated : " << j << " " << map[j] << endl;
    //     }
    //   }
    //   for(int j=0; j<temp.size(); j++)
    //   {
    //     map[temp[j]] = a; 
    //   }
    // }
    else if(p==3)
    {
      int a;
      cin >> a;
      cout << map[a] << endl;
    }
  }
}
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  vector < int > v(100, 0);
  cin >> n;
  for(int i=0 ; i<n ;i++)
  {
    int k;
    cin >> k;
    if( k == 1 )
    {
      int p;
      cin >> p; 
      v.push_back(p);
    }
    else if( k == 2 )
    {
      cout << v.back() << "\n";
      v.pop_back();
    }
  }
}
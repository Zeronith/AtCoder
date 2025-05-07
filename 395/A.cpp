#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  vector <int> v;
  for(int i=0; i<n ;i++)
  {
    int t;
    cin >> t;
    v.push_back (t);
    if(i>0)
    {
      if((v[i-1] - v[i]) >= 0 )
      {
        cout << "No";
        return 0;
      }
    }
  }
  cout << "Yes";
}
#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main ()
{
  int n , m;
  cin >> n >> m;
  vector <int> n1, m1;
  int n1Pos = 0, m1Pos = 0;
  int n1PosSum = 0 , m1PosSum = 0;
  for(int i=0; i<n; i++)
  {
    int p;
    cin >> p;
    n1.push_back(p);
    if(p > 0)
    {
      n1Pos++;
      n1PosSum += p;
    }
  }
  for(int i=0; i<m ; i++)
  {
    int p;
    cin >> p;
    m1.push_back(p);
    if(p > 0)
    {
      m1Pos++;
      m1PosSum += p;
    }
  }

  sort(n1.rbegin(), n1.rend());
  sort(m1.rbegin(), m1.rend());

  int max = 0 , sum = 0;
  for(int i=0; i<m1Pos && i<n1.size() ; i++)
  {
    sum = sum + m1[i] + n1[i];
    if(max < sum )
    {
      max = sum ;
    }
    else
    {
      cout << max;
      return 0;
    }
  }
    
  for(int i = m1Pos; i < n1.size(); i++)
  {
    if(n1[i] > 0)
    {
      sum += n1[i];
    }
  }
  cout << sum << "\n";
  
}
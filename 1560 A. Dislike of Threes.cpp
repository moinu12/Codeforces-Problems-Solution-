#include<bits/stdc++.h>
using namespace std ;
map<int,int> Mp ;
int main()
{
    int cnt = 0 ;
  for( int i = 1 ; i< 1000000 ; i++ )
  {
      if( i % 3 != 0 && i % 10 != 3 )
      {
          cnt++;
          Mp[cnt] = i ;
      }
  }
 int t ;
 cin >> t ;
 while(t--)
 {
     int k ;
     cin >> k ;
     cout << Mp[k] << endl ;
 }




    return 0 ;
}

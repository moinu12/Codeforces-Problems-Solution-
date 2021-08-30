#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int n ;
    cin >> n ;
    while(n--)
    {
        int a, b, c ;
        cin >> a >> b >> c ;
        int mx = max(a,b) ;
        int mn = min( a, b ) ;
        int x = 2 + 2*(mx-mn-1) ;
        if( mx-mn -1 < mn-1 )
            cout << -1 << endl ;
        else
        {
            if( c > x )
                cout << -1 << endl ;
            else
            {
                if( c + mx -mn <= x )
                    cout << c+mx-mn<<endl;
                else
                    cout << c -mx+mn << endl ;
            }
        }
    }





    return 0 ;
}

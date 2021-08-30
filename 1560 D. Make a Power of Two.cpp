#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll Pow(ll x, ll n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
    {
        ll y=Pow(x,n/2);
        return y*y;
    }
    else

        return x*Pow(x,n-1);

}
int main()
{
    string str[70] ;
    for(ll i = 0 ; i < 60 ; i++ )
    {
        ll num = Pow(2,i) ;
        stringstream ss;
        ss << num;
        ss >> str[i];
    }
    ll t ;
    cin >> t ;
    getchar() ;
    while( t-- )
    {
        string st ;
        cin>>st ;
        int ans =100 ;
        for( ll i = 0; i < 60 ; i++ )
        {
            string s = str[i] ;
            int cnt = 0,flag=0 ;
            for( int j = 0; j < s.size(); j++ )
            {
                bool f = false ;
                for( ll k = flag ; k < st.size() ; k++ )
                {
                    if( s[j] == st[k])
                    {
                        cnt++;
                        flag = k+1;
                        f = true ;
                        break;
                    }
                }
                if( f== false )
                    break ;
            }
            ll z = st.size() -cnt + s.size()-cnt ;
            if( z < ans )
                ans = z ;
        }

        cout << ans << endl;


    }



    return 0;
}

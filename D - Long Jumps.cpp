/*Bismillahir Rahmanir Rahim */

#include<bits/stdc++.h>
#define ll                      long long int
#define ull                     unsigned long long int
#define nl                      printf("\n")
#define pb(a)                   push_back(a)
#define II                      ( { int a ; scanf("%d",&a) ; a; } )
#define LL                      ( { ll a ; scanf("%lld",&a) ; a; } )
#define DD                      ({double a; scanf("%lf", &a); a;})
#define SS                      ( {string st ; cin>> st ; st ; } )

using namespace std;


void read_and_solve()
{
    ll t = LL;
    while(t--)
    {
        ll n = LL, i,j ;
        vector<ll> v ;
        for( ll i = 0; i < n ; i++ )
        {
            ll x = LL ;
            v.push_back(x) ;
        }
        vector<ll>dp(n+2);
        dp.resize(n+2,0) ;
        ll mx_score = 0 ;
        for( ll i = 0 ; i < v.size() ; i++ )
        {
            ll p = i+1 ;
            if( dp[p] != 0 )
            {
                ll ans = dp[p];
                if( mx_score < ans )
                    mx_score = ans ;

            }
            else
            {
                vector<ll> d,k;

                d.push_back(i+1) ;
                k.push_back(v[i]) ;
                p= i+1;
                ll f = 0 ;
                while(1)
                {
                    p = v[p-1] + p  ;
                    if( n < p )
                        break;
                    if( dp[p] != 0 )
                    {

                        f = dp[p] ;
                        break;
                    }
                    d.push_back(p) ;
                    k.push_back(v[p-1]) ;

                }

                for( ll j = d.size()-1 ; j >= 0 ; j-- )
                {
                    ll y = d[j] ;

                    f+=k[j] ;
                    dp[y] = f ;

                }
                if( mx_score < f )

                    mx_score = f ;

            }
        }
        cout << mx_score << endl ;

    }
}


int main()
{
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);

    read_and_solve();

    return 0;
}


// bool myComparison(const pair<ll,ll> &a,const pair<ll,ll> &b) {  return  ( a.second < b.second ); }

/*
#define lower_str(name1)         transform(name1.begin() , name1.end() , name1.begin(),::tolower )
#define upper_str(name1)         transform(name1.begin() , name1.end() , name1.begin(),::toupper )

// Binary search Method is as follows :
ll bin( ll a[], ll n, ll  sr   )
{
    ll lo = 0, hi = n, mid   ;
    while(  hi  >  lo  )
    {
        mid = (  lo + hi + 1  ) /  2 ;
        if(  a[mid] <= sr  )  // upper bound
            lo  =   mid  ;    // if lo == mid then ---> mid = (lo + hi + 1 ) / 2 ; else mid = ( lo + hi ) / 2 ;
        else
            hi =  mid - 1 ;

    }
    return hi ;



}

// Power Function Method is as follows :
ll Pow( ll x, ll n , ll M )
{

    ll result = 1 ;
    while( n > 0 )
    {
        if( n % 2 == 1 )
            result = ( result  * x ) % M ;
        x = ( x * x ) % M ;
        n = n / 2 ;
    }
    return result;
}

// modInverse Function Method is as follows :
ll modInverse( ll A , ll M )
{
    return Pow ( A , M - 2 , M ) ;
}

 */



/*
************************************************************
   Md Moin Uddin ( Ruman ) ,
  10th batch CSE ,ID : 11808011 ,
  Comilla University (2017-2018)
  Email : moinruman11@gmail.com, Phone : 01879-238107 .
************************************************************
                                                          */


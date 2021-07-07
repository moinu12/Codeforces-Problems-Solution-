/*Bismillahir Rahmanir Rahim */

#include<bits/stdc++.h>
#define ll                      long long int
#define ull                     unsigned long long int
#define nl                      printf("\n")
#define sc                      scanf
#define pf                      printf
#define all(a)                  (a.begin()),(a.end())
#define UNIQUE(X)               (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)          (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define ms(a,b)                 memset(a,b,sizeof(a))
#define pb(a)                   push_back(a)
#define mp                      make_pair
#define db                      double
#define EPS                     10E-10
#define vi                      vector<int>
#define vl                      vector<ll>
#define vii                     vector<vector<int> >
#define vll                     vector<vector<ll> >
#define MOD                     1000000007
#define CIN                     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                ((a)*(b))/gcd(a,b)
#define mxx                     123456789
#define PI                      2*acos(0.0)
#define v_min(a)                *min_element(a.begin(),a.end())
#define v_max(a)                *max_element(a.begin(),a.end())
#define v_sum(a)                accumulate(a.begin(),a.end(),0)
#define SORT(a)                 sort(a.begin(),a.end())
#define v_rev(a)                reverse(a.begin(),a.end())
#define II                      ( { int a ; scanf("%d",&a) ; a; } )
#define LL                      ( { ll a ; scanf("%lld",&a) ; a; } )
#define DD                      ({double a; scanf("%lf", &a); a;})
#define lower_str(name1)         transform(name1.begin() , name1.end() , name1.begin(),::tolower )
#define upper_str(name1)         transform(name1.begin() , name1.end() , name1.begin(),::toupper )
/*
************************************************************
   Md Moin Uddin ( Ruman ) ,
  10th batch CSE ,ID : 11808011 ,
  Comilla University (2017-2018)
  Email : moinruman11@gmail.com, Phone : 01879-238107 .
************************************************************
                                                          */
using namespace std;


// bool myComparison(const pair<ll,ll> &a,const pair<ll,ll> &b) {  return  ( a.second < b.second ); }


void read_and_solve()
{
    ll t = LL ;
    while(t--)
    {
        string st ;
        ll n = LL, k = LL, i, j ;
        cin >> st ;
        vl v ;
        ll cnt = 0 ;
        for( i = 0 ; i < n ; i++ )
        {
            if( st[i] == '0' )
                cnt++;
            else
            {
                if( cnt > 0 )
                    v.pb(cnt) ;
                cnt = 0 ;
            }
        }
        if( cnt > 0 )
            v.pb(cnt) ;
        ll ans = 0 ;
        if( v.size() == 0)
            ans = 0 ;
        else
        {
            for( i = 1 ; i < v.size() - 1 ; i++ )
            {
                ll x = v[i] ;
                if( x > k )
                {
                    x = x - k ;
                    ans += ( x /(k+1)) ;
                }
            }
            if(  (v.size() == 1 && st[0] == '0'  ) || ( v.size() == 1 && st[n-1] == '0' ) )
                ans += (v[0]/(k+1)) ;
            else   if( v.size() == 2 && st[0] == '0' && st[n-1] == '0' )
                ans += (  (v[0]/(k+1) ) +  (v[1]/(k+1) )     ) ;
                else if( st[0] =='0' && st[n-1] == '0' && v.size() == 0)
                    ans = ( (v[0] +k) /(k+1));
            else
            {
                if( st[0] == '0' )
                    ans += ( v[0] /(k+1)) ;
                if(st[n-1] == '0')
                    ans += (v[v.size()-1] / (k+1)) ;
                if( st[0] != '0' )
                    ans += ( (v[0]-k) / (k+1) ) ;
                if( st[n-1] != '0' )
                    ans += ( (v[v.size()-1]-k) / (k+1) ) ;


            }

        }



        cout << ans << endl ;

    }

}


/*

 SET :
        set<int>S;
        set<int>::iterator it;
        for(int i=1;i<100;i++)
          {
            S.insert(i%10);
          }

        cout<<"Set size: "<<S.size()<<endl;

        cout<<"Set element: ";
        for(it=S.begin();it!=S.end();it++)
            cout<<(*it)<<" ";
        cout<<endl;


       }


*/

int main()
{

    read_and_solve();

    return 0;
}






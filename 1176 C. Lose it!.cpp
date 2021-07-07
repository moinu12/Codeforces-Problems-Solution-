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
#define flash_all ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// bool myComparison(const pair<ll,ll> &a,const pair<ll,ll> &b) {  return  ( a.second < b.second ); }


void read_and_solve()
{
    CIN;
    ll n = LL, i ;
    vl v4, v8,v15,v16, v23,v42 ;
    for( i = 0 ; i < n ; i++)
    {
        ll x = LL ;
        if( x == 4 )
            v4.pb(i+1) ;
        if( x == 8 )
            v8.pb(i+1) ;
        if( x == 15 )
            v15.pb(i+1) ;
        if( x == 16 )
            v16.pb(i+1) ;
        if( x == 23 )
            v23.pb(i+1) ;
        if( x == 42 )
            v42.pb(i+1) ;


    }
    bool f  = true ;
    ll ans = 0 ;

    for( i = 0 ; i < v4.size() ; i++ )
    {
        ll sr ;
        ll pos2 ;


        sr = v4[i] ;
        vl :: iterator it, it1 ;

        it1 = upper_bound(v8.begin(), v8.end(), sr );
        pos2 = it1-v8.begin() ;
        if( pos2 == v8.size())
        {
            break ;
        }
        sr = v8[pos2] ;
        it = v8.begin() ;
        v8.erase( it + 0, it + pos2 + 1 ) ;


        it1 = upper_bound(v15.begin(), v15.end(), sr );
        pos2 = it1-v15.begin() ;
        if( pos2 == v15.size())
        {
            break ;
        }
        sr = v15[pos2] ;
        it = v15.begin() ;
        v15.erase(it+0,it+pos2+1) ;



        it1 = upper_bound(v16.begin(), v16.end(), sr );
        pos2 = it1-v16.begin() ;
        if( pos2 == v16.size())
        {
            break ;
        }
        sr = v16[pos2] ;
        it = v16.begin() ;
        v16.erase(it+0,it+pos2+1) ;




        it1 = upper_bound(v23.begin(), v23.end(), sr );
        pos2 = it1-v23.begin() ;
        if( pos2 == v23.size())
        {
            break ;
        }
        sr = v23[pos2] ;
        it = v23.begin() ;
        v23.erase(it+0,it+pos2+1) ;




        it1 = upper_bound(v42.begin(), v42.end(), sr );
        pos2 = it1-v42.begin() ;
        if( pos2 == v42.size())
        {
            break ;
        }
        it = v42.begin() ;
        v42.erase(it+0,it+pos2+1) ;




        ans++ ;
        if( v8.size() == 0 ||  v15.size() == 0 ||  v16.size() == 0 ||  v23.size() == 0 ||  v42.size() == 0 )
            break ;
    }


    cout << n - ans*6 << endl ;



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






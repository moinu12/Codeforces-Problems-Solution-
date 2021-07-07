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

// bool myComparison(const pair<ll,ll> &a,const pair<ll,ll> &b) {  return  ( a.second < b.second );

map<string, ll> ta, pi, gi ;
void read_and_solve()
{
    ll n = LL, i ;
    ll mx_g = 0, mx_t = 0, mx_p = 0 ;
    vector<string > v ;
    for( i = 0 ; i < n ; i++)
    {
        ll s = LL  ;
        string st ;
        cin >> st ;
        v.pb(st);
        ll p = 0,  g = 0, t = 0;
        while(s--)
        {

            string ss ;
            cin >> ss ;
            if( ss[0]==ss[1] && ss[3]== ss[4] && ss[6]==ss[7] && ss[1] == ss[3] && ss[4] == ss[6] )
                t++;
            else if ( ss[0]>ss[1] && ss[1]> ss[3] && ss[4] >ss[6] && ss[3] >ss[4] && ss[6] >ss[7] )
                p++;
            else
                g++;



        }
        if( p > mx_p )
            mx_p = p ;

        if( t > mx_t )
            mx_t = t ;

        if( g > mx_g )
            mx_g = g ;

        pi[st] = p ;
        ta[st] = t ;
        gi[st] = g ;


    }
    vector<string > pp, tt, gg ;
    for( i = 0 ; i < n ; i++ )
    {
        string str = v[i] ;

        if( pi[str] == mx_p )
            pp.pb(str) ;

        if( ta[str] == mx_t)
            tt.pb(str);

        if( gi[str] == mx_g )
            gg.pb(str) ;
    }
    cout << "If you want to call a taxi, you should call: ";
    for( i = 0 ; i <tt.size() -1 ;  i++)
        cout << tt[i] << ", " ;
    cout <<tt[tt.size()-1]<<".\n" ;

    cout <<"If you want to order a pizza, you should call: ";
    for( i = 0 ; i < pp.size() - 1 ; i++)
        cout << pp[i] << ", " ;
    cout << pp[pp.size()-1] <<".\n" ;

    cout << "If you want to go to a cafe with a wonderful girl, you should call: " ;
    for( i = 0 ; i <gg.size() -1 ; i++)
        cout << gg[i] << ", " ;
    cout <<gg[gg.size()-1]<<".\n" ;



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






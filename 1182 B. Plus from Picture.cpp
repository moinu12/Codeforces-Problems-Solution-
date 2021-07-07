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
    ll n = LL, m = LL, i, j ;
    vector<string > v ;
    for( i = 0 ; i < n ; i++)
    {
        string st ;
        cin >> st ;
        v.pb(st) ;
    }
    ll cnt = 0;
    for( i = 0 ; i < n ; i++ )
    {
        string s = v[i] ;
        for ( j = 0 ; j < m ; j++ )
        {
            if(s[j] == '*')
                cnt++;
        }

    }
    ll pos1= 0, pos2 = 0 ;
    bool f = false ;
    for( i = 1 ; i < n - 1; i++ )
    {
        string s = v[i-1], ss = v[i],sss = v[i+1] ;
        for( j = 1 ; j < m -1  ; j++)
        {

            if (  s[j] == ss[j] && ss[j] == sss[j] && ss[j-1] ==ss[j+1] && ss[j] =='*' && ss[j]==ss[j+1] )
            {
                f = true ;
                pos1 = i ;
                pos2 = j;
                break ;
            }
        }
    }
    if( f == false)
        cout << "NO" << endl ;
    else
    {

        string s1 = v[pos1], s2 = "" ;
        s1 = s1 + '.' ;
        for( i = 0 ; i < n ; i++ )
        {
            string s3 = v[i] ;
            s2 +=  s3[pos2] ;
        }
        s2 = s2 + '.' ;
        ll cnt1 = 1, cnt2 = 1 ;

        ll k1 = 0 ;
        for( i = 0 ; i < s1.size() - 1 ; i++ )
        {
            if ( s1[i]== s1[i+1] && s1[i] == '*')
                cnt1++;
            else
            {
                if( cnt1 > 1)
                {
                    k1 = cnt1 ;
                    break ;
                }
                cnt1 = 1 ;
            }
        }
        ll k2 = 0 ;
        for( i = 0 ; i < s2.size() - 1 ; i++ )
        {
            if ( s2[i]== s2[i+1] && s2[i] == '*')
                cnt2++;
            else
            {
                if( cnt2 > 1)
                {
                    k2 = cnt2 ;
                    break ;
                }
                cnt2 = 1 ;
            }
        }


        if( k1 + k2 - 1== cnt )
            cout  << "YES" << endl;
        else
            cout << "NO" << endl;


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






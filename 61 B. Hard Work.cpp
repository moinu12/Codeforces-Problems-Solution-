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
    string a = "", b = "", c = "", s1, s2, s3, s4, s5, s6  ;
    string  s, ss, sss ;
    cin >> s >> ss >> sss ;
    ll i ;
    for( i = 0 ; i < s.size() ; i++ )
    {
        if( ( s[i] >= 'a' && s[i] <= 'z' )  || ( s[i] >= 'A' && s[i] <= 'Z')  )
            a += s[i] ;
    }
    for( i = 0 ; i < ss.size() ; i++ )
    {
        if( ( ss[i] >= 'a' && ss[i] <= 'z' )  || ( ss[i] >= 'A' && ss[i] <= 'Z')  )
            b += ss[i] ;
    }
    for( i = 0 ; i < sss.size() ; i++ )
    {
        if( ( sss[i] >= 'a' && sss[i] <= 'z' )  || ( sss[i] >= 'A' && sss[i] <= 'Z')  )
            c += sss[i] ;
    }
    lower_str(a);
    lower_str(b);
    lower_str(c) ;

    s1 = a + b + c ;
    s2 = a + c + b ;
    s3 = b + a + c ;
    s4 = b + c + a ;
    s5 = c + b + a ;
    s6 = c + a + b ;

    ll n = LL ;
    while(n--)
    {
        string st, str ="" ;
        cin>> st ;
        for( i = 0 ; i < st.size() ; i++ )
        {
            if( ( st[i] >= 'a' && st[i] <= 'z' )|| ( st[i] >= 'A' && st[i] <= 'Z')  )
                str += st[i] ;
        }
        lower_str(str) ;
        if( str == s1 || str == s2 || str == s3 || str == s4 || str == s5 || str == s6 )
            cout << "ACC" << endl ;
        else
            cout << "WA" << endl ;




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






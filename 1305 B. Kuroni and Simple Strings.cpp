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
map<ll,ll> Mp1, Mp2 ;

void read_and_solve()
{
    string st, ss ;
    cin >> st ;
    ss = st ;



    ll ind = 0, si = 0;
    while(1)
    {
        ll l = st.size() ;
        ll i, j ;
        ll c1 = 0, c2 = 0 ;
        for( i = 0,j = l-1  ;   i < l, j >=0 ; j--, i++)
        {
            if(st[i] =='(')
                c1++;
            if(st[j] == ')')
                c2++;
            Mp1[i] = c1 ;
            Mp2[j]=c2;

        }
        ll mx = 0 ;
        ll pos = 0 ;
        for(i = 0; i < l ; i++ )
        {
            ll x = Mp1[i] ;
            ll y = Mp2[i] ;
            if( y>=x )
            {
                if( 2*x > mx)
                    mx = 2*x ;
                pos =  i ;
            }

        }

        ll ans =  mx ;
        if( mx ==  0 ) {
                Mp1.clear() ;
        Mp2.clear() ;
            break ;
        }

        ans = ans /2 ;
        ll c = 0 ;

        for( i = 0 ; i <= pos ; i++ )
        {
            if( st[i] == '(')
            {
                st[i] ='0' ;
                c++ ;

                if( c == ans)
                    break ;
            }

        }
        c = 0 ;
        for( i = pos+1 ; i < l ; i++ )
        {
            if( st[i] == ')')
            {
                c++ ;
                st[i] = '0' ;
                if( c == ans)
                    break ;
            }

        }
        Mp1.clear() ;
        Mp2.clear();
        ind++;
    }
    vector<vector<ll> > vec(ind) ;
    ll indx = 0 ;
    st = ss ;
    while(1)
    {
        ll l = st.size() ;
        ll i, j ;
        ll c1 = 0, c2 = 0 ;
        for( i = 0,j = l-1  ;   i < l, j >=0 ; j--, i++)
        {
            if(st[i] =='(')
                c1++;
            if(st[j] == ')')
                c2++;
            Mp1[i] = c1 ;
            Mp2[j]=c2;

        }
        ll mx = 0 ;
        ll pos = 0 ;
        for(i = 0; i < l ; i++ )
        {
            ll x = Mp1[i] ;
            ll y = Mp2[i] ;
            if( y>=x )
            {
                if( 2*x > mx)
                    mx = 2*x ;
                pos =  i ;
            }

        }

        ll ans =  mx ;
        if( mx ==  0 )
            break ;

        ans = ans /2 ;
        ll c = 0 ;

        for( i = 0 ; i <= pos ; i++ )
        {
            if( st[i] == '(')
            {
                st[i] ='0' ;
                c++ ;
                vec[indx].pb(i+1) ;
                if( c == ans)
                    break ;
            }

        }
        c = 0 ;
        for( i = pos+1 ; i < l ; i++ )
        {
            if( st[i] == ')')
            {
                c++ ;
                vec[indx].pb(i+1) ;
                st[i] = '0' ;
                if( c == ans)
                    break ;
            }

        }
        Mp1.clear() ;
        Mp2.clear();
        indx++;
    }

    cout << vec.size() << endl ;
    for( ll i = 0 ; i < vec.size() ; i++ )
    {
        cout << vec[i].size() << endl ;
        for( ll j = 0 ; j < vec[i].size() ; j++ )
            cout << vec[i][j] << " " ;
        nl;
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






/*Bismillahir Rahmanir Rahim */

#include<bits/stdc++.h>
#define Input                   freopen("in.txt","r",stdin)
#define Output                  freopen("out.txt","w",stdout)
#define ll                      long long int
#define ull                     unsigned long long int
#define pii                     pair<int,int>
#define pll                     pair<ll,ll>
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
#define pfi(a)                   pf("%d\n",a)
#define pfl(a)                   pf("%lld\n",a)
#define pfd(a)                   pf("%lf\n",a)
#define pff(a)                   pf("%f\n",a)
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




void read_and_solve()
{
ll n = LL , i ;
ll a[n+2] ;
vl v ;
for( i  = 0 ; i < n ;i++ )
    a[i] = LL ;
sort(a,a+n);
v.pb(a[n-1]);
for( i = 0 ; i < n ; i++ )
    v.pb(a[i]);
v.pb(a[0]);
bool f = true ;

for( i = 1 ; i < v.size()-1 ;  i++ ){
    ll x = v[i];
    ll y = v[i-1] + v[i+1];
    if( y <= x)
    {
        f = false ;
        break;
    }

}
if( f == false)
    cout << "NO" << endl ;
else
{
    cout << "YES" << endl ;
    for( i = 1 ; i < v.size()-1 ; i++ )
        cout << v[i] << " ";
    nl;
}




}


/*
 Binary Search : if (binary_search(a, a + a.size(), 2))
                 if(binary_search(v.begin(),v.end(),k))

                 std::vector<int>::iterator upper1, upper2;

                 // std :: upper_bound
                 upper1 = std::upper_bound(v.begin(), v.end(), 35);
                 upper2 = std::upper_bound(v.begin(), v.end(), 45);

                   std::cout << "\nupper_bound for element 35 is at position : "<< (upper1 - v.begin());
                   std::cout << "\nupper_bound for element 45 is at position : "<< (upper2 - v.begin());

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


MAP  :

        map<char,int>Map;
        map<char,int>::iterator it;
        for(char c='a';c<='j';c++)
        {
             int value=(int)c;
              Map[c]=value;
        }

        cout<<"Map size: "<<Map.size()<<endl;

       cout<<"Map key value: \n";
       for(it=Map.begin();it!=Map.end();it++)
       {
          cout<<"Key-> "<<(*it).first<<" value-> "<<(*it).second<<endl;
       }



*/
int main()
{

    read_and_solve();

    return 0;
}





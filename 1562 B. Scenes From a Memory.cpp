#include<bits/stdc++.h>
using namespace std ;
map<int,int > mp ;
bool is_prime(int n )
{
    int cnt = 0 ;
    int x = sqrt(n) ;
    for( int i = 2 ; i <=x ; i++ )
    {
        if( n % i == 0 )
        {
            cnt++ ;
            break;
        }
    }
    if(cnt> 0 )
        return false ;
    else
        return true ;

}
Possible_subset(int a[], int  n )
{
    for( int i = 0 ; i< (1<<n ) ; i++ )
    {
        int b[n+2], cnt = 0 ;
        for( int j = 0 ; j < n ; j++ )
        {
            if( i &(1<<j))
            {
                b[cnt]= a[j] ;
                cnt++;
            }
        }
        int num = 0,p = 0 ;
        for( int j = cnt -1 ; j >= 0 ; j-- )
        {
            num += ( b[j] * pow(10,p)) ;
            p++;
        }
        bool f =  is_prime(num) ;
        if( f == false )
        {
            cout << cnt << endl ;
            cout << num << endl ;
            break ;
        }
    }
}
int main()
{
    int n ;
    cin >> n ;
    while(n--)
    {
        int k ;
        cin >> k ;
        string st ;
        cin >> st ;
        bool f = false ;
        for( int i = 0 ; i < st.size() ; i++ )
        {
            if( st[i] == '1' ||  st[i] == '4' ||  st[i] == '6' ||  st[i] == '8' ||  st[i] == '9')
            {
                cout << 1 << endl;
                cout << st[i] << endl ;
                f = true ;

            }
            if( f == true )
                break ;


        }
        if( f == false )
        {
            for( int i = 0 ; i < st.size() ; i++ )
            {
                mp[st[i] ] = mp[st[i] ] +1 ;
                if( mp[st[i]] == 2 )
                {
                    cout << 2 << endl;
                    cout <<st[i]<<st[i] << endl;
                    f = true ;
                }
                if( f == true )
                    break;
            }
        }
        if( f == false )
        {
            int a[st.size()+2 ] ;
            for(int i = 0 ; i < st.size() ; i++ )
                a[i] = st[i]-48 ;
            Possible_subset(a,st.size()) ;


        }
        mp.clear() ;


    }
    return 0 ;
}

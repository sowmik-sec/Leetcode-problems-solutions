/******* BISMILLAHIR RAHMANIR RAHIM *******/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
#define u unsigned
#define vii vector<ll>
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz size()
#define precision cout<<setprecision(10)<<fixed
#define tt int t;cin>>t;while(t--)
#define loop(n) for(int i=0;i<n;i++)
#define lop(a,n) for(int i=a;i<=n;i++)
#define rloop(n) for(int i=n-1;i>=0;i--)
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define ioboost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
bool gre(ll a,ll b){return a>b;}

/**
24.    *        *
       **      **
       * *    * *
       *  *  *  *
       *   **   *
       *   **   *
       *  *  *  *
       * *    * *
       **      **
       *        *
*/

void pattern(int n)
{
    int cnt = 1;
    for(int row=1;row<=2*n;row++) {
        int nofcol, noofspace, inspace;
        nofcol = row<=n? row: 2*n-row;
        noofspace = row<=n? row-2 : 2*n-row-1;
        inspace = row<=n? (n-row)*2 : (row-n-1)*2;
        if(row==1 or row==n*2){
            cout<<"*";
            for(int space=1;space<=inspace;space++)cout<<" ";
            cout<<"*"<<endl;
        }
        else {
            cout<<"*";
            for(int space=1;space<=noofspace;space++)cout<<" ";
            cout<<"*";
            for(int space=1;space<=inspace;space++) cout<<" ";
            cout<<"*";
            for(int space=1;space<=noofspace;space++)cout<<" ";
            cout<<"*";
            cout<<endl;
        }
    }
}

int32_t main()
{
    ioboost;
    int n;cin>>n;
    pattern(n);
    return 0;
}

/*****************  ALHAMDULILLAH  *****************/




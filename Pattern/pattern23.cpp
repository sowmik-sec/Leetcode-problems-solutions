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
23.        *      *
         *   *  *   *
       *      *      *

*/

void pattern(int n)
{
    int cnt = 1;
    for(int row=1;row<=n;row++) {
        int nofcol, noofspace, inspace;
        nofcol = row<=n? row: 2*n-row;
        noofspace = row<=n? (n-row)*2 : (row-n)*2;
        //inspace = row<=n? row*2-3 : (n-(row-n))*2-3;
        for(int space=1;space<=(n-row)*2;space++) cout<<" ";

        cout<<"*";
        for(int space=1;space<=(row*4)-5;space++) cout<<" ";
        if(row!=1)cout<<"*";
        for(int space = 1;space<=(n-row)*4-1;space++) cout<<" ";
        if(row!=n)cout<<"*";
        for(int space=1;space<=(row*4)-5;space++) cout<<" ";
        if(row!=1)cout<<"*";
        cout<<endl;
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




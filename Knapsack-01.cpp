#include<bits/stdc++.h>   //tabulation mathod
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
typedef long long int ll;

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    // ll n=4;
    // ll m=8;
    // ll p[4]={1,2,5,6};
    // ll w[4]={2,3,4,5};
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    ll p[n];
    ll w[n];
    rep(i,0,n){
        cin>>p[i];
    }
    rep(i,0,n){
        cin>>w[i];
    }
    ll v[n+1][m+1]={0};
    rep(i,0,m+1){
        v[0][i]=0;
    }
    
    rep(i,1,n+1){
        rep(j,1,m+1){
            if((j-w[i-1])>=0)
            v[i][j]=max(v[i-1][j],v[i-1][j-w[i-1]]+p[i-1]);
            else
            v[i][j]=v[i-1][j];
        }
    }
    // rep(i,0,n+1){
    //     rep(j,0,m+1){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<v[n][m]<<endl;

    

    return 0;
}
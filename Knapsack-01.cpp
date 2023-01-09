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
    ll n=4;
    ll m=8;
    vector<ll> p{1,2,5,6};
    vector<ll> w{2,3,4,5};
    ll v[n+1][m+1]={0};
    rep(i,1,n+1){
        rep(j,1,m+1){
            v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
        }
    }
    // cout<<1<<endl;
    cout<<v[n][m]<<endl;
    

    return 0;
}
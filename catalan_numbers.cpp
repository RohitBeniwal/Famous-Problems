#include<bits/stdc++.h>

#define MOD 1000000007
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define vll vector<ll>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
typedef long long int ll;
typedef long double lld;

using namespace std;

ll fact(ll n){
    return (n==1 || n==0 )?1:n*fact(n-1);
}

ll catalan(ll n){
    ll ans=fact(2*n);
    ans/=fact(n+1);
    ans/=fact(n);
    return ans;
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
   cout<<catalan(4)<<endl;
}
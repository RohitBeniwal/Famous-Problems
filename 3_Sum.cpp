#include<bits/stdc++.h>
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
    ll n;
    cin>>n;
    vector<ll> v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<vector<ll>> ans;
    rep(i,0,n-2){
        if(i==0 || (i>0 && v[i]!=v[i-1])){
            ll low=i+1;
            ll end=n-1;
            ll sum=0-v[i];
            while(low<end){
                if(v[low]+v[end]==sum){
                    vector<ll> temp;
                    temp.push_back(v[i]);
                    temp.push_back(v[low]);
                    temp.push_back(v[end]);
                    ans.push_back(temp);
                    while(low<end && v[low]==v[low+1]){
                        low++;
                    }
                    while(low<end && v[end]==v[end-1]){
                        end--;
                    }
                    low++;
                    end--;
                }
                else if(v[low]+v[end]<sum){
                    low++;
                }
                else end--;
            }
        }
    }
    rep(i,0,ans.size()){
        rep(j,0,ans[i].size()){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int size;
    cin>>size;
    int k;
    cin>>k;
    vector<pair<int,int>>arr(size);
    for(int i=0;i<size;i++)
    {
       cin>>arr[i].first>>arr[i].second;
    }

    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
             if(abs(arr[i].first-arr[j].first)+abs(arr[i].second-arr[j].second)<=k)count++;
        }
        if(count==size){
            cout<<1<<"\n";
            return;
        }
    }
    cout<<-1<<'\n';
    return;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
    
}
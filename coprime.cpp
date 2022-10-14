#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int frr[1001];
        for(int i =0;i<1001;i++) frr[i] =-1;
        int *arr = new int[n+1];
        for(int i =1; i<=n;i++){
            cin>>arr[i];
            frr[arr[i]]=i;
        }
        int ans = -1;
        for(int i =0;i<1001;i++){
            if(frr[i]==-1) continue;

            int temp =-1;
            for(int j =0;j<1001;j++){
                if(frr[j]==-1) continue;
                int find_gcd = __gcd(i,j);
                if(find_gcd==1){
                    // store actual i+j value
                    if(frr[i]+frr[j]>temp)
                    temp = frr[i]+frr[j];
                }
            }
            ans = max(ans,temp);
        }
       cout<<ans<<endl; 
        

    }
}
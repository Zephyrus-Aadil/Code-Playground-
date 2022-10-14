# include <bits/stdc++.h>
using namespace std;
void display(int*arr,int n){
    for(int i = 0; i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main() {
    // your code here
    int n;
    cin>>n;
    int *arr = new int[n];
  	for(int i =0; i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int m = *max_element(arr,arr+n);
    int freq[m+1];
    for(int i =0; i<m+1;i++)freq[i]=0;
    for(int i =0;i<n;i++) freq[arr[i]]++;
   // display(freq,m+1);
     int min =-1;
     int op =INT_MAX;
    int flag = true;
    vector<int>frr;
    for(int i =0;i<m+1;i++){
        if(freq[i]!=0) frr.push_back(i);
    }
    for(int i =0; i<frr.size();i++){
      if(freq[frr[i]]%3==0 || freq[frr[i]]>=3){
        //cout<<freq[frr[i]]<<" "<<frr[i]<<endl;
        cout<<"0\n";
        flag = false;
        break;
      }
      if(i==0){   // check only for forward
        int t = freq[frr[i]]%3;
        if(min<t){
          
          if(abs(frr[i+1]-frr[i])<op) op = abs(frr[i+1]-frr[i]),min =t;
        }
        }
      else if(i==frr.size()-1) // check only for backward
      {
        int t = freq[frr[i]]%3;
        if(min<t){
          if(abs(frr[i]-frr[i-1])<op) op = abs(frr[i]-frr[i-1]),min =t;
        }
      }
      else{
        int t =freq[frr[i]]%3;
        if(min<t){
          if(abs(frr[i]-frr[i-1])<op) op =abs(frr[i]-frr[i-1]),min =t;
          if(abs(frr[i+1]-frr[i])<op) op = abs(frr[i+1]-frr[i]),min =t;
        }
      }  
    }
  if(flag) {
    cout<<op<<endl;
    //cout<<min<<endl;
  }
  
    return 0;
}
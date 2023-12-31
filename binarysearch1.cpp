#include<bits/stdc++.h>
using namespace std;

int main(){
int n; cin>>n;
int arr[n+2];
for(int i=0;i<n;i++) {cin>>arr[i];}


int l=0;
int r=n-1;

int x;
cin>>x;

while(l<=r){
int mid= (l+r)/2;

    if(x==arr[mid]) cout<<"YES"<<endl; int 
    if(x>arr[mid]) l=mid+1;
    else r= mid-1;


}



    return 0;
}
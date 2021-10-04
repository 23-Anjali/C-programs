#include<iostream>
using namespace std;
int Binary(int arr[],int n,int key){
int mid;
int l=0;
int u=n-1;
    
 while(l<=u){
      mid=(l+u)/2;
     if(arr[mid]==key){
         return mid;
     }
     else if(key>arr[mid]){
           l=mid+1;
     }
     else{
         u=mid-1;
     }
    
 }
 return -1;
 }

int main(){
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<Binary(arr,n,key)<<endl;
    return 0;
}p
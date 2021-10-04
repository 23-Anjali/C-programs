#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
}
int maxn=INT_MIN;
int minn=INT_MAX;
for(int i=0;i<n;i++){
   if( maxn < arr[i]){
   maxn=arr[i];
}
 if( minn>arr[i]){
 minn=arr[i];
}

}
cout<<"maximunvalue"<<maxn<<" "<<"minimum value"<<minn;
return 0;
}
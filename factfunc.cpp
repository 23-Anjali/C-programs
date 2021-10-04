#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
        for(int i=n;i>=1;i--){
            
            f=f*i;
        }
    
    return f ;
}
    int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}
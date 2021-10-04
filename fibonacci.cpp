#include<iostream>
using namespace std;
int main(){
    int a=0; int b=1;
    int c,i,n;
   
    cin>>n;
    for(i=1;i<=n;i++){
    cout<<a;
    c=a+b;
    a=b;
    b=c;
    }

    return 0;

}
//void fib(int n){
//     int a=0,b=1,c;
    
//     for(int i=1;i<=n;i++){
//         cout<<a;
//         c=a+b;
//        a=b;
//        b=c;
//     }
    
//     return ;
// }

// int main(){
//     int n;
//     cin>>n;
//     fib(n);
//     return 0;

// }
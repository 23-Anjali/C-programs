#include<iostream>
#include<math.h>
using  namespace std;


bool isPrime(int n){
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    
    return true;
}


int main(){
    int a,b;
    int i;
     cin>>a>>b;
     
    for(i=a;i<=b; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
     }
    return 0;
}
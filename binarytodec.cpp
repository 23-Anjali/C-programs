#include<iostream>
using namespace std;
int binaryToDecimal(int num)
{  
int base=1;
  int dec=0;

    int temp;
    temp=num;
    while(temp>0){
        int last_value=temp%10;
        temp=temp/10;
        dec+=last_value*base;
        base=base*2;
    }
    
    return dec;
} 


int main(){
    int n;
    cin>>n;
  
   cout<<binaryToDecimal(n)<<endl;
   return 0;

}
#include<iostream>
using namespace std;
 void print(int num){
     cout<<num<<endl;
     return;
 }
 int add(int num1,int num2){
     print(num1);
     print(num2);
     cout<<endl;
     int sum=num1+num2;  
     return sum;
 }
 int main(){
     int a;
     int b;
     cin>>a>>b;
     int result = add(a,b);
     cout<<result<<endl;
 }
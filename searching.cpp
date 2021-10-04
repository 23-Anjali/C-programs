#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int i;
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int element;
//     cin>>element;
//     for(i=0;i<n;i++){
//         if(arr[i]==element)
//         {
//             cout<<"element is present at index at"<<i;
//             break;
//         }
       
//     }
//     cout<<"not found";
    
//     return 0;
// }
int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        {
           return i;
        }

    }
    return -1;
}




int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<"elementis at index"<< LinearSearch(arr,n,key)<<endl;

    return 0;

}
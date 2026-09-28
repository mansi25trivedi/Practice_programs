#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    int arr[n] ;
    cout<<"enter the elements in the array: "<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    //Replace all even numbers with 1 and all odd with 0.
    for(int i = 0; i < n ; i++){
        if(arr[i]%2==0){
            arr[i]=1;
        }else{
            arr[i]=0;
        }
       cout<<arr[i]<<" ";
    }
}

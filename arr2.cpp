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
    cout<<endl;


    //Swap the first and last elements of the array
    int temp;
    temp = arr[0];
    arr[0]= arr[n-1];
    arr[n-1] = temp;
     for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

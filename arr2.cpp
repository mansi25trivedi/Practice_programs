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

    //Reverse an array (without using built-in reverse)
    cout<<endl<<"reverse the array: ";
    for(int i=0;i<n;i++){
  int j=n-1;
  int temp= arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
for(int i = 0 ; i  <n ; i++){
    cout<<arr[i]<<" ";
}

// Copy one array to another manually.
int arr_copy[n];
for(int i = 0 ;  i < n ; i++){
    arr_copy[i] = arr[i];
}

//Rotate an array by one position to the left.
int firstele = arr[0];
for(int i = 1 ; i < n ; i++){
    arr[i-1] = arr[i];
}
arr[n-1] = firstele;

//Rotate an array by one position to the right.
cout<<endl<<"Rotate an array by one position to the right.: "<<endl;
int lastele = arr[n-1];
for(int i = n-2 ;  i >=0 ; i--){
    arr[i+1] = arr[i];
}
arr[0] = lastele;

//Merge two arrays into a third array.
cout<<endl<<"Merge two arrays into a third array. "<<endl;
int arr1[n+n];
for(int i = 0 ;  i < n+n ; i++){
    for(int j = 0 ; j < n ; j++){
        arr1[i] = arr[j];
    }
    for(int j = 0 ; j < n ; j++){
        arr1[i] = arr_copy[j];
    }
}
for(int i = 0 ; i < n+n ; i++){
    cout<<arr1[i]<<" ";
}

//Swap alternate elements (1st ↔ 2nd, 3rd ↔ 4th, etc.).
cout<<endl<<"Swap alternate elements (1st ↔ 2nd, 3rd ↔ 4th, etc.). "<<endl;
for(int i = 0 ; i < n ; i++){
    if(i %2 == 0){
        swap(arr[i] , arr[i+1]);
    }
    cout<<arr[i]<<" ";
}

//Find element-wise sum of two arrays (A[i] + B[i])
cout<<endl<<"Find element-wise sum of two arrays (A[i] + B[i]) : " <<endl;
for(int i = 0 ; i < n ; i++){
    cout<<arr[i] + arr_copy[i]<<" ";
}
}



#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the size of the array : ";
   cin>>n;
   cout<<"enter the elelemt of the array: ";
   int arr[n];
   for(int i = 0 ; i <n ; i++){
    cin>>arr[i];
   }
   cout<<endl<<"The largest element is : ";
   int max = arr[0];
   for(int i = 0 ; i <n ; i++){
       if(max < arr[i]){
             max = arr[i];  }
         }
   cout <<max <<endl;
  int smax = arr[0];
  for(int i = 0 ; i < n ; i++){
     if(max >arr[i] && smax <arr[i]){
             smax = arr[i];   }
        }
  cout << "the second largest element is : " <<smax<<endl;
int min = arr[0] , smin = arr[0];
for(int i = 0 ; i <n ; i++){
    if(min>arr[i]){    min = arr[i]; }
      }
cout<< " the smallest element is : " <<min<<endl;
for(int i = 0 ; i<n ; i++){
    if(min<arr[i] && smin>arr[i] && smin != min){
         smin = arr[i];
        }
   }
cout<<"the second smallest element in the array is : " << smin<<endl;

return 0;
}


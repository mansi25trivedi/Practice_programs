#include<iostream>
using namespace std;
int main(){
   int n;
   int min_idx;
int max_idx;
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
             max = arr[i];
             max_idx = i ;
               }
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
         min_idx = i ;
        }
   }
cout<<"the second smallest element in the array is : " << smin<<endl;

cout<< endl<<"6. Count how many elements are positive, negative, or zero."<<endl;
int p, ne ,z;
p=0 ;
ne=z=p;
for(int i=0; i<n; i++){
    if(arr[i]>0){
        p++;
    }else if(arr[i]<0){
        ne++;
    }else if(arr[i]==0){
        z++;
    }

}
cout<<endl<<"Count of positive elements is: "<<p;
    cout<<endl<<"Count of negetive elements is: "<<ne;
    cout<<endl<<"Count of zero is: "<<z;

    cout<<endl<<"the index of the maximum element is : "<<max_idx;
    cout<<endl<<"index of minimum element is : "<<min_idx;
    cout<<endl<<endl;
    cout<<endl<<"Input an element x — check if it exists in the array. "<<endl;
    int x;
    cout<<"enter the element you wwant to search in the array: ";
    cin>>x;
    for(int i=0; i<n ; i++){
        if(arr[i] == x){
            cout<<"element found"<<endl;
            break;
        }
    }

return 0;
}


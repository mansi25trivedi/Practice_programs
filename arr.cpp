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

    cout<<endl<<"Count how many times a given element appears: element is = "<<x;
    int c1= 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==x){
            c1++;
        }
    }
    cout<<endl<<"the number of times the element "<<x<<" appears is : "<<c1<<endl;

    cout<<"Find the first occurrence of a given number. x : "<<x<<endl;
    int first_occurrence ;
    for(int i=0; i<n ; i++){
        if(arr[i] == x){
            first_occurrence = i;
            break;
        }
    }
    cout<<"The first occurrence of the given number "<<x<<" is at index : "<<first_occurrence<<endl;
//Find the last occurrence of a given number.
int last_occurrence = -1;
for(int i = n-1 ; i>=0 ; i--){
    if(arr[i] == x){
        last_occurrence = i;
        break;
    }
}
cout<<endl<<"Find the last occurrence of a given number. "<<x<<" is at index "<<last_occurrence;
        cout<<endl;

        //Find the sum of even elements only.
        int evensum = 0;
        for(int i = 0 ; i<n ; i++){
            if(arr[i]%2 == 0){
                evensum += arr[i];
            }
        }
        cout<<endl<<"Sum of even elements only. : "<<evensum<<endl;

//Check if all elements in an array are unique.
cout<<endl<<"Check if all elements in an array are unique. : ";
bool f = true;
for(int i = 0 ; i < n ; i ++){
    for(int j = i+1 ; j<n ; j++){
        if(arr[i] == arr[j]){
            f = false;
        }
    }
}
cout<< " "<<f<<endl;
//Count how many numbers are divisible by 3 and 5 both.
int c2 = 0;
for(int i = 0 ; i < n ; i++){
    if(arr[i] % 3==0 && arr[i] % 5 == 0){
        c2++;
    }
}
cout<<endl<<"Count how many numbers are divisible by 3 and 5 both. : " <<c2<<endl;

return 0;
}


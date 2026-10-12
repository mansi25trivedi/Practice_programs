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

//Find element-wise sum of two arrays (A[i] + B[i]) and element-wise product
cout<<endl<<"Find element-wise sum of two arrays (A[i] + B[i]) : " <<endl;
for(int i = 0 ; i < n ; i++){
    cout<<arr[i] + arr_copy[i]<<" ";
}
cout<<endl<<"element-wise product : ";
for(int i = 0 ; i < n ; i++){
    cout<<arr[i] * arr_copy[i]<<" ";
}

cout<<endl<<"Compare two arrays — check if they contain the same elements (ignore order). "<<endl;
int is_there = 0;
for(int i = 0 ; i<n ; i++){
        is_there = 0;
    for(int j = 0 ; j < n ; j++){
        if(arr[i] == arr_copy[j]){
            is_there = 1;
            break;
        }
    }
    if(is_there == 0){
        cout<<endl<<"not contain the same elements "<<endl;
    }else{
        continue;
    }
}
cout<<endl<<"contains the same elements"<<endl;

//Find the common elements between two arrays.
cout<<endl<<"Find the common elements between two arrays."<<endl;
for(int i = 0 ; i < n ; i++){
        is_there  = 0;
    for(int j = 0 ; j < n ; j++){
        if(arr[i] == arr_copy[j]){
            is_there = 1;
            cout<<" Common element is : "<<arr[i];
            break;
        }
    }
}

//Find elements that are in one array but not in the other.
cout<<" Find elements that are in one array but not in the other. ";
for(int i = 0 ; i<n ; i++){
        is_there = 0;
    for(int j = 0 ; j < n ; j++){
        if(arr[i] == arr_copy[j]){
            is_there = 1;
            break;
        }
    }
    if(is_there == 0){
            cout<<endl<<arr[i]<<" not present ";
        cout<<endl<<"not contain the same elements "<<endl;
    }else{
        continue;
    }
}

//Create a frequency array of numbers (count occurrence of each number).
cout<<endl<<"Create a frequency array of numbers (count occurrence of each number). : "<<endl;
const int MAX_LIMIT = 1000;

    // 2. Initialize the fixed-size array with zeros on the stack
    int freq[MAX_LIMIT] = {0};

    // 3. Count occurrences directly
    for (int i = 0; i < n; i++) {
        // Guard to prevent out-of-bounds memory access
        if (arr[i] >= 0 && arr[i] < MAX_LIMIT) {
            freq[arr[i]]++;
        }
    }

    // 4. Find the actual max element just to optimize the printing loop
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    // 5. Output the results
    for (int i = 0; i <= max_val; i++) {
        if (freq[i] > 0) {
            cout << "Number " << i << " occurs " << freq[i] << " times\n";
        }
    }

    //Output ONLY elements with a frequency strictly greater than 1
    cout << "Elements appearing more than once: ";
    for (int i = 0; i <= max_val; i++) {
        if (freq[i] > 1) {
            cout << i << " ";
        }
    }

    //Find the second smallest element in an array.
    cout<<endl<<"Find the second smallest element in an array."<<endl;
    int small2 , small1;
    small1 = arr[0];
    small2 = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < small1){
            small1 = arr[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < small2 && arr[i]>small1){
            small2 = arr[i];
        }
    }
    cout<<endl<<"smallest element is: "<<small1;
    cout<<endl<<"2nd smallest element is :"<<small2;

}



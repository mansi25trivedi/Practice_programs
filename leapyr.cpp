//check if the given year is a leap year or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the year: ";
    cin>>n;
    if(n%100 == 0){
        if(n%400 == 0){
            cout<<"It is a leap year";
        }else{
            cout<<"not a leap year";
        }
    }else{
        if(n%4 == 0){
            cout<<"it is a leap year";
        }
        else{
            cout<<"not a leap year";
        }
    }
    return 0;
}

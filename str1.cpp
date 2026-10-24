#include<iostream>
#include<string>
using namespace std;
int main(){
    //Take a string input and print its length.
    string str1;
    cout<<"enter any string: ";
    cin>>str1;
    cout<<"the length of the string is: "<<str1.length();

    //Print the first and last character of a string
    cout<<endl<<"Print the first character of the string :"<<str1[0]<<" and last character of a string: "<<str1[str1.length() -1]<<endl;
    string str2;
    cout<<"enter any string : ";
    cin>>str2;
    cout<<str1<<str2;


    return 0;
}

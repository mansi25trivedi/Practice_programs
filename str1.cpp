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
    //Concatinate 2 strings
    string str2;
    cout<<"enter any string : ";
    cin>>str2;
    cout<<str1<<str2;
    //Convert all characters of a string to uppercase
    cout<<endl<<"convert all strig to uppercase: ";
    int diff = 'a' - 'A'; // This automatically evaluates to 32

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] = str1[i] - diff;
            // Or written directly: s[i] = s[i] - ('a' - 'A');
        }
    }

    cout << str1 << "\n";
    //Convert all characters of a string to lowercase.
    cout<<"Convert all characters of a string to lowercase.  : ";
    int d = 'A' - 'a';
    for(int i = 0 ; i < str1.length() ; i++){
        if(str1[i] >='A' && str1[i] <='Z'){
            str1[i] = str1[i] - d;
        }
    }
    cout<<str1<<endl;



    return 0;
}

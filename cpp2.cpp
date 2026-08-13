//Take a character and check if it’s a vowel or consonant.
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter any character: ";
    cin>>c;
    if(c=='a'|| c=='e'|| c=='o' || c=='i' || c=='u'){
        cout<<"it is a vowel";
    }else{
    cout<<"consonant it is.";
    }
}

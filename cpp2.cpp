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
    cout<<"consonant it is."<<endl;
    }

    //Check whether a given integer is single-digit, double-digit, or multi-digit.
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int c1 = 0;
    while(n!=0){
        int r=n%10;
        n=n/10;
        c1++;
    }
    if(c1==1){
        cout<<"single digit";
    }else if(c1==2){
    cout<<"double digit"<<endl;
    }else{
    cout<<"multi digit"<<endl;}

    //Take a 4-digit number and check if the first and last digits are equal.
    int n1;
    cout<<"enter any 4 digit number";
    cin>>n1;
    int f=n1/1000 , l = n1%10;
    if(n1<9999 && n1>=1000){
            if(f==l){
                cout<<"equal digits"<<endl;
            }else{
            cout<<"not equal digits"<<endl;}
    }else{
        cout<<"not a 4 digit number"<<endl;
    }

    //8. Take an integer (1–9999) and check if the sum of its digits is greater than the product of its digits.
    int n2;
    cout<<"enter any integer between 1 -9999: ";
    cin>>n2;
    int nn = n2, sum = 0 , mul = 1;
    while(nn !=0){
        int r= nn%10;
        nn /= 10;
        sum += r;
    }
    while(n2 != 0){
        int r = n2%10;
        n2 /= 10;
        mul *= r;
    }
    if(sum>=mul){
        cout<<"sum is greater than product of the digits of number";
    }else{
    cout<<"product is greater than sum of the digits";}

    //check if the three numbers are in AP and in GP
    int a1,a2,a3;
    cout<<"enter the 3 numbers which you want to check : ";
    cin>>a1>>a2>>a3;
    if(a2-a1 == a3-a2){
        cout<<"sequence in AP"<<endl;
    }else if(a2/a1 == a3/a2){
    cout<<"sequence in GP"<<endl;
    }else{
        cout<<"sequence neither in AP nor in GP"<<endl;
    }
}

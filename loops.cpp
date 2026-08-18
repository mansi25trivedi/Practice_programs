#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //Print the reverse of a given number
    int n;
    cout<<"enter any number: ";
    cin>>n;
    int ans = 0;
    while(n!=0){
        int r = n%10;
        ans = ans*10 + r;
        n = n/10;
    }
    cout<<"Reversed number is: "<<ans<<endl;

    //Check if a number is a palindrome
    int n1;
    cout<<"enter the number: ";
    cin>>n1;
    n = n1;
    int a=0;
    while(n>0){
        int r = n%10;
        a = a*10 + r;
        n/=10;
    }
    if(n1 == a){
        cout<<"It is a palindrome"<<endl;
    }else{
    cout<<"not a palindrome"<<endl;
    }

    // Check if a number is an Armstrong number.
    int n2;
    cout<<"enter any number: ";
    cin>>n2;
    n=n2;
    int oldn = n2;
    int c1 = 0;
    while(n!=0){
        int r = n%10;
        n/=10;
        c1++;
    }
    int a2 = 0;
    while(n2!=0){
        int r = n2%10;
        a2 = a2*10 + pow(r , c1);
        n2/=10;
    }
    if(oldn == a2){
        cout<<"the given number is an Armstrong number";
    }else{
    cout<<"the given number is not an Armstrong number";
    }

    //Print Fibonacci series up to n terms.
    int n3;
    cout<<"enter the number till which you want to display fib num";
    cin>>n3;
    int l = 0;
    int p = 1;
    int sum = 0 + 1;
    cout<<l<<" "<<p<<" ";
    for(int i = 3 ; i <= n3 ; i++){
    int a = l+p;
    sum+=a;
    cout<<a<<" ";
    l= p;
    p= a;
}
cout<<endl<<"the sum of Fibonacci series is: "<<sum<<endl;


    return 0;
}

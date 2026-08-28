#include<iostream>
#include<cmath>
#include<numeric>
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

// to print first n terms of an AP
int a1, d ,n4;
cout<<"enter the first element and the common difference of an AP: ";
cin>>a1>>d;
cout<<"enter the number of elements you want to print of AP:";
cin>>n;
for(int i = 0 ; i <n ; i++){
    cout<<a1 + i*d<<" ";
}
int r;
cout<<"enter the common multiple(r) for the GP: ";
cin>>r;
for(int i=1 ; i <=n ; i++){
    cout<<a1<<" ";
    a1*=r;
}

cout<<endl<<"Print all factors of a given number. "<<endl;
cout<<"enter the number you want to check: ";
int n5;
cin>>n5;
cout<<endl<<"the factors of "<<n5<<" are: ";
int sum1 = 0;
for(int i = 1 ; i <=n5 ; i++){
    if(n5%i == 0){
        cout<<i<<" ";
        sum1 += i;
    }
}
cout<<endl<<"the sum of factors of "<<n5<<"is : "<<sum1<<endl;
if(sum1 == n5){
    cout<<endl<<"the given number is a strong number(sum of factors is equal to the num)"<<endl;
}else{
    cout<<"the given number is not a strong number"<<endl;
}

//Find LCM of two numbers using loops.
int n6 , n7;
cout<<"enter the numbers of which you want to calculate the LCM: ";
cin>>n6>>n7;
int lcm = max(n6 , n7);//lcm=least positive no which is divisible by both,let us take the largest no amongt as the lcm ,which will be divisible by a,b
while(lcm%n6 !=0 || lcm%n7 !=0 )lcm++;

cout<<"the lcm of "<<n6<<" and "<<n7<<" is : "<<lcm;
//cout<<endl<<"anothr way is to use the in built function of lcm() in the numeric header file"<<lcm(n6, n7)<<endl;


//find hcf oftwo numbersusig loops
int n8, n9;
cout<<"enter the two numbers : ";
cin>>n8>>n9;
int hcf;
if(n8 == 0 || n9 ==0){

    hcf = 0;
}
else{
    hcf = min(n8 , n9);
    while(n8%hcf != 0 || n9 != 0){
        hcf--;
    }
}
cout<<endl<<"hcf is : "<<hcf;
    return 0;
}

#include<iostream>
using namespace std;
void evenprint(int n){
    if(n > 0){
             if(n%2 == 0 ){
    evenprint(n-2);

    cout<<n<<" ";
    }else{
        evenprint(n-1);

    }

    }else{
        return ;
    }

}
int powr(int n , int p){
    if(p == 0){
        return 1;
    }
    return n*powr(n,p-1);
}
int nthfibbonum(int n){
    int n1 = 0 ;
    int n2 = 1;
    if(n==1){
            return 0;
    }
    if(n ==2){
        return 1;
    }
    return nthfibbonum(n-2) + nthfibbonum(n-1);
}
void printfibbo(int n, int a = 0 , int b = 1){
    if(n == 0){
        return ;
    }
    cout<<a<<" ";
    printfibbo(n-1, b, a+b);
}

int reverseint(int n){
    int r = 0;
    while(n!=0){
        r = r*10 + n%10;
        n=n/10;

    }
    return r;
}
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b , a%b);
}
const string words[] = {"zero", "one", "two", "three", "four",
                        "five", "six", "seven", "eight", "nine"};

void printDigitsRecursive(int n) {
    if (n == 0) {
        return;
    }
    printDigitsRecursive(n / 10);

    cout << words[n % 10] << " ";
}
int nCr(int n , int r){
    if(r>n){
        return 0;
    }
    if(r== 0 || r == n){
            return 1;

    }
    return nCr(n-1, r-1) + nCr(n-1, r);
}
void reverse_triangle(int n){
    if(n==0){
        return;
    }
    for(int i=0; i<n ; i++){
        cout<<"* ";
    }
    cout<<endl;
    reverse_triangle(n-1);
}
int main(){
    cout<<" Print only even numbers from 1 to n recursively"<<endl;
    int n;
    cout<<"enter the number till which you want to print number: ";
    cin>>n;
    evenprint(n);
    cout<<endl<<"Calculate power of a number (xⁿ) using recursion."<<endl;
    int p1;
    cout<<"enter the power you want : ";
    cin>>p1;
    cout<<endl<<powr(n, p1);
    cout<<endl<<"Find nth Fibonacci number recursively : "<<nthfibbonum(n);
    cout<<endl<<"Print Fibonacci series up to n terms recursively."<<endl;
    printfibbo(n);
    cout<<endl<<"Reverse a number recursively : "<<reverseint(n)<<endl;
    cout<<endl<<" Find GCD (HCF) of two numbers using Euclid’s algorithm recursively. "<<endl;
    int n1 , n2;
    cout<<"enter the 2 numbers ";
    cin>>n1>>n2;
    cout<<"GCD is: "<<gcd(n1,n2)<<endl;
    cout<<"Print digits of a number in words recursively (e.g., 123 → “one two three”). "<<endl<<n<<" as " ;
    printDigitsRecursive(n);
    cout<<endl<<" Find nCr (Combination formula) recursively using Pascal’s relation. : n1Cn2 : "<<nCr(n1, n2)<<endl;
    cout<<"Print reverse triangle pattern recursively"<<endl;
    reverse_triangle(n);

}

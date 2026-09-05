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
}

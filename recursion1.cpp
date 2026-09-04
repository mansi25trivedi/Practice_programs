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
int main(){
    cout<<" Print only even numbers from 1 to n recursively"<<endl;
    int n;
    cout<<"enter the number till which you want to print number: ";
    cin>>n;
    evenprint(n);
}

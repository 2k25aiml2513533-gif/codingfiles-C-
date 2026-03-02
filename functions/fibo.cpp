#include<iostream>
using namespace std;
int fibo(int n){
    int a=0,b=1,c;
    cout<<"fibonacci series"<<endl;
    for(int i=0;i<n;i++){
        cout<<a<<"\t";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter number of terms in fibonacci"<<endl;
    cin>>n;
    fibo(n);
    return 0;
}
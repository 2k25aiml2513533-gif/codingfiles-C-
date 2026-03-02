#include<iostream>
using namespace std;
int recgcd(int a,int b){
    if(b==0){
        return a;
    }    
    return recgcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"enter both numbers for gcd"<<endl;
    cin>>a>>b;
    cout<<"GCD is "<<recgcd(a,b);
    return 0;
}
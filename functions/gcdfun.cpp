#include<iostream>
using namespace std;
int gcd(int a,int b){
    cout<<"gcd of "<<a<<"and"<<b;
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    cout<<"is"<<a<<endl;
    return 0;
}
int main(){
    int a,b;
    cout<<"enter both numbers for gcd"<<endl;
    cin>>a>>b;
    gcd(a,b);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter both numbers for gcd"<<endl;
    cin>>a>>b;
    cout<<"gcd of "<<a<<"and"<<b;
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    cout<<"is"<<a<<endl;
    return 0;
}
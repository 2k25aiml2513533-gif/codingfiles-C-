#include<iostream>
using namespace std;
int main(){
    int n,rem,rev=0;
    cout<<"enter a number to be reversed"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%10;
        n/=10;
        rev=rev*10+rem;
    }
    cout<<"reversed number is "<<rev<<endl;
    return 0;
}
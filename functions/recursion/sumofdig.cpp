#include<iostream>
using namespace std;
int sumdig(int a){
    int sum=0;
    while(a!=0){
        int rem=a%10;
        a/=10;
        sum+=rem;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter number "<<endl;
    cin>>n;
    cout<<"sum of digits is "<<sumdig(n)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1;
    cout<<"enter number of terms for fibonacci"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
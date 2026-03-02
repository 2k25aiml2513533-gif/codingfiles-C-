#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==0){
        cout<<"number is  prime"<<endl;
    }
    else{
        cout<<"number is not prime"<<endl;
    }
    return 0;
}
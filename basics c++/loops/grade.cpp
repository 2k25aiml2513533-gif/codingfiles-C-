#include<iostream>
using namespace std;
int main(){
    cout<<"enter a marks";
    int n;
    cin>>n;
    if(n<40){
        cout<<"GRADE   D "<<endl;
    }else if(n>40&&n<70){
        cout<<"GRADE   C "<<endl;
    }
    else if(n>70&&n<90){
        cout<<"GRADE   B "<<endl;
    }
    else{
        cout<<"GRADE    A"<<endl;
    }
    return 0;
}

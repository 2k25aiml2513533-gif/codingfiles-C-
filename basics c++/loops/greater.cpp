#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number";
    int n;
    cin>>n;
    if(n>0){
        cout<<"positive number"<<endl;
    }
    else if(n==0){
        cout<<"numer is zero"<<endl;
    }
    else{
        cout<<"negtive number"<<endl;
    }
    return 0;
}

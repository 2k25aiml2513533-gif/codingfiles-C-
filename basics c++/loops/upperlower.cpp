#include<iostream>
using namespace std;
int main(){
    cout<<"enter character to check";
    char n;
    cin>>n;
    // if(n>=65&&n<=90){
    //     cout<<"given character is uppercase"<<endl;
    // }
    // else if(n>=97&&n<=122){
    //     cout<<"given character is lowercase"<<endl;
    // }
    // else{
    //     cout<<"invalid character"<<endl;
    // }
    if(n>='a'&&n<='z'){
        cout<<"given character is uppercase"<<endl;
    }
    else{
        cout<<"character is uppercase\n";
    }
    return 0;
}

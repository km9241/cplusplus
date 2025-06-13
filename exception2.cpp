#include<iostream>
using namespace std;
int main(){
    try{
        cout<<"before throwing \n";
        throw "dino";
        cout<<"after trow";//wont be printed
    }
    catch(const char* x){
        cout<<x<<" "<<"is pirnted \n";
    }
    cout<<"thank you";

}   
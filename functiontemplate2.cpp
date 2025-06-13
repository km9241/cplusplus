#include<iostream>
using namespace std;
template <typename T, typename U>
U add(T x,U y) //U is the return type
{
    return(x + y);
}
int main(){
    cout<<"addition of 2 variable 4 and 3.5 is "<< add<int,double>(4,3.5)<<endl; //answer will come in double as returb type is u ie double
    return 0;

}

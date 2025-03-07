#include<iostream>
using namespace std;
class cal{
    public:
    int add(int a ,int b){ //2 argument
        return a+b;

    }
    int add(int a ,int b, int c){ //3 argument
    return a+b+c;
    }
};
int main (){
    cal c;
    cout<< c.add(10,20)<<endl;
    cout<< c.add(10,20,30)<<endl;
    return 0;
}

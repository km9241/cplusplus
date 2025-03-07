#include<iostream>
using namespace std;

class Number{
    private:
    int a;
    public:
    Number(){ //static
        a = 0;
    }
    Number(int num){ //parametric
        a = num;
    }
    Number(Number &d){
        cout<<"copy constructor is called"<<endl;
        a = d.a;
    }
    void display(){
        cout<<"The no. is  "<<a<<endl;
    }

};

int main(){
    Number x,y, z(10), a1;

    x.display();
    y.display();
    z.display();

    Number c(z); // copy constructor is not declared in pre-declared, it is declared and invoked at instance
    c.display();

    a1 = z; // here copy constructor will not be invoked
    a1.display();



}

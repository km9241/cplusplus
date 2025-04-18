#include<iostream>
using namespace std;
class construct{
    public:
    float area;
    public:
     construct(){
        area=0;
    }
    public:
    construct(int a ,int b){
        area = a*b;
    }
    int display(){
        cout<<area<<endl;
        return 0;
        
    }
};
int main (){
    construct c1,c2(4,5);
    c1.display();
    c2.display();
    return 0;
    
}
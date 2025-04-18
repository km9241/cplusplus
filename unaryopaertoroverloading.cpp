#include<iostream>
using namespace std;
class weight{
    private:
        int kg;
    public:
    weight(){
        kg=0;
    }
    weight(int x){
        kg=x;
    }
    void print(){
        cout<<"weight in kg"<<kg<<endl;
    }
    void operator ++(){
        ++kg;
    }
};
int main(){
   weight obj;
   //++obj;(doesnot work cause we did not declare the opertator overloading)
   obj.print();
   ++obj;
   obj.print();

    return 0;
}
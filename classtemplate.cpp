#include<iostream> 
using namespace std; /* a class template allows you to define a blueprint for a class that works with any data type.
Instead of writing separate classes for each data type, you write one template and instantiate it with different types as needed.*/
template <typename T>
class weight{
    private:
    T kg;
    public:
    void setdata(T x){
        kg=x;


    }
    T getdata(){
        return kg;
    }
};
int main(){
    weight<int> obj1;
    obj1.setdata(5);
    cout<<"value is "<< obj1.getdata()<<endl;
    weight<float> obj2;
    obj2.setdata(5.456);
    cout<<"value is "<< obj2.getdata()<<endl;
    return 0;

}
#include<iostream>
#include<cmath>
using namespace std;
class circle{
    private:
        double radius;
    public:
    circle(double r){ //parametric constructor
        radius = r;
    }
    double claculatearea(){
        cout<< 3.141 * pow(radius,2);
        return 0;

    }
};
int main(){
    double radius;
    cout<<"enter the radius of the circle ";
    cin>>radius;
    circle mycircle(radius);
    mycircle.claculatearea();
    return 0;


}
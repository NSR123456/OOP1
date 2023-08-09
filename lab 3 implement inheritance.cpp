#include<iostream>
using namespace std;

//Base class
class base{

protected:
    float i,j;
public:
    void set(float a,float b){
        i=a,j=b;
    }
};
//i and j inherited as protected

class Rectangle: public base{
    float k;
public:
    void setk() { k = i*j; }
    float showk(){ return k;}
};
//Derived class
class Triangle: public base {
    float m;
public:
    void setm(){ m = (i*j)/2;}
    float showm(){
      return m;
    }
};

int main()
{
    float len, brdth, b, height;
    Rectangle ob1;
    Triangle ob2;
    cout<< "Enter the length and breadth:\n";
    cin>>len>>brdth;
    ob1.set(len, brdth);
    ob1.setk();
    cout<< "\nArea of the rectangle is: " << ob1.showk() << endl;

    cout<<"\nEnter the base and height:\n";
    cin>>b>>height;
    ob2.set(b, height);
    ob2.setm();
    cout<<"\nArea of the triangle is: "<<ob2.showm()<<endl;

    return 0;
}

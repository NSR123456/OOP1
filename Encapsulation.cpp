#include<iostream>
using namespace std;

class Calculator{
private:
    //Private attribute
    float a,b;
    char ch;
public:
    //Setter
    void setSalary(float i,float j) {
    a = i;
    b = j;
    }
    //Getter
    float getResult(char op) {
        ch = op;
        float result;
    switch(op){
    case '+':
           result = a + b; break;
    case '-':
           result = a - b; break;
    case '*':
            result = a * b; break;
    case '/':
            if(b==0) {cout<<"Undefined"; break;}
            result = a/b; break;
    case '%':
            if(b==0) {cout<<"Undefined"; break;}

            result=(int) a% (int) b; break;
        }
        return result;
    }
};

int main()
{
    Calculator obj;
    float num1,num2, result;
    char op;
    cout<< "Enter two numbers: (Numbers should be integers for mod operation)\n";
    cin>>num1>>num2;
    cout<<"\nEnter operator: (+, -, *, /, %): ";
    cin>> op;
    obj.setSalary(num1,num2);
    result = obj.getResult(op);
    cout<<"\nResult =" << result << endl;
    return 0;
}

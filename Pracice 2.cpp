#include<iostream>
using namespace std;

class Hello{
public:
    Hello() { cout<< "Constructor Invoked\n"; }
    ~Hello() { cout<< "Destructor Invoked\n"; }
};

int main()
{
    Hello h1, h2;
    return 0;
}

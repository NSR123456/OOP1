#include<iostream>
using namespace std;

int main()
{
    try{
        int divisor, divident;
        cout<<"Enter divident and divisor to get result:\n";
        cin>>divident>>divisor;
        if(divisor != 0) {
            cout<< "Result = " << divident/divisor;
        }
        else{
            throw(divisor);
        }
    }
    catch(int myNum) {
        cout<<"Divisor cannot be 0\n";
    }
    return 0;
}

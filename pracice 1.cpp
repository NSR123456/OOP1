#include<iostream>
using namespace std;

class Fibo{
    int f0,f1;
public:
    Fibo() {
         f0 = 0, f1 = 1;
         }
    void Calculate(int n){
        cout<<f0<<" "<<f1<<" ";
        for(int i=2;i<n;i++) {
        int sum = f0 + f1;
        f0 = f1;
        f1 = sum;
        cout<<sum<<" "; }
    }

};
int main()
{
    int n;
    Fibo f1;
    cout<<"Enter the length of fibonacci series:\n";
    cin>>n;
         f1.Calculate(n);

    return 0;
}

#include<iostream>
using namespace std;

class Vehicle{
    string colour;
    int seat_no;
    long long reg_no;
public:
    void car(string s, int seat, long long reg);
    void bus(string s, int seat, long long reg);
};

void Vehicle::car(string s, int seat, long long reg) {
    colour = s;
    seat_no = seat;
    reg_no = reg;
    cout<<"Car BMW: "<<colour<<"\t"<<seat_no<<"\t"<<reg_no<<"\n";
}

void Vehicle::bus(string s, int seat, long long reg) {
    colour = s;
    seat_no = seat;
    reg_no = reg;
    cout<<"Bus Trust: "<<colour<<"\t"<<seat_no<<"\t"<<reg_no<<"\n";
}

int main()
{
    Vehicle v1,v2;
    v1.car("Red", 10, 88098);
    v2.bus("Blue",33,102033);
    return 0;
}

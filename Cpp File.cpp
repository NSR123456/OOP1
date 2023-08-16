#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    int i= 0, num, age;
    string name;
    cout<<"How many friends do you have?\n";
    cin>>num;
    cout<<"Enter their names and ages :\n";
    ofstream MyWriteFile("Friends.txt");
    while(i < num){
        cin>>name;
        MyWriteFile<<" "<< name;
        cin>>age;
        MyWriteFile<<" "<<age<<"\n";
        i++;
    }

    MyWriteFile.close();
    string myText;
    cout<<"Reading from file :\n";
    ifstream MyReadFile("Friends.txt");
    while(getline(MyReadFile, myText)) {
        cout<< myText;
    }
    MyReadFile.close();
    return 0;
}

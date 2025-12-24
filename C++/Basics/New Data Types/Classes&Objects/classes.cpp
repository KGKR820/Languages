#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int Id;
    void print();
//! Here constructor acts as defining fn similar to classes in js
    student(string x,int y){
        name =x ;
        Id = y;
    }
};
void student :: print(){
    cout <<  "Name: " << name << "\n" <<  "ID: "<< Id << '\n';
}
int main(){
student ramu = {"Ramu",9};
student raju("Raju",22);
ramu.print();
raju.print();
    return 0;
}
#include <iostream>
using namespace std;
struct student{
    string name;
    int id;
};
void print(student *test);
int main(){
student ramu ={"Ramu",9};
print(&ramu);
    return 0;
}
void print(student *test){
   cout << "Name : " << test->name;
   cout << "\nID : " << test->id;
};
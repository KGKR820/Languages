#include <iostream>
using namespace std;
int main(){
int x,y;
cout << "Enter a number : ";
cin >> x;
cout << "Enter another number : ";
cin >> y;
if(x>=y){
    cout << x << " is biggest";
}
else  cout << y << " is biggest";
    return 0;
}
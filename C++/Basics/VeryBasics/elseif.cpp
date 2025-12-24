#include <iostream>
using namespace std;
int main(){
int x;
cout << "Enter time in 24 hour cycle : ";
cin >> x;
if(x>=6 && x<=10) cout << "Good Morning";
else if(x<=10 && x<=16) cout << "Good Afternoon";

    return 0;
}
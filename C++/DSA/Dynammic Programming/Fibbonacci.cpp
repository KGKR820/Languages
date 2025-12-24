#include <iostream>
using namespace std;
    
int fibbo(int n){
    int a = 0;
    int b = 1;
    for(int i=n;i>3;i--){
        b = a+b;
        a = b-a;
    }
    return a+b;
}
int main(){
cout << fibbo(6);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
  auto Message = [](){
    cout << "Good Morning";
  };
  Message();
  auto sum = [](int a,int b){
    cout << "\n" << a+b << "\n";
  };
  sum(4,9);
  for(int i =1;i<10;i++){
     auto print = [i](){
        cout << i << " ";
     };
     print();
  }
    return 0;
}
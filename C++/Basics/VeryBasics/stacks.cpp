#include <iostream>
#include <stack>
int main(){
   std:: stack<int> stk;
   stk.push(1);
   stk.push(2);
   stk.push(3);
   std:: cout << stk.top() << '\n';
   stk.pop();
   std:: cout << stk.top() << '\n';
   stk.push(3);
   stk.push(4);
    std:: cout << stk.size() << '\n' << stk.empty();
    return 0;
}
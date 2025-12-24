#include <iostream>
#include <queue>
int main(){
std:: queue <int> Que;
for(int i=1;i<=3;i++){
    Que.push(i);
}
std:: cout << Que.front() << '\n' << Que.back() << '\n' ;
Que.pop();
std:: cout << Que.front();
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
// !In vectors only pushing and poping from back is allowed
int main(){
vector<int> sqrs = {1,4,9,16};
sqrs.push_back(25);
for(int sqrs:sqrs){
    cout << sqrs << " ";
}
cout << sqrs.front();
cout << sqrs.back();
    return 0;
}
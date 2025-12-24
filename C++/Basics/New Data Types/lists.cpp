#include <iostream>
#include <list>
using namespace std;
int main(){
  // !In Lists both popping and pushing is allowed unlike vectors
  list<string> Common = {"Hello","Hi","Guys"};
  Common.push_front("First");
    Common.push_back("Last");
  for(string comm : Common){
    cout << comm << " ";
  }
    return 0;
}
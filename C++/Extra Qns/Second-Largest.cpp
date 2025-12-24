#include <iostream>
#include <vector>
#include <limits.h>
int main(){
std::vector<int> arr = {12, 35, 1, 10, 34, 1};
int lar=INT_MIN;
int Sec= INT_MIN;
for(int i:arr){
    if(lar<i){
        Sec=lar;
        lar=i;
    }
    else if(Sec<i and i<lar){
        Sec=i;
    }
}
std:: cout << Sec;
    return 0;
}
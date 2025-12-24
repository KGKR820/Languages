#include <iostream>
#include <vector>
int removeElements(std::vector<int> &arr,int ele){
   int i = 0;
   for(int j=0; j<static_cast<int>(arr.size()); j++){
    if(arr[j] != ele){
        arr[i] = arr[j];
        i++;
    }
   }
   return i;
}
int main(){
std::vector<int> arr = {0, 1, 3, 0, 2, 2, 4, 2};
std::cout << removeElements(arr, 2);
    return 0;
}
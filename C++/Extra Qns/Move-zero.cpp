#include <iostream>
#include <vector>
void PushZeroesToEnd(std::vector<int> &arr){
    int i=0;
   for(int j=0;j<static_cast<int>(arr.size());j++){
      if(arr[j] !=0){
        std::swap(arr[i],arr[j]);
        i++;
      }
      
   }
}
int main(){
std::vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
PushZeroesToEnd(arr);
for(int ele : arr){
    std::cout << ele << " ";
}
    return 0;
}
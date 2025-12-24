#include <iostream>
#include <vector>
void InsertionSort(std::vector <int>&arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i] < arr[i-1]){
            int j = i;
            while(j>0 and arr[j]<arr[j-1]){
               std::swap(arr[j],arr[j-1]);
               j--;
            }
        }
    }
}
int main(){
std::vector <int> arr = {64, 25, 12, 22, 11};
InsertionSort(arr);
for(int num:arr){
   std:: cout << num << " ";
}
    return 0;
}
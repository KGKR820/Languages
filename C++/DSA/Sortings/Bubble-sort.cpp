#include <iostream>
#include <vector>
#include <limits.h>
void BubbleSort(std::vector <int>&arr){
    int i=0;
    while(i<arr.size()-1){
        for(int j=0;j<arr.size()-i-1;j++){
             if(arr[j] > arr[j+1]){
                std::swap(arr[j],arr[j+1]);
             }
        }
        i++;
    }
}
int main(){
std::vector <int> arr = {64, 25, 12, 22, 11};
BubbleSort(arr);
for(int num:arr){
   std:: cout << num << " ";
}
    return 0;
}
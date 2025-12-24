#include <iostream>
#include <vector>
#include <limits.h>
void SelectionSort(std::vector <int>&arr){
 int n = arr.size();
 for(int i=0;i<n;i++){
    int j=i+1;
    int minIndex =i;
    while(j<n){
        if(arr[j] <arr[minIndex] ){
            minIndex=j;
        }
        j++;
    }
    std::swap(arr[i],arr[minIndex]);
 }
}
int main(){
std::vector <int> arr = {64, 25, 12, 22, 11};
SelectionSort(arr);
for(int num:arr){
   std:: cout << num << " ";
}
    return 0;
}
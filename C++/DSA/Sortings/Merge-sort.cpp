#include <iostream>
#include <vector>
void Merge(std::vector <int>&arr,int left,int mid,int right){
    int n1 = mid-left+1;
    int n2 = right-mid;
    std::vector <int> L(n1),R(n2);
    for(int i=0;i<n1;i++){
        L[i] = arr[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = arr[mid+i+1];
    }

 int i = 0, j = 0;
    int k = left;

    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    
}
void Divide(std::vector <int>&arr,int left,int right){
    if(left >= right) return;
    int mid = left + (right-left)/2;
    Divide(arr,left,mid);
    Divide(arr,mid+1,right);
    Merge(arr,left,mid,right);

}
int main(){
std::vector <int> arr = {64, 25, 12, 22, 11};
Divide(arr,0,arr.size());
for(int num:arr){
   std:: cout << num << " ";
}
    return 0;
}
#include <iostream>
using namespace std;
int main(){
int arr[3] = {1,2,3};
for(int i=0;i<3;i++){
    cout << arr[i] << " ";
}
int n;
cout << "n -> ";
cin >> n;
int brr[n];
for(int i=0;i<n;i++){
    cout << "brr[" << i << "] -> ";
    cin >> brr[i];
}
for(int i=0;i<n;i++){
        cout << brr[i] << " ";
}
    return 0;
}
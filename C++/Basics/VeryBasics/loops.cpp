#include <iostream>
using namespace std;
int main(){
int n;
cout << "n : ";
cin >> n;
for(int i=1;i<=n;i++){
    cout << i << " ";
}
cout << "\n";
int j = n;
while(j > 0){
    cout << j << " ";
    j--;
}
cout << "\n";
int k = n;
do{
    cout << k << " ";
    k--;
}while(k>0);
   return 0; 
}

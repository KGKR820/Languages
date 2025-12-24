#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
void check(vector<int> arr,int target){
    unordered_set<int> s;
    int check =0;
    for(int arr:arr){
        int compliment = target - arr;
        
        if(s.find(compliment) != s.end()){
            cout << "(" << arr << "," << compliment << ")\n";
            check =1;
        }
        s.insert(arr);
    }
    if(check ==0){
        cout << "No Pairs Found";
    }
}
int main(){
check({2,4,3,9,5,0,7},9);
    return 0;
}
#include <iostream>
using namespace std;
#include <vector>
void perm(int index,string &s,vector<string> &ans){
    if(index == static_cast<int>(s.size())-1){
        ans.push_back(s);
        return;
    }
    for(int i=index;i<static_cast<int>(s.size());i++){
        swap(s[index],s[i]);
        perm(index +1,s,ans);
        swap(s[index],s[i]);
    }
}
int main(){
    string s = "ABC";
    vector <string> ans;
    perm(0,s,ans);
    for(string i : ans){
        cout << i << " ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int st, int end){
    for(int i=st; i<(end+1)/2 ; i++){
        if(str[i] != str[end-i]){
            cout << str[i] << " " << str[end-i] << " " << "false" <<endl;
            return false;
        }
    }
    // cout << str[i] << " " << str[end-i] << " " << "true" << endl;
    return true;
}
int main() {
    string str;
    cin >> str;
    int cnt=0;
    for(int i=0; i<str.size(); i++){
        for(int j=i ; j<str.size() ; j++){
            if(isPalindrome(str, j, i)){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
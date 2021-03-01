#include<iostream>
using namespace std;
int main(int argv, char* argc[]){
    string s;
    cin >>s;
    string k = string(s.length(), '.');
    for(int i = 0; i< s.size(); i++){
        k[s.size() - 1 -i] = s[i];
    }

    if(k == s) cout << "yes";
    else cout << "no";
}

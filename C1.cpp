#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int* a = new int[10000];
    bool b = false;
    for(int i =1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(int i  =1; i<=n; i++){
        for(int j =i+1;j<=n;j++){
            if(a[j] == a[i]){
                b = true;
            }
        }
    }
    if(b == true) cout << "yes";
    else cout << "no";
    delete[] a;
}

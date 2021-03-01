#include<iostream>
using namespace std;

    bool ktra(int n){
    int m = n;
    int tong =0;
    while(m != 0){
        tong = tong*10 + m%10;
        m  = m/10;
    }
    if(n == tong){
        return true;
    }
    return false;
    }

int main(){

    int t, a,b;
    cin >> t;

    for(int i =1; i<=t;i++){
        int count = 0;
        cin >> a>> b;

    for(int j =a;j<=b;j++){
        bool b = ktra(j);
        if(b == true) {
            count ++;
        }
    }
    cout << count << endl;
    }

}

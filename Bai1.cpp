#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int tong =0;
    int tongg = 0;
    int* p = new int[n];
    for(int i =1; i<=n;i++){
        cin >> p[i];
        tong = tong + p[i];
        tongg = tongg + p[i]*p[i];}
    double b = 1.0* tong/n;
    cout << b << endl;
    cout << (1.0*tongg/n)- b*b;
    delete[] p;
}


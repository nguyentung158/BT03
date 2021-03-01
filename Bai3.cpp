#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int* p = new int[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    int dem[10] = {0};
    int k =0;
    while(k < 10){
    for(int i =0;i<n;i++){
       if(k == p[i]) dem[k]++;
    }
      k++;
    }
    k=0;
    while(k<10){
        cout << k << " : " << dem[k] << endl;
        k++;
    }

delete[] p;
}

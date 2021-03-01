#include<iostream>
using namespace std;
int main(){
    int dong, cot;
    cin >> dong >> cot;
    int x =dong;
    int y = cot;
    int i,j, p =0;
    int k = 1;
    int c[100][100];
    while(k <= x*y){
        for(i = p;i< cot; i++){
            c[p][i]  = k++;
        }
        for(i = p+1;i<dong;i++){
            c[i][cot -1] = k++;
        }
        if(p!= dong-1){
            for(i = cot-2;i>=p;i--){
                c[dong-1][i] = k++;
            }
        }
        if(p!=cot-1){
            for(i= dong -2;i> p;i--){
                c[i][p] = k++;
            }
        }
        p++;dong--;cot--;
    }
    for(i =0;i<x;i++){
        for(j =0;j<y;j++){
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
}

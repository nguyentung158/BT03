#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int** p = new int*[n];
    for(int i =1;i<=n;i++){
        p[i] = new int[i];
    }
    for(int i =1;i<=n;i++){
        for(int j =1;j<= i;j++){
            if(j ==1  ){p[i][j] =1;
            }
            if(j == i) {
                p[i][j] = 1;
            }
            if(j != 1 && j != i){
                p[i][j] = p[i-1][j] + p[i-1][j-1];
            }
        }
    }

    for(int i =1; i<=n;i++){
            for(int j =1;j<=i;j++){
                cout << p[i][j] << " " ;
            }
        cout  << endl;
    }
}

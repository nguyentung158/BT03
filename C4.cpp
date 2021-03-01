#include<iostream>
#include<string>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    char c[10][10];
    for(int i =1;i<=m;i++){
        for(int j =1;j<=n;j++){
            cin >> c[i][j];
        }
    }
     for(int i =1;i<=m;i++){

        for(int j =1;j<=n;j++){
                if(c[i][j] != '*'){
                int count =0;
            if(c[i-1][j] == '*') {count++;}
            if(c[i+1][j]== '*'){count++;}
            if(c[i][j-1]== '*'){count++;}
            if(c[i][j+1]== '*'){count++;}
            if(c[i-1][j-1]== '*'){count++;}
            if(c[i-1][j+1]== '*'){count++;}
            if(c[i+1][j-1]== '*'){count++;}
            if(c[i+1][j+1]== '*')  {count++;}
                c[i][j] = char (count +48);
                }
        }
    }

    for(int i =1;i<=m;i++){
        for(int j =1;j<=n;j++){
            cout<< c[i][j] << ' ';
        }
        cout << endl;
    }
}

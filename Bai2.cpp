#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int* p = new int[n];
    for(int i =1;i<=n;i++){
        cin >> p[i];
    }
    int min = p[1], max = p[1];
      int tongchan = 0, demle =0;
    for(int i =1;i<=n;i++){
        if(min >= p[i]) {
            min = p[i];
        }
        if(max <= p[i]){
            max = p[i];
        }
        if(p[i]% 2 == 0){
            tongchan = tongchan+p[i];
        }
        if(p[i]%2 == 1){
           demle++;
           }
    }
    cout << min << endl << max << endl << tongchan << endl << demle;
    delete[] p;
}

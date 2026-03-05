#include <iostream>
using namespace std;

int main(){
    int n,m;
    int pos = 1;
    int j;
    cin >> n >> m;
    long long count = 0;
    for(int i=0;i<m;i++){
        cin >> j;
        if(j>pos){
            count+=j-pos;
            pos = j;
        }
        else if(pos>j){
            count+=n-pos+j;
            pos = j;
        }
    }

    cout << count;
    return 0;
}
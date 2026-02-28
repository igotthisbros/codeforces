#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count=0;
    while (n--){
        int p, v, t;
        cin >> p >> v >> t;
        if (p+v+t>1){
            count++;
        }
    }
    cout << count;
    return 0;
}
#include <iostream>
using namespace std;

int evenarray(int n){
    int b;
    int odd=0 , even = 0;
    for(int i=0;i<n;i++){
        cin >> b;
        if (i%2==0 && b%2!=0){
            odd++;
        }
        else if (i%2!=0 && b%2==0){
            even++;
        }
    }
    if(odd==even){
        return odd;
    }
    else return -1;
}

int main(){
    int t,a;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a;
        cout << evenarray(a) << "\n";
    }
    return 0;
}


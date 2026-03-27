#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,a,b,s,count=0;
    cin >> n >> b >> a;
    int ia = a;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s==1){
            if(b>0 && a<ia){
                b--;
                count++;
                a++;
            }
            else if(a>0) {
                a--;
                count++;
            }
            else if(b>0){
                b--;
                count++;
            }
            else break;
        }
        else {
            if(a>0) {
                a--;
                count++;
            }
            else if(b>0) {
                b--;
                count++;
            }
            else break;
        }
    }
    cout << count;
    return 0;
}
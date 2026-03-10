#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n >> k;
        if(k>=n){
            cout << 1 << "\n";
            continue;
        }
        int ans = n;
        for(int j=2;j*j<=n;j++){
            if(n%j == 0){
                if(j<=k){
                    ans = min(ans,n/j);
                }
                if (n/j<=k){
                    ans = min(ans,j);
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
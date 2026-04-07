#include <iostream>
using namespace std;

void solve(){
    int n,m,k; cin >> n >> m >> k;
    if(m%2==0 && n%2==0){
        if(k%2==0){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
    else if (m%2==0){
        if(m==2){
            if(k%2!=0) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
        else{
            
            int hor = m/2;
            if(k>= hor && (k - hor)%2==0){
                cout << "YES" << "\n";
            }
            else cout << "NO" << "\n";
        }
    }
    else if (n%2==0){
        if(k%2==0 && k<=((m-1)/2)*n){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
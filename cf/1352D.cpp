#include <iostream>
#include <deque>
using namespace std;


void solve(){
    int n; cin >> n;
    deque<int> dq(n);
    for(int i=0;i<n;i++){
        cin >> dq[i];
    } 
    int a=0,b=0,count=0,alice=0,bob=0;
    while(!dq.empty()){
        if(!a){
            while(!dq.empty() && a<=b){
                a+=dq.front();
                dq.pop_front();
            }
            alice+=a;
            b=0;
        }
        else{
            while(!dq.empty() && b<=a){
                b+=dq.back();
                dq.pop_back();
            }
            bob+=b;
            a=0;
        }
        count++;
    }

    cout << count << " " << alice << " " << bob << "\n";

}


int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}

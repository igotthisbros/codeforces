#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> dq(n);
    for(int i=0;i<n;i++){
        cin >> dq[i];
    }
    sort(dq.begin(),dq.end());
    int ans =0;
    long long cur = 0;
    for(auto i : dq){
        if(i>=cur){
            cur+=i;
            ans++;
        }
    }
    cout << ans;
}
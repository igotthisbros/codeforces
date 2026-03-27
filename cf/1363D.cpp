#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n,k,m;
    cin >> n >> k;
    vector<vector<int>> sets(k);
    for(int i=0;i<k;i++){
        int sz; cin >> sz;
        sets[i].resize(sz);
        for(int j=0;j<sz;j++){
            cin >> sets[i][j];
        }
    }

    cout << "? " << n;
    for(int i=1;i<=n;i++) cout << " " << i;
    cout << endl;
    cin >> m;
    if (m==-1) exit(0);

    int left=1,right=n,pos=1;
    while(left<right){
        int mid = left + (right-left)/2;
        cout << "? " << mid-left+1;
        for(int i=left;i<=mid;i++){
            cout << " " << i;
        }
        cout << endl;
        int res; cin >> res;
        if(res==m){
            right = mid;
            pos=mid;
        }
        else{
            left = mid + 1;
            pos = left;
        }
    }
    
    int special_idx = -1;
    for (int i = 0; i < k; i++) {
        for (int x : sets[i]) {
            if (x == pos) {
                special_idx = i;
                break;
            }
        }
    }
    int special_val = m;
    if(special_idx!=-1){
    vector<bool> special(n+1,false);
    
    int scount = 0;
    for(auto x : sets[special_idx]){
        special[x] = true;
        scount++;
    }
    cout << "? " << n-scount;
    for(int i=1;i<=n;i++){
        if(!special[i]) cout << " " << i; 
    }
    cout << endl;

    cin >> special_val;
    if(special_val==-1) exit(0);
}


    cout << "!";
    for(int i=0;i<k;i++){
        if ( i == special_idx) cout << " " << special_val;
        else cout << " " << m;
    }
    cout << endl;

    string judge_response;
    cin >> judge_response; 
    if (judge_response != "Correct") exit(0);

}


int main(){

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();

    }

}
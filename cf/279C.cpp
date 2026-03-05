#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, m, a;
    cin >> n >> m;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin >> a;
        arr.push_back(a);
    }
    vector<int> up(n), down(n);
    up[n-1] = n-1;
    down[n-1] = n-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=arr[i+1]){
            down[i] = down[i+1];
        }
        else down[i] = i;
        if(arr[i]<=arr[i+1]){
            up[i] = up[i+1];
        }
        else up[i] = down[i];
    }
    int r,l;
    for(int i=0;i<m;i++){
        cin >> l >> r;
        if(up[l-1] >= r-1){
            cout << "Yes" << "\n";
        }
        else cout << "No" << "\n";
    }
    return 0;
}
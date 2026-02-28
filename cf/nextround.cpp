#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int advance = 0;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin >> ans[i];
    }
    int threshold = ans[k-1];
    for(int i=0;i<n;i++){
        if (ans[i] >= threshold && ans[i]>0){
            advance++;
            continue;
        } 
    }
    cout << advance;
    return 0;
}

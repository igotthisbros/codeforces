#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n;
    vector<int> a(n),c;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> k;
        c.push_back(a[i]-k);
    }
    sort(c.begin(),c.end());
    int l=0,r=n-1;
    long long ans=0;
    while (l<r){
        if(c[r]+c[l]>0){
            ans+= r-l;
            r--;
        }
        else{
            l++;
        }
    }
    
    cout << ans << "\n";
    
    return 0;
}
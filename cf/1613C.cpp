#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    long long n,h,a,b;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n >> h;
        vector<int> arr;
        cin >> b;
        for(int j=1;j<n;j++){
            cin >> a;
            arr.push_back(a-b);
            b = a;
        }
        long long l = (h+n-1)/n, r = h,mid,ans=2e18,cur;
        while (l<=r){
            mid = l+(r-l)/2;
            cur=mid;
            for(auto gap : arr){
                cur += min(mid,(long long)gap);
                if (cur>=h) break;
            }
            if(cur>=h){
                ans=mid;
                r=mid-1;
            }
            else l = mid+1;
        }
        cout << ans << "\n";
        }
}
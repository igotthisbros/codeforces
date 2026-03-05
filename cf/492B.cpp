#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n, m, a;
    int prev = -1; 
    double radius = -1;
    cin >> n >> m;
    vector<int> lanterns;
    for(int i=0;i<n;i++){
        cin >> a;
        lanterns.push_back(a);
    }
    sort(lanterns.begin(),lanterns.end());
    for(auto i : lanterns){
        if (prev==-1) prev=i;
        else{
            radius = max<double>(radius,i-prev);
            prev=i;
        } 
    }
    radius/=2;
    double ans = max({(double)lanterns[0], (double)m - lanterns[lanterns.size()-1],radius});
    cout << fixed << setprecision(10) << ans;
    return 0;
}
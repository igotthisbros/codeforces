#include <iostream>
#include <vector>
#include <map>
#include <functional>
#include <set>
using namespace std;

int factor_count(long long a){
    int count = 0;
    while(a>0 && a%3==0){
        a/=3;
        count++;
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    map<int,multiset<long long>, greater<int>> dic;
    long long a;
    for(int i=0;i<n;i++){
        cin >> a;
        dic[factor_count(a)].insert(a);
    }
    vector<int> keys;
    for(auto const& [key,value] : dic){
        keys.push_back(key);
    }
    for(auto i : keys){
        for(auto j : dic[i]){
            cout << j << " ";
        }
    }
}
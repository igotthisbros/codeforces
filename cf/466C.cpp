#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,a;
    long long count=0, ways =0;
    cin >> n;
    vector<long long> arr;
    for (int i=0;i<n;i++){
        cin >> a;
        if (!i) arr.push_back(a);
        else arr.push_back(a+arr[i-1]);
    }
    long long s = arr[arr.size()-1];
    if(s%3!=0){
        cout << 0;
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if (arr[i]==(2*s)/3){
            ways+=count;
        }
        if(arr[i]==s/3){
            count++;
        }
    }

    cout << ways;

    return 0;
}
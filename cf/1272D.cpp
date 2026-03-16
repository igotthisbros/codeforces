#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,a,curmax=0;
    cin >> n;
    vector<int> arr(n), r(n), l(n);
    for(int i=0;i<n;i++){
        cin >> a;
        arr[i]=a;
        if(i==0 || arr[i-1]>=arr[i]){
            l[i]=1;
        }
        else l[i]=l[i-1]+1;
        curmax=max(curmax,l[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1 || arr[i+1]<=arr[i]) r[i]=1;
        else r[i]=r[i+1]+1;
    }
 
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i+1]){
            curmax=max(curmax,l[i-1]+r[i+1]);
        }
    }
    cout << curmax;
}
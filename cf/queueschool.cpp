#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    
    for(int i=n-1;i>=0;i--){
        string temp;
        if (s[i]=="B"){
            if (i+k<s.size()){
                temp = s[i+1];
                s[i+1] = s[i];
                s[i] = temp;
            }
            else{
                temp = s[s.size()-1];
                s[s.size()-1] = s[i];
                s[i] = temp;
            }
        }
    }
    cout << s;
    return 0;
}
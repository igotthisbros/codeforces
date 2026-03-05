#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<string,int> dic;
    string a;
    while(n--){
        cin >> a;
        if(dic.count(a)==0){
            dic[a]=1;
            cout << "OK" << "\n";
        }
        else{
            cout << a << dic[a] << "\n";
            dic[a]++;
        }
    }
    return 0;
}
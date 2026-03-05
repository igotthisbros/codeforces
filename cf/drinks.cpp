#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double ans = 0;
    cin >> n;
    double newn = n;
    int a;
    while(n--){
        cin >> a;
        ans += a;
    }
    double results = ans/newn;
    cout << fixed << setprecision(12) << results;
    return 0;
}
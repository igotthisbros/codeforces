#include <iostream>
using namespace std;

int main()
{
    int n,m,m2;
    cin >> n >> m;
    m2=m;
    if (n == 1 && m == 0) {
    cout << "0 0" << endl;
    return 0;
    }
    if ((m == 0 && n > 1) || m > n * 9){
        cout << "-1 -1";
        return 0;
    }
    string s_max(n, '0');
    string s_min(n, '0');
    
    for(int i=0;i<n;i++){
        if(m>=9){
            s_max[i] = '9';
            m-=9;
        }
        else{
            s_max[i] = m+'0';
        }
    }
    m2--;
    for(int i=n-1;i>0;i--){
        if(m2>=9){
            s_min[i] = '9';
            m2-=9;
        }
        else{
            s_min[i] = m2 + '0';
            m2=0;
            break;
            }
    }
    s_min[0] = (m2+1) + '0';
    
    cout << s_min << " " << s_max;
    
    
    return 0;
}
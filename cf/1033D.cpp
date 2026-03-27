#include <iostream>
#include <map>
#include <cmath>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    map<long long, int> dic, unsplit;
    vector<long long> remaining;
    long long mod = 998244353;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;

        long long r2 = round(sqrtl(a)), r3 = round(cbrtl(a));
        if (r2 * r2 == a) {
            long long r4 = round(sqrtl(r2));
            if (r4 * r4 == r2) dic[r4] += 4;
            else dic[r2] += 2;
        } else if (r3 * r3 * r3 == a) {
            dic[r3] += 3;
        } else {
            remaining.push_back(a);
        }
    }

    for (int i = 0; i < remaining.size(); i++) {
        if (remaining[i] == 1) continue;
        long long a = remaining[i];
        long long factor = -1;

        for (auto const& [p, e] : dic) {
            if (a % p == 0) {
                factor = p;
                break;
            }
        }

        if (factor == -1) {
            for (int j = 0; j < remaining.size(); j++) {
                if (i == j) continue;
                long long g = gcd(a, remaining[j]);
                if (g > 1 && g < a) {
                    factor = g;
                    break;
                }
            }
        }

        if (factor != -1) {
            dic[factor]++;
            dic[a / factor]++;
        } else {
            unsplit[a]++;
        }
    }

    long long ans = 1;
    for (auto const& [p, e] : dic) ans = (ans * (e + 1)) % mod;
    for (auto const& [p, e] : unsplit) {
        ans = (ans * (e + 1)) % mod;
        ans = (ans * (e + 1)) % mod;
    }

    cout << ans;
    return 0;
}
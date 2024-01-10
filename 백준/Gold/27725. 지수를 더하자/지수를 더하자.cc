#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define INF 0x7fffffff
#define LLINF 0x7f7f7f7f7f7f
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int arr[3000006];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    ll n, k;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    ll res = 0;
    for (int i = 0; i < n; i++) {
        ll tmp = k;
        while (tmp) {
            res += tmp / arr[i];
            tmp /= arr[i];
        }
    }

    cout << res;

    return 0;
}
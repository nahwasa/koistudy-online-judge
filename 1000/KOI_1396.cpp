#include <iostream>
using namespace std;
#define ll long long

int n;
ll arr[100002] = {0,};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> n >> q;

    while (q--) {
        int a, b, w;
        cin >> a >> b >> w;
        arr[a] += w;
        arr[b+1] -= w;
    }

    for (int i = 1; i <= n; i++) {
        cout << (arr[i] += arr[i-1]) << ' ';
    }
}

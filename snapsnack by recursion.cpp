#include<bits/stdc++.h>
using namespace std;

int val[105];
int wt[105];

int snapsnack(int ind, int w) {
    if (w == 0 || ind < 0) {
        return 0;
    }

    int ans = snapsnack(ind - 1, w);

    if (w - wt[ind] >= 0) {
        ans = max(ans, snapsnack(ind - 1, w - wt[ind]) + val[ind]);
    }

    return ans;
}

int main() {
    int n = 3;
    int w = 8;

    for (int i = 0; i < n; i++) {
       cin>>wt[i];
       cin>>val[i];  // Initializing values
    }

    cout << snapsnack(n - 1, w);

    return 0;
}

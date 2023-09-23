#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    vector<int> v;

    while(n--) {
        int num;
        cin >> num;
        v.emplace_back(num);
    }

    sort(v.begin(), v.end());

    cin >> m;
    while (m--) {
        int numf;
        cin >> numf;
        cout << binary_search(v.begin(), v.end(), numf) << '\n';
    }
}

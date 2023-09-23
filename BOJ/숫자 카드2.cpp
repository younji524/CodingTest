#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    unordered_map<int, int> um;
    while(n--) {
        int num;
        cin >> num;
        um[num]++;
    }

    cin >> m;
    while (m--) {
        int numout;
        cin >> numout;
        cout << um[numout] << " ";
    }
}

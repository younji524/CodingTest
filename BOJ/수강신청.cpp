#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<iostream>

using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	return a.second < b.second;
}

int main() {
	int n, m;
	string a;
	map<string, int> um;
	cin >> n >> m;
	
	for (int i = 1; i <= m; i++) {
		cin >> a;
        // key 값에 대해 max value 값을 갖도록 함
		if (um.count(a) == 0) um[a] = i;
		else if (um[a] < i) um[a] = i;
	}
    // value 값을 기준으로 정렬
	vector<pair<string, int>> v(um.begin(), um.end());
	sort(v.begin(), v.end(), cmp);
	
    // 주어진 n이 벡터 사이즈보다 작은 경우 고려
	if (v.size() < n) n = v.size();

	for (int i = 0; i < n; i++) {
		cout << v[i].first << '\n';
	}

}

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    
    for (int i = 0; i < tmp.size(); i ++) {
        for (int j = i + 1; j < tmp.size(); j++) {
            if (tmp[i] == tmp[j]) {
                answer.push_back(j - i);
                break;
            }
        }
        auto it = find(tmp.begin() + i + 1, tmp.end(), tmp[i]);
        if (it == tmp.end()) {
                answer.push_back(-1);
            }
    }
    reverse(answer.begin(), answer.end());
    
    return answer;
}

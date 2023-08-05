#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int find_idx(vector<string> v, string n) {
    auto it = find(v.begin(), v.end(), n);
    return it == v.end() ? -1 : it - v.begin();
}

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    vector<int> a1;
    vector<int> a2;
    
    for (int i = 0; i < goal.size(); i++) {
        a1.push_back(find_idx(cards1, goal[i]));
        a2.push_back(find_idx(cards2, goal[i]));
        }
    if (a1[0] != 0 && a2[0] != 0) answer = "No";
    
    for (int j = 0; j < goal.size() - 1; j++) {
        int gap1 = a1[j + 1] - a1[j];
        int gap2 = a2[j + 1] - a2[j];
        
        if ((a1[j] != -1) && (a1[j + 1] != -1)) {
            if (0 < gap1 && gap1 < 2) answer = "Yes";
            else answer = "No";
        }
        
        if ((a2[j] != -1) && (a2[j + 1] != -1)) {
            if (0 < gap2 && gap2 < 2) answer = "Yes";
            else answer = "No";
        }       
    }
    
    return answer;
}

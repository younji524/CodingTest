/*
idea

goal의 원소들과 카드 뭉치 1과 2의 첫 번째 원소를 비교하고, 일치하는 경우 벡터에서 제외한다.

첫 번째 원소와 일치하지 않는 경우, answer을 no로 정의한다.

첫 번째 원소들로 goal 원소들을 모두 구성할 수 있는 경우, answer을 yes로 정의하는데

1. 카드 뭉치 1과 2의 원소들을 모두 사용해 크기가 둘 다 0인 경우 (cards1.size() + cards2.size() == 0)
2. goal의 모든 원소들을 구성할 수 있지만 남은 원소가 있는 경우 (cnt == goal.size())

로 구분할 수 있다. 
*/

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int cnt = 0;
    
    for (int i = 0; i < goal.size(); i++) {
        if (cards1[0] == goal[i]) {
            cards1.erase(cards1.begin());
            cnt++;
        }
        else if (cards2[0] == goal[i]) {
            cards2.erase(cards2.begin());
            cnt++;
        }
        else answer = "No";
    }
    if ((cards1.size() + cards2.size() == 0) || cnt == goal.size()) answer = "Yes";
    
    return answer;
}

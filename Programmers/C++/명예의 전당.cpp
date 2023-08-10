#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor;
    
    for (int i = 0; i < score.size(); i++) {
      
        // k 일이 지나기 전에는 점수를 그냥 추가한 뒤, 최소 값을 추가
        if (i + 1 <= k) {
            honor.push_back(score[i]);
            sort(honor.begin(), honor.end());
            answer.push_back(honor[0]);
        }
        // k 일이 지난 뒤에는 이전 최소 값보다 큰 경우에 벡터의 마지막 값을 제거하고 새로운 점수를 추가
        else {
            sort(honor.rbegin(), honor.rend());
            if (score[i] > honor[k - 1]) {
                honor.pop_back();
                honor.push_back(score[i]);
            }
            sort(honor.rbegin(), honor.rend());
            answer.push_back(honor[k - 1]);
        }
    }
    
    return answer;
}

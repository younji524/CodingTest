#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    map <int, int> sum;
    sum.insert({{1, 0}, {2, 0}, {3, 0}});
    
    int a1[5] = {1, 2, 3, 4, 5};
    int a2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int a3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == a1[i % 5]) sum[1]++;
        if (answers[i] == a2[i % 8]) sum[2]++;
        if (answers[i] == a3[i % 10]) sum[3]++;
    }

    int max = 0;
    
    for (auto &num : sum) {
        if (max < num.second) {
            max = num.second;
            answer.clear();
            answer.push_back(num.first);
        }
        else if (max == num.second) {
            answer.push_back(num.first);
        }
    }
        
    return answer;
}

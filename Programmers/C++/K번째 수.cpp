/*
solution

주어진 원래 벡터로부터 정해진 범위만큼 잘라내어 새로운 벡터를 정의한다.
정의한 벡터에 대해 오름차순으로 정렬하고 해당 인덱스 값을 정답으로 출력한다.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> v;

    for (int i = 0; i < commands.size(); i++) {
        v.resize(commands[i][1] - commands[i][0] + 1);
        copy(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1], v.begin());

        sort(v.begin(), v.end());
        answer.push_back(v[commands[i][2] - 1]);
    }
    
    return answer;
}

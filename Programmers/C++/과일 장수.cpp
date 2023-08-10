#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int apple[score.size() / m][m];
    
    sort(score.begin(), score.end(), greater<>());
    
    for (int i = 0; i < score.size() / m; i++) {
        for (int j = 0; j < m; j++) {
            apple[i][j] = score[m * i + j];
        }
        answer += apple[i][m-1] * m;
    }
    
    return answer;
}

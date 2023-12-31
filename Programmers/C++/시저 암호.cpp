#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            answer += ' ';
        }
        // a 에서 n이 더해졌을 때 z를 넘어가는 경우를 고려
        else if ((s[i] <= 90 && s[i] + n > 90) || (s[i] <= 122 && s[i] + n > 122)) {
            answer += s[i] - 26 + n;
        }
        else {
            answer += s[i] + n;
        }
    }
    return answer;
}

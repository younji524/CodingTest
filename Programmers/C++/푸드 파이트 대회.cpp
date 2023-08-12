#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for (int i = 1; i < food.size(); i++) {
        for (int j = 0; j < food[i] / 2; j++) {
            answer += to_string(i);
        }
    }
    // algorithm 헤더파일 내 reverse 함수 이용해 문자열 뒤집기
    string temp = answer;
    reverse(temp.begin(), temp.end());
  
    answer += "0";
    answer += temp;
    
    return answer;
}

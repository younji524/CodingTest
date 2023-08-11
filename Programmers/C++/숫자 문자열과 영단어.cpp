#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string s) {
    int answer = 0;
    string tmp;
    vector<string> alpha = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (auto i : s) {
        // 숫자이면 (isdigit() 함수 : cctype 선언 필요)
        if (isdigit(i) != 0) {   
            answer = answer * 10 + i - '0';
        }
        // 문자이면
        else { tmp += i; }
        // 저장된 문자열 tmp가 alpha의 원소와 일치하면 해당 인덱스를 추가하고 tmp 초기화
        for (int j = 0; j < alpha.size(); j++) {
            if (tmp == alpha[j]) {
                answer = answer * 10 + j;
                tmp = "";
            }
        }
    }

    return answer;
}

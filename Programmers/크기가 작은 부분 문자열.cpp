/*
아이디어

주어진 p의 자릿수만큼 t 문자열을 쪼개어 temp에 할당해 준 뒤, p와의 크기를 비교한다.
동일한 방식으로 문자열의 시작점을 한 칸씩 옮겨가며 값을 할당하여 크기를 비교한다.

이 문제의 경우, 주어지는 t 문자열의 크기가 매우 크므로, long long 형을 사용하여야 한다.
*/

#include <string>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int cnt = t.size() - p.size() + 1;
    
    for (int i = 0; i < cnt; i++) {
        unsigned long long temp = 0;
        for (int j = 0; j < p.size(); j++) {
            temp = temp * 10 + t[i + j] - '0';
        }
        if (temp <= stoull(p)) answer ++;
    }
    
    return answer;
}

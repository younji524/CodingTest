/*
solution

사용자 정의 함수인 compare을 만들어 sort 에 넣어줌으로써 원하는 인덱스를 기준으로 정렬한다.

이 문제의 경우, 주어진 n을 인덱스로 정렬하도록 하고 n을 기준으로 같은 값을 보이면 전체 문자열을 기준으로 정렬하도록 compare 함수를 정의했다.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;

bool compare(string x, string y) {
    return x[N] == y[N] ? x < y : x[N] < y[N];
}

vector<string> solution(vector<string> strings, int n) {
    N = n;
    sort(strings.begin(), strings.end(), compare);   
    
    return strings;
}

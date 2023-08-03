#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (true) {
        int tmp1 = (n / a) * b;
        int left = n % a;
        n = tmp1 + left;  
        answer += tmp1;
        if (n < a) break;
    }
    return answer;
}

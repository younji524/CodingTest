// 1. O(N)의 시간 복잡도로 소수 판별하기

int decimal(int n) {
    int a = 1;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) a = 0;
    }
    return a;
}

// 2. O(√N)의 시간 복잡도로 소수 판별하기
// 제곱근을 기준으로 약수가 짝을 이룬다는 특성에 근거하여 2 ~ 제곱근까지의 수로 나누어지는지 확인한다.

#include <cmath>

int decimal(int n) {
    int a = 1;
    
    for (int i = 2; i <= sqrt(n) ; i++) {
        if (n % i == 0) a = 0;
    }
    return a;
}

// 3. O(Nlog(logN))의 시간 복잡도로 소수 판별하기 - 에라토스테네스의 체 알고리즘
// 약수의 배수는 약수가 될 수 없다는 특성에 근거하여 약수의 배수는 제외함으로써 시간 복잡도를 줄인다.

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int arr[n]; 
    
    // n까지의 모든 수가 담긴 배열 생성
    for (int i = 0; i <= n; i++) {
        arr[i] = i;            
        }
    
    // 에라토스테네스의 체 알고리즘 : 약수의 배수의 배열 값을 0으로 변환
    for (int i = 2; i <= n; i++) {
        if (arr[i] == 0) continue;
        for (int j = 2 * i; j <= n; j += i) {
            arr[j] = 0;
        }
    }
    
    // 배열 값이 0인 것을 제외하고 카운트
    for (int i = 2; i <= n; i++) {
        if (arr[i] != 0) answer++;
    }
    return answer;
}

#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue <int, vector<int>, greater<>> pq;
    for (int &i : scoville){ pq.push(i); }
    
    while (pq.size() > 0){
        int sum = 0;
        // K보다 작으면 합치기
        if (pq.top() < K and pq.size() >= 2){
            // 가장 작은 값과 그 다음 작은 값을 합침
            sum += pq.top();
            pq.pop();  // pq 내에서 가장 작은 값을 반환
            sum += pq.top() * 2;
            pq.pop();
            
            pq.push(sum);
            answer += 1;
        }
        // 모든 음식의 스코빌 지수를 K 이상으로 만들 수 없는 경우    
        else if (pq.size() == 1 and pq.top() < K){
            return -1;
        }
        // K 보다 크면 지우기
        else{
            pq.pop();
        }
    }
                
    return answer;
}

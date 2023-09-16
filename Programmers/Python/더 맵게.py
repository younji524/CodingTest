# 우선순위큐라고도 불리는 heapq는 Index 0에 대해서 가장 작은 값은 반환한다는 특징을 가짐

import heapq
def solution(scoville, K):
    answer = 0
    # 원래 선언된 리스트에 대하여 heap구조로 변환하는 함수 : heapify
    heapq.heapify(scoville)

    while len(scoville) > 0:
        sum = 0
        if scoville[0] < K and len(scoville) >= 2:
            sum += scoville[0]
            heapq.heappop(scoville)  # heap 내에서 가장 작은 값을 반환
            sum += scoville[0] * 2
            heapq.heappop(scoville)
            heapq.heappush(scoville, sum)
            answer += 1
            
        elif len(scoville) == 1 and scoville[0] < K:
            return -1
        
        else:
            heapq.heappop(scoville)
    
    return answer

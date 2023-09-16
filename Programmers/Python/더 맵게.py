import heapq
def solution(scoville, K):
    answer = 0
    heapq.heapify(scoville)

    while len(scoville) > 0:
        sum = 0
        if scoville[0] < K and len(scoville) >= 2:
            sum += scoville[0]
            heapq.heappop(scoville)
            sum += scoville[0] * 2
            heapq.heappop(scoville)
            heapq.heappush(scoville, sum)
            answer += 1
            
        elif len(scoville) == 1 and scoville[0] < K:
            return -1
        
        else:
            heapq.heappop(scoville)
    
    return answer

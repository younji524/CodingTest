def count(citations):
    cnt = [0 for _ in range(max(citations) + 1)]
    
    for i in range(max(citations) + 1):
        for j in range(len(citations)):
            if citations[j] >= i:
                cnt[i] += 1
    
    return cnt

def solution(citations):
    answer = 0
    h_idx = max(citations)
    cnt = count(citations)
    
    for i in range(len(cnt)):
        if h_idx <= i and h_idx <= cnt[len(cnt) - i - 1]:
            return h_idx
        h_idx -= 1

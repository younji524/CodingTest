# 투 포인터 이용해서 문제 해결하기

def solution(n):
    answer = 1
    st_idx = 1
    end_idx = 1
    sum = 1
    
    while end_idx != n:
        if sum == n:
            answer += 1
            end_idx += 1
            sum += end_idx
        elif sum > n:
            sum -= st_idx
            st_idx += 1
        else:
            end_idx += 1
            sum += end_idx
    
    return answer

# for문 이용해서 문제 해결하기

def solution(n):
    answer = 0
    
    for i in range(1, n + 1):
        sum = 0
        for j in range (i, n + 1):
            sum += j
            if sum == n:
                answer += 1
                break
            elif sum > n:
                break
    
    return answer

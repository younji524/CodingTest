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

def solution(people, limit):
    answer = 0
    check_list = [0] * len(people)
    p_li = sorted(people)
    j = len(p_li) - 1
    i = j - 1
    
    if len(people) == 1:
        return 1
    
    while j != 0:
        if check_list[j] == 1:
            j -= 1
            i = j - 1
        else:  
            if check_list[i] == 0 and p_li[j] + p_li[i] <= limit:
                answer += 1
                check_list[j] = 1
                check_list[i] = 1
            elif i != 0:
                i -= 1
            else:
                answer += 1
                check_list[j] = 1
                
    if check_list[0] == 0:
        answer += 1
        
    return answer

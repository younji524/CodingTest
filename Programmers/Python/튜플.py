def solution(s):
    answer = []
    s = sorted(s[2:-2].split("},{"), key = len)
    
    for i in range(len(s)):
        if i == 0:
            answer.append(int(s[i]))
        else:
            s_pre_part = s[i - 1].split(",")
            s_part = s[i].split(",")
            differ = list(set(s_part).difference(s_pre_part))
            answer.append(int(differ[0]))
    
    return answer

def solution(s):
    answer = True

    q = []
    for i in range(len(s)):          
        if s[i] == "(":
            q.append(s[i])
        elif len(q) != 0:
            out = q.pop()
            if out != "(":
                answer = False
        else:
            answer = False
            break
                
        if len(q) == 0 and i == len(s) - 1:
            answer = True
        else:
            answer = False
                
    return answer

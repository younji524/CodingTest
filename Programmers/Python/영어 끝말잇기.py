import math

def solution(n, words):
    tmp =[]
    
    for i in range(len(words)):
        if words[i] not in tmp:
            tmp.append(words[i])
            if len(tmp) > 1 and tmp[-2][-1] != tmp[-1][0]:
                # 올림 : math.ceil / 내림 : math.floor
                # 반올림 : round(), round()는 사사오입 원칙을 따른다. 반올림할 자리의 수가 5이면 반올림 할 때 앞자리의 숫자가 짝수면 내림하고 홀수면 올림한다.
                return [i % n + 1, math.ceil((i + 1) / n)]
        else:
            return [i % n + 1, math.ceil((i + 1) / n)]
        
        if tmp == words:
            return [0, 0]
    

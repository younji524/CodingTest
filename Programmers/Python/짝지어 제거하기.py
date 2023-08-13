stack 구조를 적절히 이용하면 문제를 해결할 수 있다.

def solution(s):
    tmp = []

    for i in s:
        tmp.append(i)
        if len(tmp) > 1 and tmp[-2] == tmp[-1]:
            tmp.pop()
            tmp.pop()
            
    if len(tmp) == 0:
        return 1
    else:
        return 0

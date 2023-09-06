from collections import deque

def check(q):
    new_q = deque()
    for i in range(len(q)):
        if q[i] == "}":
            if "{" in new_q:
                new_q.pop()
            else: new_q.append(q[i])
            
        elif q[i] == "]":
            if "[" in new_q:
                new_q.pop()
            else: new_q.append(q[i])
            
        elif q[i] == ")":
            if "(" in new_q:
                new_q.pop()
            else: new_q.append(q[i])
            
        else:
            new_q.append(q[i])

    if len(new_q) == 0: return True
    else: return False
    
def solution(s):
    answer = 0
    q = deque(s)
    
    for i in range(len(s)):
        a = q.popleft()
        q.append(a)
        if check(q): 
            answer += 1
    
    return answer

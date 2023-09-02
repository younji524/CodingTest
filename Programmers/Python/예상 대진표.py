import math

def findSection(n, a, b):
    a_part = b_part = 2
    if 1 <= a <= n / 2: a_part = 1
    if 1 <= b <= n / 2: b_part = 1
    
    return a_part, b_part
    
def solution(n, a, b):
    answer = math.log2(n)
    a_part, b_part = findSection(n, a, b)
    
    while a_part == b_part:
        n /= 2
        a_part, b_part = findSection(n, a, b)
        answer -= 1
        
    return answer

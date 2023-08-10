"""
bin(), oct(), hex() : 2진, 8진, 16진수 변환 함수
"""

def solution(s):
    cnt = 0
    num_z = 0
    
    while s != "1":
        s1 = s.replace("0", "")
        num_z += len(s) - len(s1)
        s = bin(len(s1))[2:]
        cnt += 1
        
    return [cnt, num_z]

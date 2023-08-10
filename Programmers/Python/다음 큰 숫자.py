def solution(n):
    answer = 0
    a = n + 1
    while True:
        if bin(a)[2:].count("1") == bin(n)[2:].count("1"):
            answer = a
            break
        else:
            a += 1
            
    return answer

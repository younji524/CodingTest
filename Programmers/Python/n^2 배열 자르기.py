"""
solution

지점의 행과 열이 각각 index를 n으로 나눈 몫과 나머지를 뜻한다는 것을 파악해야 함
(0, 0) >> (idx // n, idx % n) >> (0 // 3, 0 % 3)

또한, 좌표 (x,  y)에서 x 값과 y 값 중 큰 값 + 1이 해당 지점의 값이라는 것을 파악해야 함

max(0, 0) max(0, 1) max(0, 2) = 1 2 3
max(1, 0) max(1, 1) max(1, 2) = 2 2 3
max(2, 0) max(2, 1) max(2, 2) = 3 3 3

"""



def solution(n, left, right):    
    answer = []
    for i in range(left, right + 1):
        answer.append(max(i // n, i % n) + 1)
    
    return answer

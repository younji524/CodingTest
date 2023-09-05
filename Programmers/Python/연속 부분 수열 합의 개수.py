"""
dp 사용

ex. [7, 9, 1, 1, 4] 배열의 연속 부분 수열 합의 개수를 구하여라

(1) dp = [7, 9, 1, 1, 4]

(2)  dp = [7, 9, 1, 1, 4]
ele = [7, (9, 1, 1, 4, 7), 9, 1, 1, 4]
-------------------------------------
    dp = [16, 10, 2, 5, 11]
    
(3)    dp = [16, 10, 2, 5, 11]
ele = [7, 9, (1, 1, 4, 7, 9), 1, 1, 4]
-------------------------------------
       dp = [17, 11, 6, 12, 20]
...

dp 테이블에 다음 수를 더해주는 방식으로 연속 부분 수열 합을 구해나간다.

"""


def solution(elements):
    dp = elements
    elements = elements * 2 # 원소를 2배로 만들어 원형 수열처럼 만들어 줌
    answer = set(dp) # set은 자동으로 중복 원소 제거
    
    for i in range(1, len(dp)):
        for j in range(len(dp)):
            dp[j] = dp[j] + elements[j + i]
            answer.add(dp[j])
                
    return len(answer)

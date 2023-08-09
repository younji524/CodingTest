"""
* 제한 사항 *

문자열 내에 공백이 연속해서 나오거나, 문자열의 가장 마지막에 공백이 여러 개 나오는 경우를 고려해야 함
"""

def solution(s):
    answer = ''
    tmp = s.split(" ")
    print(tmp)
    
    for i in tmp:
        if i == '':
            answer += " "
        else:
            answer += i[0].upper() + i[1: ].lower() + " "
            n = 0
    
    return answer[ : -1]

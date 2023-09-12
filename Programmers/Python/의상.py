# dictionary에서 하나의 key에 대하여 여러 개의 value 를 넣고 싶으면 초기 value 값 선언 시 list로 선언하고 append를 사용한다.

def solution(clothes):
    result = 1
    clothes_dict = {}
    for i in clothes:
        if i[-1] not in clothes_dict:
            clothes_dict[i[-1]] = 2
        else:
            clothes_dict[i[-1]] += 1
    
    for i in clothes_dict.values():
        if i == 0:
            return 0
        else:
            result *= i
    
    return result - 1

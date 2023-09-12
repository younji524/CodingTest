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

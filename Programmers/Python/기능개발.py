def count(progresses, speeds):
    count = 0
    while progresses < 100:
        progresses += speeds
        count += 1
    return count

def solution(progresses, speeds):
    answer = []
    cnt_list = []
    for i in range(len(progresses)):
        cnt_list.append([count(progresses[i], speeds[i]), 0])
    
    for i in range(len(cnt_list)):
        j = 1
        if cnt_list[i][1] == 1:
            continue
        else:
            if i + j == len(cnt_list):
                j = 1
            else:
                while cnt_list[i][0] >= cnt_list[i + j][0]:
                    cnt_list[i + j][1] = 1
                    j += 1
                    if i + j == len(cnt_list):
                        break
        answer.append(j)
        
    return answer

# 스택/ 큐 사용 풀이

def solution(progresses, speeds):
    answer = []
    time = 0
    count = 0
    while len(progresses)> 0:
        if (progresses[0] + time * speeds[0]) >= 100:
            progresses.pop(0)
            speeds.pop(0)
            count += 1
        else:
            if count > 0:
                answer.append(count)
                count = 0
            time += 1
    answer.append(count)
    
    return answer

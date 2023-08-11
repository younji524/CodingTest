#include <vector>

using namespace std;

int decimal(int n) {
    int a = 1;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) a = 0;
    }
    return a;
}

int solution(vector<int> nums) {
    int answer = 0;
    
    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                answer += decimal(nums[i] + nums[j] + nums[k]);
            }
        }
    }

    return answer;
}

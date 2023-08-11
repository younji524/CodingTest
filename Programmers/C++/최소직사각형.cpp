/*
solution

가로 세로가 회전 가능한 명함의 크기를 최소화해야 하므로
가로는 명함의 긴 변 중 가장 긴 변으로, 세로는 짧은 변 중 가장 긴 변으로 만들어야 한다.

각 배열의 가로 세로 값을 비교하여 max( __ , max( 배열 가로 값, 세로 값 ))를 가로에 할당하고, max( __ , max( 배열 가로 값, 세로 값 ))을 세로에 할당한다.
*/
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int width = 0;
    int height = 0;
    
    for (int i = 0; i < sizes.size(); i++) {
        width = max(width, max(sizes[i][0], sizes[i][1]));
        height = max(height, min(sizes[i][0], sizes[i][1]));
    }
    
    return width * height;
}

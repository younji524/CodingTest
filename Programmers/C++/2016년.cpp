#include <string>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    int arr[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int sum = 0;
    
    for (int i = 0; i < a - 1; i++) {
        sum += arr[i];
    }
    sum += b;
    
    return week[sum % 7];
}

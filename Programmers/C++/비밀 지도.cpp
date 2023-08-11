#include <string>
#include <vector>
#include <cmath>

using namespace std;

// function for changing decimal number to binary
string binary(int n, int size) {
    string answer;
    long sum = 0;
    for (int i = 0; n > 0; i++) {
        sum += n % 2 * pow(10, i);
        n /= 2;
    }

    answer = to_string(sum);
    while (answer.size() != size) {
        answer = "0" + answer;
    }

    return answer;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string a;

    for (int i = 0; i < arr1.size(); i++) {
        string n1 = binary(arr1[i], arr1.size());
        string n2 = binary(arr2[i], arr1.size());
        a = "";

        for (int j = 0; j < n1.size(); j++) {
            if (n1[j] - 48 == 1 || n2[j] - 48 == 1) {
                a += "#";
            }
            else {
                a += " ";
            }
        }
        answer.push_back(a);
    }
    return answer;
}

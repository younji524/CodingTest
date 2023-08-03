#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    // map 정의
    map <string, int> m;
    for (int i = 0; i < name.size(); i++) m.insert({name[i], yearning[i]});
    
    for (int j = 0; j < photo.size(); j++) {
        int sum = 0;
        for (int k = 0; k < photo[j].size(); k++) {
            if (m.find(photo[j][k]) != m.end()) {
                sum += m[photo[j][k]];
            }
        }
        answer.push_back(sum);
    }
    
    return answer;
}

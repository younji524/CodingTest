#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> data;
    
    if (cacheSize == 0) return cities.size() * 5;
    
    for (string &i : cities) transform(i.begin(), i.end(), i.begin(), ::toupper);
    
    for(int i = 0; i < cities.size(); ++i){
        auto it = find(data.begin(), data.end(), cities[i]);
        // cache hit
        if (it != data.end()) {
            data.erase(it);
            answer += 1;
        }
        // cache miss
        else {
            if (data.size() == cacheSize) data.erase(data.begin());
            answer += 5;
        }
        data.emplace_back(cities[i]);
    }
    
    return answer;
}

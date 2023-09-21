#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n, m, num, left, right;
    int answer = 0;
    deque<int> dq;

    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        dq.push_back(i);
    }

    while(m--){
        cin >> num;

        for (int i = 0; i < dq.size(); i++){
            if (dq[i] == num){
                left = i;
                right = dq.size() - i;
                break;
            }
        }

        if (left <= right){
            while(dq.front() != num){
                dq.push_back(dq.front());
                dq.pop_front();
                answer++;
            }
            dq.pop_front();
        }
        else{
            while(dq.front() != num){
                dq.push_front(dq.back());
                dq.pop_back();
                answer++;
            }
            dq.pop_front();
        }
    }

    cout << answer;
}

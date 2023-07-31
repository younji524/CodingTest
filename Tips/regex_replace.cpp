#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(void)
{
    string s = "OneTwoThree";
    string s2 = "...";

    // #include <regex> 필요
    // 대상 문자열 = regex_replace(대상 문자열, regex(바꿀 문자열), 치환할 문자열)
    s = regex_replace(s, regex("Three"), "3");

    // {2} : 2개
    // {2,} : 최소 2개
    // {2,3} : 2개에서부터 3개까지
    s2 = regex_replace(s2, regex("[.]{2,}"), ".");
  
    cout << s; // "OneTwo3"
    cout << s2; // "."
}

![image](https://github.com/younji524/CodingTest/assets/76142194/89954ddd-b93e-4941-9489-e3529cf9e6e2)

#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(void)
{
    string str = "I'm a strong boy.";

    // #include <regex> 필요
    // s = regex_replace(대상 문자열, regex(바꿀 문자열), 치환할 문자열)
    str = regex_replace(str, regex("boy"), "girl");
  
    cout << str; // "I'm a strong girl."
}

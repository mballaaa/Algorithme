#include<iostream>
#include <vector>
#include <algorithm>
#include<sstream>
using namespace std;
class Solution {
public:

std::string splitString(const std::string& input, char delimiter) {
    std::string result;
    std::istringstream tokenStream(input);
    std::string token;
    bool first = true;

    while (std::getline(tokenStream, token, delimiter)) {
        if (!first) {
            result += delimiter; 
        }
        result += token;
        first = false;
    }

    return result;
}
    int lengthOfLastWord(string s) 
    {
      int length = 0;
    int size = s.size();

    
    while (size > 0 && s[size - 1] == ' ') {
        size--;
    }

    for (int i = size - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            length++;
        } else {
            break;
        }
    }

    return length;
    }
};
int main()
{
    Solution s1;
    std :: cout << s1.lengthOfLastWord("   hey cv");
}
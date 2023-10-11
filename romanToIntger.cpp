#include <iostream>
#include <string>
#include<map>
using namespace std;
int romanToInt(string s) {
          map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int sum = 0;
        int len = s.length();

        for (int i = 0; i < len; i++) {
            if (i < len - 1 && roman[s[i]] < roman[s[i + 1]]) {
                sum += roman[s[i + 1]] - roman[s[i]];
                i++;
            } else {
                sum += roman[s[i]];
            }
        }

        return sum;
    }
   
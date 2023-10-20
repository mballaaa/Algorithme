#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
       int n = digits.size();

    
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;  
        } else {
            digits[i] = 0;  
        }
    }


    digits.insert(digits.begin(), 1);
    return digits;
    }
};

int main()
{

    Solution s1;
    std::vector<int> myVector;
     myVector.push_back(9);
    myVector.push_back(8);
     myVector.push_back(9);
   // myVector.push_back(9);

    vector<int> newve = s1.plusOne(myVector);
       for (size_t i = 0; i < newve.size(); i++)
       {
        cout << newve[i] << "\n";
       }

    // s1.plusOne(myVector);
}
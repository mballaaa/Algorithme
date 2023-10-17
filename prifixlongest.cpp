#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {

    string longestCommonPrefix(vector<string>& strs)
    {
        string output;
        string result;

        if(strs.size()==0)
                return "";
        result =strs[0];
        for (size_t i = 1; i < strs.size(); i++)
        {
            string cuurent=strs[i];
           int  j=0;
            while (j < cuurent.length() && j < result.length() && cuurent[j]==result[j])
            {
                j++;
            }
            result=result.substr(0,j);
            
        }
                  
            
    
     return result;       
    }
};
int main()
{
 Solution solution;
    std::vector<std::string> inputStrings = {"flower", "flow","flight"};
    std::string result = solution.longestCommonPrefix(inputStrings);
    std::cout << "Longest common prefix: " << result << std::endl;
    return 0;   
}
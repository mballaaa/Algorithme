#include <iostream>
using namespace std;
#include <stack>
#include <stack>
class Solution {
public:
    bool is_parenthese(char c)
    {
        if(c=='[' || c=='(' || c == '{')
            return true;
        return false;
    }
    bool isValid(string s) 
    {
         std::stack<char> myStack;
         int count =0;;
         for(int i =0;i < s.length();i++)
         {
            if(is_parenthese(s[i]))
            {
               
                myStack.push(s[i]);
                count++;
            }
            else if(s[i]==']' || s[i]==')' || s[i] == '}')
            {
                 count++;
                if(s[i]==']')
                {
                    if(myStack.empty() || myStack.top()!='[')
                        return false;
                    else
                        myStack.pop();
                }
                else if(s[i]==')')
                {
                    
                    if(myStack.empty() || myStack.top()!='(')
                        return false;
                    else
                        myStack.pop();
                }
                  else if(s[i]=='}')
                {
                    if(myStack.empty() || myStack.top()!='{')
                        return false;
                    else
                        myStack.pop();
                }
            }
         }
       
         if(myStack.empty() && count % 2==0)
            return true;
        return false;
         // 
    }
};
int main()
{
    Solution s1;
    if(s1.isValid("){"))
        std :: cout << "heel\n";
    else 
        std :: cout << "No\n";
}
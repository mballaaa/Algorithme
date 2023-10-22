#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int climbStairs(int n) 
    {
    if(n < 3)
        return n;
    int *dup=new int[n+1];
    dup[1]=1;
    dup[2]=2;
    dup[3]=3;

    for(int i =4; i<=n;i++)
    {
        dup[i]=dup[i-1]+dup[i-2];
    }
    return dup[n];    
    }
};
int main()
{
    Solution s1;
    cout << s1.climbStairs(4);
}
//n=S[N]=






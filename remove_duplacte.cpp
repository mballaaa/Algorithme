#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
 bool not_exit(int number,vector<int>& myVector) 
 {
    for(int i =0; i < myVector.size();i++)
    {
        if(myVector[i]==number)
            return false;
    }
    return true;
 }
    int removeDuplicates(vector<int>& nums) {
         std::vector<int> myVector;
        
         for (int i = 0; i < nums.size(); i++)
        {
            if( i ==0)
            {
                myVector.push_back(nums[i]);
                
            }
            if(not_exit(nums[i],myVector))
                myVector.push_back(nums[i]); 
        }
        nums=myVector;
      
        return (myVector.size());
        
    }
    
};
int main()
{
    Solution s1;
       std::vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(1);
    myVector.push_back(2);
    // myVector.push_back(3);
    //  myVector.push_back(3);
    // myVector.push_back(1);
    //  myVector.push_back(2);
    //     myVector.push_back(2);
    //    myVector.push_back(3);
    //     myVector.push_back(3);
       
    // myVector.push_back(5);
      

   
    s1.removeDuplicates(myVector);
   
    

}


#include<iostream>
class Solution {
public:
    bool isPalindrome(int x) {
         int flag =0;
    
    std ::string a;
         a= std::to_string(x);
         std :: string result;
         int  i=a.length()-1;
        int j =0;
         while(i >= 0)
          {
            if(a[i]!='-')
              result+=a[i];
          

              i--;
    
         }

         if( !result.compare(a) )
         {
            return true;
         }
         return false;


    }
};
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="A man, a plan, a canal: Panama";
    for(int i=0; i<s.length(); i++){
            if(s[i]<'0' || s[i]>'9'&& s[i]<'A'|| s[i]>'Z' && s[i]<'a' || s[i]>'z' ){
                s.erase(i,1);
                i--;
            }
        }
        for(int i=0; i<s.length(); i++){
            if(isupper(s[i])){
                s[i] = s[i]+32;
            }
        }
        string r=s;
        reverse(r.begin(), r.end());
        cout<<s <<" "<<r;
        return 0;
}

//best solution : 
// class Solution {
// public:
//     bool isPalindrome(string s) {
        
//         int left = 0, right = s.length()-1;
//         while(left<right)
//         {   
//             if(!isalnum(s[left])) 
//                 left++;
//             else if(!isalnum(s[right])) 
//                 right--;
//             else if(tolower(s[left])!=tolower(s[right])) 
//                 return false;
//             else {
//                 left++; 
//                 right--;
//             }
//         }
//         return true;
//     }    
// };
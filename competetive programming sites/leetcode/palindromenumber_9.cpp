class Solution {
public:
    bool isPalindrome(int x) {
        int rem=0;
        long long int rev=0; 
        int num=x;
        while(num>0 && rev>=INT_MIN && rev<=INT_MAX){
            rem = num%10;
            rev = (rev*10)+rem;
            num=num/10;
        }
        if(rev==x){
            return 1;
        }
        else{
            return 0;
        }
    }
};
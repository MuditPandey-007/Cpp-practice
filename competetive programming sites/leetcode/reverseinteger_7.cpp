class Solution {
public:
    int reverse(int x) {
        int long long temp=0;
        int num=x;
        int rem=0;
        
        while(num!=0){
            rem = num%10;
            temp = (temp*10)+rem;
            num = num/10;
        }
        if(temp>=INT_MAX || temp<=INT_MIN){
            return 0;
        }
        else{
        return temp;
        }
    }
};
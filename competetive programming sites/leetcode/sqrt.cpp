//Find the square root of number and round it to the next integer if it comes in points

// Method 1 : Simply use sqrt function: 
class Solution {
public:
    int mySqrt(int x) {
        int ans = sqrt(x);
        return ans;
    }
};

//IMP: Method 2 : Using binary search (logn) time
class Solution {
public:
    int mySqrt(int x) {
        long int low=0;
        long int high=x;
        int res;
        while(low<=high){
            long int mid=(low+high)/2;
            if(mid*mid==x)
               return mid;
            else if(mid*mid>x)
               high=mid-1;
            else{
                res=mid;
                low=mid+1;
            }
        }
        return res;
    }
};
long long maxiAnd(int n,vector<int> &a){
    // Write your code here
    long long int maxi=0;
    
   
    for(int i=1; i<n; i++){
        a[i] = a[i]^i;
    }

    for(int i=0; i<n; i++){
        int temp = a[i]&a[n-1];
        if(temp>maxi){
            maxi = temp;
        }
    }

   return maxi;
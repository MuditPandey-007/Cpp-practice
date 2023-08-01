//BI lindrome more method 
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int ans=-1;
        int freq [130]={0};
        cin>>s;

        for(int i=0;i<s.size();i++)
        {
            freq[s[i]]+=1;
        }
        
            for(int i=0;i<130;i++)
        {
            if(freq[i]==2)   
            ans=s.size()-2;
        }
    cout<<ans<<endl;
       
    }

	return 0;
}


//breaking strings and checking using substring substr
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    
	    string s1,s2;
	    s1=s.substr(0,n/2-1);
	    s2=s.substr(n/2+1,n);
	    //cout<<s1<<" "<<s2<<endl;
	    s2+=s1;
	    
	    if(s==s2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	    
	    
	    
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int T;
	cin>>T;
	
	for(int z=1; z<=T; z++){
		
		long long int n;
		cin>>n;
		
		
		
		vector<long long int>po(n);
		
		int ans=0;
		long long int max=-1;
		
		for(long long int i=0; i<n; i++){
			cin>>po[i];
		}
		
		
		
		for(long long int i=0; i<n; i++){
			if(po[i]>max){
				max=po[i];
				if(i==n-1){
					ans++;
				}else if(po[i]>po[i+1]){
					ans++;
				}
			}
		}
		
		cout<<"Case #"<<z<<": ";
		cout<<ans<<endl;
		
	}
	
}

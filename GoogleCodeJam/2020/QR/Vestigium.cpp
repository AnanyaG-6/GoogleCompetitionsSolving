#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int T;
	cin>>T;
	
	//int r,c,t;
	
	for(int z=1; z<=T; z++){
		
		int n;
		cin>>n;
		
		int r=0,c=0,t=0;
		
		vector<int> v[n];
		
		for(int i=0; i<n; i++){
			set<int> s;
			
			for(int j=0; j<n; j++){
				int ent;
				cin>>ent;
				v[i].push_back(ent);
				s.insert(ent);
				if(i==j){
					t+=ent;
				}
			}
			
			if(s.size()<n){
				r++;
			}
			
		}
		
		for(int i=0; i<n; i++){
			set<int> s;
			for(int j=0; j<n; j++){
				s.insert(v[j][i]);
			}
			
			if(s.size()<n){
				c++;
			}
		}
		
		cout<<"Case #"<<z<<": "<<t<<" "<<r<<" "<<c<<'\n';
		
		
	}
}

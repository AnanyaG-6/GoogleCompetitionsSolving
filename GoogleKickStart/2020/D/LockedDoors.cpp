#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int T;
	cin>>T;
	
	for(int z=1; z<=T; z++){
		
		int N, Q;
		vector<int>D(N-1);
		
		for(int i=0; i<N-1; i++){
			cin>>D[i];
		}
		
		cout<<"Case #"<<z<<": ";
		
		for(int i=0; i<Q; i++){
			int S, K;
			cin>>S>>K;
			
			int pos=S;
			int steps=1;
			while(steps<K){
				
				if(pos==1){
					pos=2;
				}
			}
			
			cout<<pos+1<<" ";
			
		}
		
		cout<<endl;
	}
}

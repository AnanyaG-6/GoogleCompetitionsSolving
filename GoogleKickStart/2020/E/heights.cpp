#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin>>T;
	for(int t=1; t<=T; t++){
		
		int N, A, B, C;
		cin>>N>>A>>B>>C;
		
		int sim=(N-A-B+C);
		
		if((A+B-C)>N){
			cout<<"Case "<<t<<": IMPOSSIBLE"<<'\n';
			continue;
		}
		
		vector<int>H(N);
		
		int ptr=0;
		int lo;
		
		if(A==C){
			
			for(int i=0; i<A; i++){
				H[i]=N;
			}
			ptr=A;
			for(int i=0; i<sim; i++){
				H[ptr+i]=i+1;
				lo=i+1;
			}
			ptr=ptr+sim;
			
			for(int i=0; i<N-ptr; i++){
				H[ptr+i]=N-C-i;
			}
			
			
		}else{
			for(int i=0; i<A-C; i++){
				H[i]=i+1+sim;
				lo=i+1+sim;
			}
			
			ptr=A-C;
			
			for(int i=0; i<sim; i++){
				H[ptr+i]=i+1;
			}
			ptr=ptr+sim;
			
			for(int i=0; i<C; i++){
				H[ptr+i]=N;
			}
			ptr=ptr+C;
			
			for(int i=0; i<B-C; i++){
				H[ptr+i]=N-C-i;
			} 
			
		}
		
		
		cout<<"Case #"<<t<<": ";
		for(int i=0; i<N; i++){
			cout<<H[i]<<" ";
		}
		cout<<'\n';
		
	}
	
}

/*
3
4 1 3 1
4 4 4 3
5 3 3 2
*/

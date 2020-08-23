#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    int T;
    cin>>T;
    
	for(int t=1; t<=T; t++){
	
	int N;
	cin>>N;
    
    vector<long long int>V(N);
    
	for(int i=0; i<N; i++){
	cin>>V[i];
	}
    
	int maxl=0;
    
    for(int i=0; i<N-1; i++){
        
		long long int d=V[i+1]-V[i];
        int c=1;
 		//cout<<V[i]<<" ";       
		for(long long int j=i+1; j<N; j++){
			
			//cout<<V[i]<<" "<<V[i+j]<<" "<<d<<endl;
            if(V[j]==(V[i]+(d*(j-i)))){
            	//cout<<V[i];
                c++;
                //cout<<c;
            }else{
                if(maxl<c){
                    maxl=c;
                    break;
                }
            }
            
            if(j==(N-1)){
            	if(maxl<c){
            		maxl=c;
				}
			}
            
        }
    }
    
    //maxl++;
    
    cout<<"Case #"<<t<<": "<<maxl<<'\n';
    
    
    
    
    }

}

/*
4
7
10 7 4 6 8 10 11
4
9 7 5 3
9
5 5 4 5 5 5 4 5 6
10
5 4 3 2 1 2 3 4 5 6
*/

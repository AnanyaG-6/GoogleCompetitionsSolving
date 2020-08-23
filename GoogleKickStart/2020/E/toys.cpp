#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int T;
    cin>>T;
    
    for(int t=1; t<=T; t++){
        
        int N;
        cin>>N;
        
        vector<int>E(N);
        vector<int>R(N);
        int time=0;
        
        for(int i=0; i<N; i++){
            cin>>E[i]>>R[i];
            time+=E[i];
        }
        
        if(N==1){
            cout<<"Case #"<<t<<": 0 "<<E[0]<<endl;
            continue;
        }
        if(N==2){
            if(R[0]<=E[1]){
                if(R[1]<=E[0]){
                    cout<<"Case #"<<t<<": 0 INDEFINITELY"<<endl;
                }
                else{
                    cout<<"Case #"<<t<<": 0 "<<(2*E[0])+E[1]<<endl;
                }
            }else{
                cout<<"Case #"<<t<<": 0 "<<E[0]+E[1]<<endl;
            }
            
            continue;
        }
        int max=0;
        int del;
        for(int i=0; i<N; i++){
            int tp=0;
            for(int j=0; j<N; j++){
                if(i!=j){
                    tp+=E[j];
                }
            }
            
            if(tp>=R[i]){
                time+=E[i];
            }else{
                del=i;
            }
            
        }
        
    }
    
}

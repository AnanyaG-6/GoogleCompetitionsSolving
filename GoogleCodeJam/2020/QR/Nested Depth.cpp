#include<bits/stdc++.h>
using namespace std;

int conv(char c){
	if(c=='0'){
		return 0;
	}
	
	else if(c=='1'){
		return 1;
	}
	
	else if(c=='2'){
		return 2;
	}
	
	else if(c=='3'){
		return 3;
	}
	
	else if(c=='4'){
		return 4;
	}
	
	else if(c=='5'){
		return 5;
	}
	
	else if(c=='6'){
		return 6;
	}
	
	else if(c=='7'){
		return 7;
	}
	
	else if(c=='8'){
		return 8;
	}
	
	else if(c=='9'){
		return 9;
	}
}

int main(){
	
	int T;
	cin>>T;
	
	for(int z=1; z<=T; z++){
		
		string s;
		cin>>s;
		
		//long long int num=stoll(s);
		//cout<<num;
		
		cout<<"Case #"<<z<<": ";
		
		/*if(num==0){
			cout<<s<<endl;
			continue;
		}
		
		vector<int> v;
		
		while(num>0){
			v.push_back(num%10);
			num/=10;
		}*/
		
		
		int size=0;
		
		for(int i=0; i<s.length(); i++){
			int v=conv(s[i]);
			//cout<<v<<" ";
			if(v==size){
				cout<<v;
			}else if(v>size){
				while(v>size){
					cout<<"(";
					size++;
				}
				cout<<v;
			}else{
				while(v<size){
					cout<<")";
					size--;
				}
				cout<<v;
			}
			
		}
		
		while(size--){
			cout<<")";
		}
		
		cout<<endl;
		
		
	}
	
}

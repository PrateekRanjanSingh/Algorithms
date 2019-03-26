#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin>>t;
	while(t--){
		string str="";cin>>str;
		ll flag = 0;
		ll ans = -1;
		if(str[0] == '0'){
			cout<<"NO\n";continue;
		}
		for(ll i=0; i<str.length()/2; i++){
			ll num = 0;
			flag = 1;
			for(ll j=0; j<=i; j++)
				num=num*10+(str[j]-'0');
			ll k=i+1;		
			ans = num;
			while(k < str.length()){
				num++;
				ll temp = num;
				vector<char> d;
				while(temp){d.push_back((char)('0'+temp%10));temp/=10;}
				reverse(d.begin(), d.end());
				for(ll j=0; j<d.size(); j++){
					if(k == str.length()){flag=0;break;}	
					if(d[j] != str[k]){flag = 0;break;}
					k++;
				}	
				if(!flag)break;
			}
			if(flag)break;
		}	
		if(flag)cout<<"YES "<<ans<<endl;
		else cout<<"NO\n";
	}
	return 0;
}
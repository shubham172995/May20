#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)
#define pool(i, a, b) for(int i=a;i>b;i--)
#define pooll(i, a, b) for(ll i=a;i>b;i--)
#define pb push_back

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k;
		cin>>n>>k;
		string s;
		cin>>s;
		sort(s.begin(), s.end());
		if(k==1){
			cout<<s<<endl;
			continue;
		}
		vector<string> a(k);
		loop(i, 0, k){
			a[i]+=s[i];
		}
		s=s.substr(k, n-k);
		bool flag=false;
		loop(i, 1, s.length()){
			if(s[i]!=s[i-1]){
				flag=true;
				break;
			}
		}
		if(flag){
			if(a[k-1]==a[0]){
				cout<<a[k-1]<<s<<endl;
			}
			else{
				cout<<a[k-1]<<endl;
			}
			continue;
		}
		/*if(a[k-1][0]==a[0][0]){
			cout<<a[k-1]<<s<<endl;
			continue;
		}*/
		if(a[k-1]==a[0]){
			int idx=0;
			loop(i, 0, s.length()){
				a[idx%k]+=s[i];
				++idx;
			}
			//cout<<s<<endl;
			sort(a.begin(), a.end());
			cout<<a[k-1]<<endl;
		}
		else{
			cout<<a[k-1]<<endl;
		}
	}
	return 0;
}
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
		int n, k, min=INT_MAX, max=0;
		cin>>n>>k;
		vector<int> ans, a(n), val;
		vector<bool> m(101);
		int count=0;
		loop(i, 0, n){
			cin>>a[i];
			if(m[a[i]])
				continue;
			m[a[i]]=1;
			max=max>a[i]?max:a[i];
			min=min<a[i]?min:a[i];
			val.pb(a[i]);
			++count;
		}
		if(count>k)
			cout<<"-1\n";
		else{
			if(val.size()<k){
				loop(i, 1, min+k+1){
					if(m[i])
						continue;
					m[i]=1;
					val.pb(i);
					if(val.size()==k)
						break;
				}
			}
			sort(val.begin(), val.end());
			loop(i, 0, n){
				loop(j, 0, k){
					if(val[j]==a[i])
						ans.pb(a[i]);
					else ans.pb(val[j]);
				}
			}
			cout<<ans.size()<<endl;
			loop(i, 0, ans.size())
				cout<<ans[i]<<" ";
			cout<<endl;
		}
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)
#define pool(i, a, b) for(int i=a;i>b;i--)
#define pooll(i, a, b) for(ll i=a;i>b;i--)
#define pb push_back
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef pair<ll, ll> llll;
typedef vector<llll> vll;
typedef vector<pair<int, ii> > EdgeList; //Edgelist representation of graphs to store an edge and weights for both directions, i.e., in an undirected graph.x




int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, q;
		scanf("%d %d", &n, &q);
		string s;
		cin>>s;
		vector<int> m(26);
		loop(i, 0, n){
			++m[s[i]-'a'];
		}
		while(q--){
			ll c;
			cin>>c;
			ll ans=0;
			loop(i, 0, 26){
				ans+=m[i]>c?m[i]-c:0;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
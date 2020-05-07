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
		int n;
		scanf("%d", &n);
		vector<ll> a(n);
		loop(i, 0, n){
			cin>>a[i];
		}
		vector<bool> check(n);
		loop(i, 0, n){
			check[(((i+a[i])%n)+n)%n]=1;
		}
		bool flag=false;
		loop(i, 0, n){
			if(!check[i]){
				flag=true;
				break;
			}
		}
		if(flag)
			cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
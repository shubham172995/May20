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
	int n, m;
	scanf("%d %d", &n, &m);
	vector<string> a(n);
	loop(i, 0, n)
		cin>>a[i];
	int ans=0;
	loop(i, 0, n){
		loop(j, 0, m){
			if(a[i][j]=='W'){
				if(i>0){
					if(a[i-1][j]=='P'){
						++ans;
						continue;
					}
				}
				if(i<n-1&&a[i+1][j]=='P'){
					++ans;
					continue;
				}
				if(j>0&&a[i][j-1]=='P'){
					++ans;
					continue;
				}
				if(j<m-1&&a[i][j+1]=='P'){
					++ans;
					continue;
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
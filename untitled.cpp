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


ll gcd(ll a, ll b){
	if(b==0)
		return a;
	else return gcd(b, a%b);
}

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
		if(n==1){
			cout<<"YES\n";
		}
		vector<ll> forgcd;
		loop(i, 0, n){
			if((i+(a[i]))>1)
				forgcd.pb((i+(a[i])));
			else if((i+(a[i]))==1)
				forgcd.pb(n+1);
			else if((i+(a[i]))==0&&i==0)
				forgcd.pb(n);
			else if((i+(a[i]))==0&&i!=0){
				forgcd.pb(n);
			}
			else if((i+(a[i]))<0){
				if((i+(a[i])+n)>=0){
					if((i+(a[i])+n)==0){
						forgcd.pb(n);
					}
					else if((i+(a[i])+n)==1){
						forgcd.pb(n+1);
					}
					else{
						forgcd.pb(i+a[i]+n);
					}
				}
				else forgcd.pb(n-(abs((i+(a[i])+n)))%n);
			}
		}
		/*cout<<"Hey ";
		loop(i, 0, forgcd.size()){
			cout<<forgcd[i]<<" ";
		}
		cout<<endl;*/
		ll temp=gcd(forgcd[0], forgcd[1]);
		loop(i, 2, forgcd.size()){
			temp=gcd(forgcd[i], temp);
			if(temp==1)
				break;
		}
		if(temp==1)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
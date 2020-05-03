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
typedef pair<ll, ll> llll;
typedef vector<llll> vll;
typedef vector<pair<int, ii> > EdgeList; //Edgelist representation of graphs to store an edge and weights for both directions, i.e., in an undirected graph.x

struct comp{
	bool operator()(const int& a, const int& b){
		return a>b;
	}
};

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	loop(i, 0, n){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	swap(a[0], a[n-1]);
	/*loop(i, 0, n)
		cout<<a[i]<<" ";*/

	//THIS COMMENTED APPROACH WILL GIVE THE SAME SUM, I.E., THE MAX SUM BUT THE SEQUENCE IS NOT LEXICOGRAPHICALLY SMALLEST

	/*while(i<j){
		if(abs(a[i])==abs(a[j])){
			swap(a[i], a[j]);
			++i;
			--j;
		}
		else if(abs(a[i])>abs(a[j]))
			++i;
		else --j;
	}*/
	loop(i, 0, n){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
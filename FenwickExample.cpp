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

vi ft, f, cf;
int n, mx;

int LSOne(int a){
	return (a&(-a));
}

int rsq(int a){
	int sum=0;
	for(; a; a-=LSOne(a))
		sum+=ft[a];
	return sum;
}

int rsq(int a, int b){
	return rsq(b)-(a==1?0:rsq(a-1));
}

void adjust(int k, int v){
	for(; k<n; k+=LSOne(k)){
		ft[k]+=v;
		mx=mx>ft[k]?mx:ft[k];
	}
}

int smallestIndex(int key){
	int low=0, up=n-1, mid=0;
	while(low<up){
		mid=low+up;
		mid>>=1;
		if(cf[mid]==key)
			return mid;
		else if(cf[mid]>key)
			up=mid-1;
		else{
			low=mid+1;
		}
	}
	return mid;
}

int main(){
	cin>>n;//Indices
	++n;
	int m;//Number of cases
	cin>>m;
	ft.resize(n);
	f.resize(m);
	cf.resize(n);
	loop(i, 0, m){
		cin>>f[i];
	}
	loop(i, 0, m){
		adjust(f[i], 1);
	}
	loop(i, 1, n){
		cf[i]=rsq(1, i);
	}
	int key;
	cin>>key;
	cout<<smallestIndex(key)<<endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)
#define pool(i, a, b) for(int i=a;i>b;i--)
#define pooll(i, a, b) for(ll i=a;i>b;i--)
#define pb push_back

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int min=INT_MAX, max=0;
		int n;
		scanf("%d", &n);
		vector<int> a(n);
		loop(i, 0, n){
			cin>>a[i];
		}
		loop(i, 0, n){
			int temp=1;
			int j=i-1;
			while(j>=0){
				if(a[j+1]-a[j]>2)
					break;
				++temp;
				--j;
			}
			j=i+1;
			while(j<n){
				if(a[j]-a[j-1]>2)
					break;
				++temp;
				++j;
			}
			min=min<temp?min:temp;
			max=max>temp?max:temp;
		}
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}
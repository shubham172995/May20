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
	cin>>t;
	vector<ull> pow(31);
	pow[0]=1;
	loop(i, 1, 31){
		pow[i]=2*pow[i-1];
	}
	//cout<<pow[30]<<endl;
	while(t--){
		int n;
		cin>>n;
		int temp=n/2;
		ull sum1=0, sum2=0;
		loop(i, 1, temp){
			sum1+=pow[i];
		}
		sum1+=pow[n];
		loop(i, temp, n){
			sum2+=pow[i];
		}
		cout<<sum1-sum2<<endl;
	}
	return 0;
}
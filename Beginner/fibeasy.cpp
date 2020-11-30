#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);			
	cin.tie(NULL);							
	cout.tie(0);
    ll fiboNum[60], N, powers[60];
    fiboNum[0] = 0;
    fiboNum[1] = 1;
    powers[0] = 1;
    
    //Calculating the fibonaci series upto 60
    for(int i=2;i<60;i++) fiboNum[i] = (fiboNum[i-2] + fiboNum[i-1])%10;
    cout<<fiboNum[60]<<endl;
    //Calculating the power of 2 upto 60
    for(int i=1;i<60;i++) powers[i] = powers[i-1]*2;
    
    int T,i;
	cin>>T;
	while(T--){
	    cin>>N;
	    for(i=59;i>=0;i--) if(powers[i]<=N) break;
	    cout<<fiboNum[(powers[i]-1)%60]<<endl;
	}
	return 0;
}

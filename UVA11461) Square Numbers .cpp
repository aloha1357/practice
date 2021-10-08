#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int a,b;
	while(cin>>a>>b&&a!=0&&b!=0){
	int ans=0;
	for(long long int i=1;i<=b;i++){
	
	if(i*i>b)break;
	if(i*i>=a) ans+=1;
	}
	cout<<ans<<endl;
	}
	return 0;
}
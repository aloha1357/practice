#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int j=1;j<=n;j++){
	int a=0,b=0;
	cin>>a>>b;
	if(a%2==0)a+=1;
	if(b%2==0)b-=1;
	for(int i=a+2;i<=b;i+=2){
		a+=i;
		//cout<<i<<endl;
	}
		
		
	cout<<"Case "<<j<<": "<<a<<endl;
	
	}
	return 0;
}
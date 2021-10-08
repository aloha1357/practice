#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n=0;
	int array[31];
	array[30]=1;

	for(int i=29;i>0;i--)
		array[i]=array[i+1]*2;
	
	while(cin>>n&&n!=0){
	int	par=0,flag=0;
	string bits;
	for(int i=0;i<31;i++){
	//cout<<array[i]<<endl;
	if(n>=array[i]){
	n-=array[i];
	bits+="1";
	par+=1;
	flag=1;
	}
	else if(flag){
		bits+="0";
	}
		
	}
	cout<<"The parity of "<<bits<<" is "<<par<<" (mod 2)."<<endl;
	}
	
	return 0;
}
#include <iostream>

using namespace std;

int bits(int *a,int m){
int ans=0;
for(int i=0;i<19;i++){

if(m>=a[i]){
ans+=1;
m-=a[i];
//cout<<1;
}
//cout<<0;
}
//cout<<endl;
return ans;
};

int main(){
int n;
cin>>n;

int array[19],
harray[4]={1000,100,10,1},
hex[4]={4096,256,16,1};
	
array[18]=1;
	
for(int i=17;i>=0;i--)
	array[i]=array[i+1]*2;
//for(int i=13;i>=0;i--)
	//cout<<array[i]<<endl;

while(n--){
int dec;
cin>>dec;
int hexs=0;

int b1= bits(array,dec);

for(int i=0;i< 4;i++){
hexs+=(dec/harray[i])*hex[i];
//cout<<(dec/harray[i])<<endl;
dec=dec%harray[i];
//cout<<dec<<endl;
}


int b2=bits(array,hexs);

cout<<b1<<" "<<b2<<endl;
}

return 0;
}
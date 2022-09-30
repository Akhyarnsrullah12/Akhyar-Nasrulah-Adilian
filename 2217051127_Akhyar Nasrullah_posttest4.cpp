#include <iostream>
#include <math.h>
using namespace std;

int variance(int a, int b){
	if(a<b){
		return b-a;
	}else if(b<a){
		return a-b;
	}else{
		return 0;
	}
}

int main(){
	int n, mean,hasil;
	int data[1000];
	
	cout<<"Masukan jumlah data n : ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"masukan data ke-"<<i+1<<" : ";
		cin>>data[i];
	}
	for(int i=0; i<n; i++){
		mean += data[i];
	}
	mean = mean/n;
	cout<<"mean : "<<mean<<endl;
	
	for(int i=0; i<n; i++){
		hasil += (pow(variance(data[i],mean),2));
	}
	hasil = hasil/n;
	cout<<"variance : "<<hasil<<endl;
	
	cout<<"std.dev : "<<sqrt(hasil)<<endl;
	return 0;
}

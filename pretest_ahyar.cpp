#include <iostream>
#include <string>

using namespace std;

int main(){
	string nama;
	string npm;
	string ttl;
	string jurusan;
	
	cout<<"Masukan data berikut :"<<endl;
	cout<<"Nama :";
	getline(cin,nama);
	
	cout<<"Npm :";
	getline(cin,npm);
	
	cout<<"TTL :";
	getline(cin,ttl);
	
	cout<<"Jurusan :";
	getline(cin,jurusan);
	
	cout<<endl;
	cout<<"DATA MAHASISIWA"<<endl;
	cout<<".........................."<<endl;
	
	cout<<"nama :"<<nama<<endl;
	cout<<"npm :"<<npm<<endl;
	cout<<"ttl :"<<ttl<<endl;
	cout<<"jurusan :"<<jurusan<<endl;
}

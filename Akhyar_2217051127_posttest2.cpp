#include <iostream>
using namespace std;

int main()
	{
	float hargabarang, hargadiskon, jumlahdiskon;
	cout<<"Masukan harga barang          : Rp. ";
	cin>>hargabarang;
	
	hargadiskon=hargabarang*10/100;
	jumlahdiskon=hargabarang-hargadiskon;
	
	cout<<"Diskon yg didapatkan          : Rp. " <<hargadiskon<<endl;
	cout<<"Harga Bersih                  : Rp. " <<jumlahdiskon<<endl;
}

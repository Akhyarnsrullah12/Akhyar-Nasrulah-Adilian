#POINTER

Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Dalam bahasa pemrograman C++, pointer digunakan untuk mengakses dan memanipulasi nilai variabel secara langsung melalui alamat memori.

Untuk mendeklarasikan sebuah pointer, digunakan tanda asterisk (*) sebelum nama variabel. Misalnya:

arduino
Copy code
int *ptr;
Deklarasi ini menunjukkan bahwa ptr adalah sebuah pointer yang menunjuk pada variabel bertipe int.

Untuk mengisi nilai pointer, digunakan operator ampersand (&) untuk mendapatkan alamat memori variabel yang ingin ditunjuk. Misalnya:

arduino
Copy code
int x = 10;
int *ptr = &x;
Deklarasi ini mengisi nilai pointer ptr dengan alamat memori variabel x.

Untuk mengakses nilai yang ditunjuk oleh sebuah pointer, digunakan operator dereferencing (*) untuk mengakses nilai variabel yang ditunjuk oleh pointer tersebut. Misalnya:

c
Copy code
int x = 10;
int *ptr = &x;
cout << *ptr << endl; // Output: 10
Dalam hal manipulasi nilai variabel melalui pointer, perubahan nilai pada variabel melalui pointer akan mempengaruhi nilai variabel aslinya. Misalnya:

c
Copy code
int x = 10;
int *ptr = &x;
*ptr = 20;
cout << x << endl; // Output: 20
Selain itu, pointer juga dapat digunakan untuk memanipulasi array dan penggunaannya dapat dioptimalkan dalam beberapa kasus seperti dalam pengoperasian memori dinamis dan pengaksesan objek dalam pemrograman berorientasi objek.

Namun, penggunaan pointer juga memiliki risiko yang dapat menyebabkan kesalahan saat mengoperasikan memori, seperti segmenasi atau pointer yang mengarah ke memori yang tidak valid. Oleh karena itu, perlu diingat untuk selalu menggunakan pointer dengan hati-hati dan berhati-hati saat mengoperasikan memori.


#CSTRING


Beberapa fungsi yang terdapat dalam kelas cstring antara lain:

strlen(): Fungsi ini digunakan untuk menghitung jumlah karakter dalam sebuah string.

strcpy(): Fungsi ini digunakan untuk menyalin sebuah string ke dalam variabel lain.

strcat(): Fungsi ini digunakan untuk menggabungkan dua buah string menjadi satu.

strcmp(): Fungsi ini digunakan untuk membandingkan dua buah string.

strchr(): Fungsi ini digunakan untuk mencari karakter tertentu dalam sebuah string.

strstr(): Fungsi ini digunakan untuk mencari sebuah substring dalam sebuah string.

Penggunaan kelas cstring dapat memudahkan dalam manipulasi string dalam bahasa pemrograman C++. Namun, perlu diperhatikan penggunaannya agar tidak menyebabkan kesalahan dalam program.


contoh program cstring
Berikut adalah contoh program penggunaan beberapa fungsi dalam kelas cstring:

c++
Copy code
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char str1[] = "Hello";
  char str2[] = "World";

  // Menghitung panjang string
  cout << "Panjang str1: " << strlen(str1) << endl;

  // Menyalin string
  strcpy(str1, str2);
  cout << "str1 setelah disalin: " << str1 << endl;

  // Menggabungkan string
  strcat(str1, " ");
  strcat(str1, str2);
  cout << "str1 setelah digabungkan: " << str1 << endl;

  // Membandingkan string
  if (strcmp(str1, str2) == 0) {
    cout << "str1 sama dengan str2" << endl;
  } else {
    cout << "str1 tidak sama dengan str2" << endl;
  }

  // Mencari karakter dalam string
  char* pos = strchr(str1, 'o');
  if (pos != NULL) {
    cout << "Karakter 'o' ditemukan pada posisi: " << pos - str1 << endl;
  } else {
    cout << "Karakter 'o' tidak ditemukan" << endl;
  }

  // Mencari substring dalam string
  char* substr = strstr(str1, "Wo");
  if (substr != NULL) {
    cout << "Substring 'Wo' ditemukan pada posisi: " << substr - str1 << endl;
  } else {
    cout << "Substring 'Wo' tidak ditemukan" << endl;
  }

  return 0;
}
Output dari program di atas akan seperti ini:

yaml
Copy code
Panjang str1: 5
str1 setelah disalin: World
str1 setelah digabungkan: World World
str1 tidak sama dengan str2
Karakter 'o' ditemukan pada posisi: 1
Substring 'Wo' ditemukan pada posisi: 0
Program di atas menggunakan beberapa fungsi dalam kelas cstring, seperti strlen(), strcpy(), strcat(), strcmp(), strchr(), dan strstr(). Dalam program di atas, string pertama diubah menjadi string kedua menggunakan fungsi strcpy(), kemudian kedua string digabungkan menggunakan fungsi strcat(). Selanjutnya, digunakan fungsi strcmp() untuk membandingkan kedua string tersebut. Fungsi strchr() digunakan untuk mencari karakter 'o' dalam string, dan fungsi strstr() digunakan untuk mencari substring "Wo" dalam string.
  
#CLASS
  
  
  Class dalam bahasa pemrograman C++ adalah sebuah struktur yang menggabungkan data dan fungsi-fungsi yang berkaitan dengan data tersebut menjadi sebuah entitas tunggal yang disebut objek. Berikut ini adalah beberapa poin penting tentang class di C++:

Encapsulation: Class menyediakan encapsulation atau pengkapsulan, yaitu kemampuan untuk menyembunyikan detail implementasi dari luar kelas dan hanya mengekspos antarmuka publik yang didefinisikan.

Inheritance: C++ mendukung inheritance atau pewarisan, yaitu kemampuan untuk membuat kelas baru dengan mewarisi data dan fungsi dari kelas yang sudah ada.

Polymorphism: C++ juga mendukung polymorphism atau banyak bentuk, yaitu kemampuan untuk membuat fungsi-fungsi dengan nama yang sama namun dengan perilaku yang berbeda tergantung pada jenis objek yang diproses.

Constructor dan Destructor: C++ memiliki constructor dan destructor yang memungkinkan Anda untuk menginisialisasi dan membersihkan objek secara otomatis.

Access Specifier: C++ memiliki access specifier yang memungkinkan Anda untuk menentukan tingkat akses ke data dan fungsi dalam kelas, seperti public, private, dan protected.

Operator Overloading: C++ mendukung operator overloading, yaitu kemampuan untuk mendefinisikan perilaku operator tertentu untuk tipe data yang didefinisikan pengguna.

Dengan menggunakan class, Anda dapat membuat program yang lebih modular dan mudah dipelihara, serta memungkinkan Anda untuk membuat objek-objek yang lebih kompleks dengan data dan fungsi-fungsi yang terkait.


contoh programnya
Berikut ini adalah contoh program sederhana yang menggunakan class di C++:

c++
Copy code
#include <iostream>
using namespace std;

// definisi class
class Rectangle {
    private:
        int length;
        int width;
    public:
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }
        int area() {
            return length * width;
        }
};

// fungsi utama
int main() {
    // membuat objek dari class Rectangle
    Rectangle r1(5, 10);

    // memanggil fungsi area()
    cout << "Luas persegi panjang: " << r1.area() << endl;

    return 0;
}
Program di atas mendefinisikan sebuah class Rectangle yang memiliki dua data member yaitu length dan width. Kemudian di dalam constructor, nilai length dan width diinisialisasi dengan parameter l dan w. Selanjutnya terdapat sebuah fungsi area() yang menghitung luas persegi panjang berdasarkan nilai length dan width.

Di dalam fungsi main(), objek r1 dibuat dengan menggunakan constructor dari class Rectangle dengan parameter 5 dan 10. Kemudian, fungsi area() dipanggil pada objek r1 dan hasilnya dicetak di layar.

Output yang dihasilkan program di atas adalah sebagai berikut:

yaml
Copy code
Luas persegi panjang: 50
  
  
#FUNGSI
  
  Fungsi di C++ adalah sebuah blok kode yang dapat digunakan kembali dan memungkinkan kita untuk memecah program menjadi bagian yang lebih kecil dan lebih mudah dikelola. Sebuah fungsi dapat menerima satu atau lebih parameter dan mengembalikan nilai yang dapat digunakan oleh bagian lain dari program.

Berikut adalah beberapa hal penting yang perlu diketahui tentang fungsi di C++:

Mendefinisikan fungsi:
Fungsi didefinisikan dengan menentukan tipe data pengembalian, nama fungsi, dan parameter yang dibutuhkan (jika ada). Isi fungsi kemudian ditempatkan dalam blok fungsi yang diapit dengan tanda kurung kurawal {}.

Mempanggil fungsi:
Untuk menggunakan fungsi, kita perlu memanggilnya dengan menggunakan nama fungsi dan memberikan argumen jika diperlukan. Nilai yang dikembalikan oleh fungsi dapat digunakan dalam program.

Tipe data pengembalian:
Fungsi dapat mengembalikan nilai dalam bentuk tipe data apapun, seperti integer, float, char, bool, dan lain-lain. Jika fungsi tidak mengembalikan nilai apapun, maka tipe data pengembaliannya adalah void.

Parameter:
Fungsi dapat menerima satu atau lebih parameter, yang kemudian digunakan dalam blok fungsi. Parameter dapat memiliki tipe data apapun, termasuk tipe data yang ditentukan oleh pengguna.

Fungsi overload:
Dalam C++, kita dapat membuat beberapa fungsi dengan nama yang sama namun memiliki parameter yang berbeda, yang dikenal sebagai fungsi overload. Ini memungkinkan kita untuk membuat fungsi yang memiliki perilaku yang sama namun dapat menerima jenis argumen yang berbeda.

Rekursi:
Fungsi dapat memanggil dirinya sendiri, yang dikenal sebagai rekursi. Ini dapat sangat berguna untuk menyelesaikan masalah yang dapat dipisahkan menjadi submasalah yang lebih kecil.

Fungsi sangat berguna dalam pemrograman karena memungkinkan kita untuk memecah program menjadi bagian yang lebih kecil dan lebih mudah dikelola. Mereka juga memungkinkan kita untuk menghindari penulisan kode yang berulang-ulang dan membuat program menjadi lebih modular dan mudah dibaca.




akhyarnasrullah12@gmail.com
contoh programnya
Berikut adalah contoh program sederhana yang menggunakan fungsi untuk menjumlahkan dua bilangan dan mengembalikan hasilnya:

c
Copy code
#include <iostream>
using namespace std;

// Deklarasi fungsi
int tambah(int a, int b);

int main() {
    int x = 10, y = 5;
    int hasil;

    // Panggil fungsi tambah()
    hasil = tambah(x, y);

    // Tampilkan hasil
    cout << "Hasil tambah " << x << " dan " << y << " adalah " << hasil << endl;

    return 0;
}

// Definisi fungsi
int tambah(int a, int b) {
    int hasil;
    hasil = a + b;
    return hasil;
}
Output dari program ini akan menampilkan "Hasil tambah 10 dan 5 adalah 15" karena fungsi tambah() telah mengembalikan hasil penjumlahan dari dua bilangan yang diberikan
  
  
#OOP
  
OOP (Object-Oriented Programming) pada C++ adalah paradigma pemrograman yang fokus pada konsep objek. Objek dalam OOP adalah instance dari sebuah class yang memiliki data dan metode yang dapat melakukan operasi pada data tersebut.

Dalam C++, class merupakan blueprint atau cetak biru dari objek. Class dapat memiliki atribut (data) dan method (fungsi) yang didefinisikan di dalamnya. Atribut adalah variabel yang menyimpan data objek, sedangkan method adalah fungsi yang dapat melakukan operasi pada data objek.

Beberapa konsep utama dalam OOP pada C++ antara lain:

Encapsulation: menggabungkan data dan method yang terkait dalam satu unit, sehingga hanya dapat diakses melalui interface yang ditentukan.
Inheritance: memungkinkan class untuk mewarisi sifat-sifat dan perilaku dari class yang lain.
Polymorphism: memungkinkan class untuk memiliki banyak bentuk atau implementasi yang berbeda dari suatu method atau fungsi.
Dalam OOP pada C++, terdapat beberapa access modifier yang digunakan untuk mengatur akses ke data dan method dalam sebuah class, yaitu:

Public: dapat diakses dari mana saja baik di dalam maupun di luar class.
Private: hanya dapat diakses di dalam class itu sendiri.
Protected: dapat diakses di dalam class itu sendiri dan di dalam class turunannya.
Dalam OOP pada C++, terdapat beberapa jenis constructor dan destructor, yaitu:

Default constructor: merupakan constructor yang tidak memiliki parameter.
Parameterized constructor: merupakan constructor yang memiliki satu atau beberapa parameter.
Copy constructor: merupakan constructor yang digunakan untuk menginisialisasi objek dengan objek yang sudah ada.
Destructor: merupakan method yang dipanggil ketika objek dihapus dari memori.
Untuk mengimplementasikan OOP pada C++ dapat dilakukan dengan beberapa langkah, yaitu:

Mendefinisikan class dan membernya.
Menginstansiasi objek dari class yang telah dibuat.
Mengakses dan memanipulasi data dan method pada objek.



akhyarnasrullah12@gmail.com
contoh programnya
Berikut adalah contoh program sederhana untuk mengimplementasikan OOP pada C++:

cpp
Copy code
#include <iostream>
using namespace std;

// definisi class
class Mahasiswa {
  private:
    string nama;
    int usia;
    
  public:
    Mahasiswa(string n, int u) {
      nama = n;
      usia = u;
    }
    
    void printData() {
      cout << "Nama: " << nama << endl;
      cout << "Usia: " << usia << endl;
    }
};

int main() {
  // membuat objek dari class Mahasiswa
  Mahasiswa mhs1("John Doe", 20);
  
  // mengakses method pada objek
  mhs1.printData();
  
  return 0;
}
Program di atas memiliki satu class yaitu Mahasiswa, dengan dua atribut yaitu nama dan usia, serta satu method yaitu printData untuk mencetak data objek pada layar. Pada fungsi main, objek mhs1 dibuat dengan memanggil constructor Mahasiswa dengan dua parameter. Kemudian method printData pada objek mhs1 dipanggil untuk mencetak data objek tersebut pada layar.

Output dari program di atas adalah sebagai berikut:

Nama: John Doe
Usia: 20

  
#include <iostream>
using namespace std;
 
class mahasiswa{
public:
    int nim=1; //inisialisasi
    string nama="default name"; //inisialisasi
    float nilai=0; //inisialsiasi
 
    void setterNilai (float aNilai){
        nilai=aNilai;
    }
    void printData(){
        cout<<"NIM   \t= "<<nim<<endl;
        cout<<"Nama  \t= "<<nama<<endl;
        cout<<"Nilai \t= "<<nilai<<endl;
    }
};
 
int main() {
    mahasiswa anton,budi;
    cout<<"==Anton=="<<endl;
    anton.printData();
    cout<<"==Budi==="<<endl;
    budi.printData();
 
    return 0;
}

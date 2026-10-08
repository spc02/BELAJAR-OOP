#include<iostream>
using namespace std;
class pekerja{
	private:
		int gaji;
	public:
		string nama;
	 
};
int main() {
   
    string pekerja1_nama = "Budi";
    int    pekerja1_gaji = 0; 

    cout << "Nama Pekerja: " << pekerja1_nama << endl
    cout << "Gaji Pekerja: " << pekerja1_gaji << endl;


    pekerja1_gaji = -50000; 
    cout << "Gaji Diubah (tidak valid): " << pekerja1_gaji << endl;

    return 0;
}
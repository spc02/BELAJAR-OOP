#include<iostream>
using namespace std;
class pekerja{
    private:
        int gaji = 50;
    public:
        string nama;
        void cetakNama(){
            cout<<"nama : "<<nama<<endl;
        }
    void cetakGaji(){
    	cout<<"gaji :"<<gaji<<endl;
	}
};
<<<<<<< HEAD

kalau misalkan begini bisa ngak
=======
>>>>>>> cef668b316bd8e599e0a90b3aae1d1e393097d37
int main(){
	pekerja pekerja1;
    pekerja1.nama = "lutfi";
    pekerja1.cetakNama();
<<<<<<< HEAD
    pekerja1.gaji();
=======
    pekerja1.cetakGaji();
>>>>>>> cef668b316bd8e599e0a90b3aae1d1e393097d37
}
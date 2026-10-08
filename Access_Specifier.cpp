#include<iostream>
using namespace std;
class pekerja{
    private:
        int gaji;
    public:
        string nama;
        void cetakNama(){
            cout<<nama<<endl;
        }
};
int main(){
	pekerja pekerja1;
    pekerja1.nama = "lutfi";
    pekerja1.cetakNama();
}
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
int main(){
	pekerja pekerja1;
    pekerja1.nama = "lutfi";
    pekerja1.cetakNama();
    pekerja1.cetakGaji();
}
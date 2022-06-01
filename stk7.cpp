#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

class Toko {
	public : 
	void input_barang();
	void sorting_barang();
	void searching_barang();
	void proses();
	
	private :
	typedef struct{
	int id;
	char nama[20];
	int stock;
}
   brg;

   brg barang[5];

   brg temp;

   int n,i,b, cari, ada;
};

void Toko::input_barang() {
cout<<"\t\t"<<"=================================================================================="<<endl;
cout<<"\t\t"<<"|                   PROGRAM SORTING DAN SEARCHING TOKO DEPI                      |"<<endl;
cout<<"\t\t"<<"=================================================================================="<<endl<<endl;
cout<<"Masukkan banyak data = ";cin>>n; 

for(i=0;i<n;i++){
    cout<<endl;
    cout<<"Data ke-"<<(i+1)<<":"<<endl;
    cout<<"Input Id Barang : ";cin>>barang[i].id;
    cout<<"Input Nama Barang: ";cin>>gets(barang[i].nama);
    cout<<"Input Stock Barang : ";cin>>barang[i].stock;
    cout<<endl;
    }

    cout<<"Data Barang Anda"<<endl;
    cout<<"==============================================="<<endl;
    cout<<"|   Id Barang  |  Nama Barang  | Stock Barang |"<<endl;
    cout<<"==============================================="<<endl;
	for(i=0;i<n;i++){
    cout<<"|       "<<barang[i].id<<"\t\t"<<barang[i].nama<<"\t\t "<<barang[i].stock<<"\t|"<<endl;
    }
	cout<<endl;
    cout<<"================================================"<<endl;
}

void Toko::proses(){
	for(i=0;i<n;i++){
	    for(b=0;b<n-1;b++){
            if(barang[b].id < barang[b+1].id){
                temp.id=barang[b].id;
                barang[b].id=barang[b+1].id;
                barang[b+1].id=temp.id;
                
				strcpy(temp.nama, barang[b].nama);
                strcpy(barang[b].nama, barang[b+1].nama);
            	strcpy(barang[b+1].nama,temp.nama);

            	temp.stock=barang[b].stock;
                barang[b].stock=barang[b+1].stock;
                barang[b+1].stock=temp.stock;
                }
        }
        cout<<endl;
    }
}

void Toko::sorting_barang() {
	cout<<"\t\t\t"<<"Mengurutkan data secara descending"<<endl;
    cout<<"\t\t\t"<<"================================================"<<endl;
    cout<<"\t\t\t"<<"|  Id Barang  |  Nama Barang  |  Stock Barang  |"<<endl;
    cout<<"\t\t\t"<<"================================================"<<endl;
	for(b=0;b<n;b++){
        cout<<"\t\t\t"<<"|      "<<barang[b].id<<"\t\t"<<barang[b].nama<<"\t\t"<<barang[b].stock<<"\t|"<<endl;
    }
    cout<<"\t\t\t"<<"================================================"<<endl;

    cout<<endl;
}

 void Toko::searching_barang() {
 	cout<<"\t\t\t"<<"Masukan Id Barang Untuk Mencari : ";cin>>cari;
    ada = 0;    
	for(b=0;b<n;b++){
            if(barang[b].id==cari){
                    ada=1;
                    cout<<"\t\t\t"<<"================================================"<<endl;
                    cout<<"\t\t\t"<<"|      Nama Barang     |       Stock Barang    |"<<endl;
                    cout<<"\t\t\t"<<"================================================"<<endl;
                    cout<<"\t\t\t"<<"|         "<<barang[b].nama<<"\t\t        "<<barang[b].stock<<"\t|"<<endl;
            }
    }
    cout<<"\t\t\t"<<"================================================"<<endl;
    if (ada == 0){
        cout<<"Data Tidak ditemukan"<<endl;
    
 }
}

int main() {
	Toko out;	
	out.input_barang();
	out.proses();
	out.searching_barang();
	out.sorting_barang();
	
	return 0;
}

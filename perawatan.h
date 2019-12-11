#include <iostream>
using namespace std;

typedef struct{
	int harga;
}perawatan;

void TotalPerawatan(perawatan spa){
	int total=0;
	for(int i=0;i<3;i++){
        cout<<"Masukkan harga perawatan "<<i+1<<" : ";
   		cin>>spa.harga;
   		total=spa.harga+total;
   	}
	cout<<"Harga yang harus dibayar setelah perawatan di Salon Bahagia = "<<total;
	cout<<endl<<endl;
}

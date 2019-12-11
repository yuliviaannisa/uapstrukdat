#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include "hitung.h"
using namespace std;
 
main(){
	queue doc;
    int pil,no;
    perawatan spa1;
    while(1){
    	cout<<"\n \n========== SALON CETAR ==========\n";
        cout<<"1) Masukkan nomor member"<<endl; 
		cout<<"2) Panggil nomor member"<<endl; 
		cout<<"3) Tampilkan antrian"<<endl; 
		cout<<"4) Keluar\n"<<endl;
		cout<<"Masukkan pilihan : ";
        cin>>pil;
        switch(pil){
            case 1: cout <<"Masukkan Nomor : ";
                    cin>>no;
                    doc.enqueue(no);
                    cout<<endl;
                    break;
                        
            case 2: doc.dequeue();
					          cout<<endl;  
					          break;
					
            case 3: doc.display();
					          cout<<endl;
					          break;
					
            case 4: cout<<"=========== TERIMA KASIH ================";
					exit(0);
        }
        if(pil==2){
			TotalPerawatan(spa1);
		}
    }
	return (0);
}

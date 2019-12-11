#include <iostream>
#include "perawatan.h"
using namespace std;

class queue{
    int queue1[5];
    int belakang,depan,total,harga;
    
	public:
        queue(){
        	belakang=-1;
            depan=-1;
        }
        
	void enqueue(int x){
        if(belakang>5){
            cout<<"Salon sudah Penuh!";
            depan=belakang=-1;
            return;
        }
		queue1[++belakang]=x;
        cout <<x<<" Dimasukkan ke dalam daftar tunggu"<<endl;
        }

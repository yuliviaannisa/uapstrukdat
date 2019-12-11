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
void dequeue(){
        if(depan==belakang){
            cout <<"Salon Kosong";
			return;
		}
    	cout <<"Panggil nomor member " <<queue1[++depan]<<endl;
    }
                
    void display(){
        if(belakang==depan){
            cout <<" Salon Kosong";
            return;
        }
        for(int i=depan+1;i<=belakang;i++){
            cout <<queue1[i]<<" ";
        }
    }
};

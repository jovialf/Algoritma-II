#include <iostream>
using namespace std;

int main(){
	int jumlahAngka;
	cin >> jumlahAngka;
	int angka[jumlahAngka];
	
	for(int a=0; a<jumlahAngka; a++){
		cin >> angka[a];
	}
	
	cout << endl;
	int jumlahCari;
	cin >> jumlahCari;
	int cari[jumlahCari];
	
	for(int b=0; b<jumlahCari; b++){
		cin >> cari[b];
	}
	
	int hasil[jumlahCari];
	int index[jumlahCari];
	
	for(int c=0; c<jumlahCari; c++){
		for(int d=0; d<jumlahAngka; d++){
			if(cari[c] == angka[d]){
				hasil[c] = 1;
				index[c] = d;
			}
		}
	}
	
	cout << endl;
	
	for(int e=0; e<jumlahCari; e++){
		if(hasil[e] == 1){
			cout << "nilai ditemukan di index ke " << index[e] << endl;
		}
		else{
			cout << "tidak ditemukan" << endl;
		}
	}
	
}

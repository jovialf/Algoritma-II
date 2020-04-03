#include <iostream>

using namespace std;

int main(){
	
	int jmlMhs;
	
	cin >> jmlMhs;
	
	int nim[jmlMhs];
	int kelas[jmlMhs];
	int nilai[jmlMhs];
	
	for(int i=0; i<jmlMhs; i++){
		cin >> nim[i];
	}
	
	for(int j=0; j<jmlMhs; j++){
		cin >> kelas[j];
	}
	
	for(int k=0; k<jmlMhs; k++){
		cin >> nilai[k];
	}
	
	int key = 0;
	int tmpKelas = kelas[0];
	int tmpNilai = 0;
	int avg;
	
	for(int a=0; a<jmlMhs; a++){
		if(tmpKelas == kelas[a]){
			key = key + 1;
			tmpNilai = tmpNilai + nilai[a];
			
			if(a == jmlMhs-1){
				avg = tmpNilai/key;
				cout << kelas[a]  << " " << key << " " << avg << endl;
			}
		}
		else{
			avg = tmpNilai/key;
			cout << kelas[a-1]  << " " << key << " " << avg << endl;
			
			tmpKelas = kelas[a];
			key = 1;
			tmpNilai = nilai[a];
			
			if(a == jmlMhs-1){
				avg = tmpNilai;
				cout << kelas[a]  << " " << key << " " << avg << endl;
			}
		}
	}
	
}

#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	
	if((N < 1) || (N > 15)){
		return 0;
	}
	else{
		int id[N], nilai[N];
		
		for(int a=0; a<N; a++){
			cin >> id[a];
			
			if((id[a] < 1) || (id[a] > 20)){
				return 0;
			}
		}
		
		for(int a=0; a<N; a++){
			cin >> nilai[a];
			
			if((nilai[a] < 1) || (nilai[a] > 100)){
				return 0;
			}
		}
		
		int key = id[0];
		int keyNilai = 0;
		int number = 0;
		int avg;
		
		for(int b=0; b<N; b++){
			
			if(key == id[b]){
				number += 1;
				
				keyNilai = keyNilai + nilai[b];
				
				if(b == N-1){
					avg = keyNilai/number;
					//cout << key << " " << number << " " << keyNilai << " " << avg <<  endl;
					cout << key << " " << avg <<  endl;
				}
			}
			else{
				avg = keyNilai/number;
				//cout << key << " " << number << " " << keyNilai << " " << avg <<  endl;
				cout << key << " " << avg <<  endl;
				
				key = id[b];
				number = 1;
				keyNilai = nilai[b];
				
				if(b == N-1){
					//cout << key << " " << number << " " << keyNilai << " " << avg <<  endl;
					avg = nilai[b];
					cout << key << " " << avg <<  endl;
				}
			}
		}
	}
	
	
}

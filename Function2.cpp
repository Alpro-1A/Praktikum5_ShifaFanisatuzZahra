#include <iostream>

using namespace std;

void prmdBintang (int s){
		char currentChar = '*';
	for (int i = 0; i <= s; i++){
		for (int j = s; j > i; j--){
			cout << " ";
		}
	for (int k = 1; k <= i; k++){
		cout << currentChar << " ";
		}

		cout << endl;
		}

}

int main(){
	cout << "$$  PROGRAM MEMBUAT PIRAMIDA BINTANG  $$"<<endl;
	cout << "----------------------------------------\n";
	int s;

	cout << "Masukkan tinggi piramida : "; cin >> s;


// Panggil Function
	prmdBintang (s);
	cout << "----------------------------------------\n";

return 0;
}


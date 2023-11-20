#include <iostream>

using namespace std;

    // Function Bilangan Ganjil
    void bilGanjil(int batas, int &jmlhGanjil){
        cout << "Bilangan Ganjil : ";
        for (int j = 1; j <= batas; ++j){
            if (j % 2 != 0) cout << j << " ";
            if (j % 2 != 0)jmlhGanjil += j;
        }   cout << endl;
    }

    //Function Bilangan Genap
    void bilGenap (int batas, int &jmlhGenap){
        cout << "Bilangan Genap : ";
        for (int k = 1; k <= batas; ++k){
                if (k % 2 == 0) cout << k << " ";
                if (k % 2 == 0) jmlhGenap += k;
        } cout << endl;
    }

   // Bilangan Prima
    void bilPrima (int batas, int &jmlhPrima){
        cout << "Bilangan Prima : ";
        for (int i = 2; i <= batas; ++i){
        int prima = 1;
        for (int j = 2; j*j <= i; j++){
            if (i*j == 0){
                prima = 0;
                break;
                }
        }
        if (prima == 1){
            cout << i << " ";
            jmlhPrima += 1;
            }
        } cout << endl;
    }
    //Funtion faktor Ganjil
    void faktorGanjil (int jmlhGanjil){
    cout << "Faktor-faktor dari Bilangan Ganjil adalah : ";
    for (int j = 1; j <= jmlhGanjil; j++){
        if (jmlhGanjil % j == 0){
            cout << j << " ";
        }
    }
    cout << endl;
}
    //Funtion faktor Genap
    void faktorGenap (int jmlhGenap){
        cout << "Faktor-faktor dari Bilangan Genap adalah : ";
        for (int k = 1; k <= jmlhGenap; k++){
            if (jmlhGenap % k == 0){
                cout << k << " ";
            }
        }
    cout << endl;
    }

    //Function faktor Prima
    void faktorPrima (int jmlhPrima){
        cout << "Faktor-faktor dari Bilangan Prima adalah : ";
        for (int i = 1; i <= jmlhPrima; i++){
            if (jmlhPrima % i == 0){
                cout << i << " ";
            }
        }
    cout << endl;
    }


int main(){
    int batas;
    int jmlhGanjil = 0, jmlhGenap = 0, jmlhPrima = 0;

    cout << "## Program Bilangan Ganjil, Genap, dan Prima ##" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Masukkan batas bilangan akhir: ";
    cin >> batas;

    //Memanggil function untuk menampilkan hasil bilangan
    bilGanjil (batas, jmlhGanjil);
    bilGenap (batas, jmlhGenap);
    bilPrima (batas, jmlhPrima);

    cout << "Jumlah Bilangan Ganjil : " << jmlhGanjil << endl;
    cout << "Jumlah Bilangan genap : " << jmlhGenap << endl;
    cout << "Jumlah Bilangan Prima : "<< jmlhPrima << endl;

    //Memanggil Function untuk menampilkan hasil faktor
    faktorGanjil (jmlhGanjil);
    faktorGenap (jmlhGenap);
    faktorPrima (jmlhPrima);

    return 0;
}


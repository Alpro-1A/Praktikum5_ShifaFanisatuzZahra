#include <iostream>

using namespace std;

 int fibonacci(int s) {
  if (s == 0 || s ==1){
    return s;
  } else {
    return (fibonacci(s-1) + fibonacci(s-2));
  }
}

int main()
{
  cout << "$$$       PROGRAM DERET FIBONACCI        $$$" << endl;
  cout << "--------------------------------------------" << endl;

  int s, m, e= 0;

    cout << "Jumlah deret fibonacci yang dibutuhkkan: "; cin >> s;
 	cout << "Hasil bilangan fibonacci: \n";
 		 for (m = 1; m <= s; m++){
    		cout << "fibonacci ke-"<< m <<": " << fibonacci(e) << endl;
   		 e++;
 		 }

  cout << endl;
  cout << "---------------------------------------------" << endl;
    return 0;
}


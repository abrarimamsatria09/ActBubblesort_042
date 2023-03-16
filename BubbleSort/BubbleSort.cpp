#include <iostream>
using namespace std;


int a[20];			//deklarasi array a dengan ukuran 20
int n;				//deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {			// method untuk input
	while (true) {		// looping
		cout << "masukan banyaknya elemen pada array : ";	//output ke layar
		cin >> n;		// input dari pengguna
		if (n <= 20)	// jika n kurang dari atau sama dengan 20
			break;		// keluar dari loop
		else {			// jika n lebih dari 20
			cout << "\narray dapat mempunyai maksimal 20 elemen. \n";	//output ke layar
		}
	}
	cout << endl;								// output baris kosong
	cout << "===================" << endl;		// output ke layar
	cout << "masukkan elemen array" << endl;	// ouput ke layar
	cout << "===================" << endl;		// output ke layar

	for (int i = 0; i < n; i++) {				// looping dengan i dimulai dari 0 hingga n-1
		cout << "data ke-" << (i + 1) << ": ";	// output ke layar
		cin >> a[i];							// input dari pengguna
	}
}

void display() {
	cout << endl;												// output baris kosong 
	cout << "==================================" << endl;		// ouput ke layar
	cout << "element array yang telah tersusun" << endl;		// output ke layar
	cout << "==================================" << endl;		// ouput ke layar
	for (int j = 0; j < n; j++) {	// looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;		// output ke layar
	}
	cout << endl;					// ouput baris belakang
}

void bubblesortarray() {					// method untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {			// looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {	// looping dengan j dimulai dari 0 hingga n-i-1
			if (a[j] > a[j + 1]) {			// jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];			// simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];			// assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;			
			}
		}
	}
}


int main() {
	// membuat objek obj dari class bubbleshort
	input();			// memanggil read() dari class bubblesort
	bubblesortarray();	// memanggil bubblesortarray() dari class bubblesort
	display();			// memanggil display() dari class bubblesort
	return 0;
}
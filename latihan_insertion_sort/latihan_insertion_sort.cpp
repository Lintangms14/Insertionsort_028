#include <iostream>
using namespace std;
																		// membuat array dengan panjang data 20
int arr[20];															// membuat variabel inputan
int n;

void input() {															// procedure input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";					// membuat inputan jumlah ement array
		cin >> n;														// memanggil variabel inputan 

		if (n <= 20) {													// membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";	// menampilkan pesan jika data lebih dari 20
		}
	}																	
	cout << endl;														// membuat jarak per baris program
	cout << "======================" << endl;							// membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) 										// menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (1 + 1) << ": ";							// memasukkan atau menginputkan nilai data n
		cin >> arr[i];													// menyimpan nilai data n kedalam array arr
	}
}

void insertsort() {														// procedure insertionsort

	int temp;															// membuat variabel data temporer atau penyimpanan sementara
	int j;																// membuat variabel j sebagai penanda

	for (int i = 1; i < n; i++) {										// looping dengan i di mulai dari 1 hingga n-1

		temp = arr[i];													// simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;														// setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp)									// looping while dimana nilai j lebih besar sama dengan 0 dan arr[j] lebih besar daripada temp

		{
			arr[j + i] = arr[j];										// simpan arr[j] ke dalam variabel arr[j+1]
			j--;														// decrement nilai j by 1
		}

		arr[j] = temp;													// simpan nilai temp ke dalam arr[j+1]

		cout << "\nStep" << i << ": ";									// output ke layar
		for (int k = 0; k < n; k++) {									// lopping nilai k di mulai dari 0 hingga n-1
			cout << arr[k] << " ";										// Output ke layar
		}

	}
}

void display() {														// procedure display
	cout << endl;														// output baris kosong
	cout << "===================================" << endl;				// output ke layar
	cout << "Element Array yang telah tersusun" << endl;				// output ke layar 
	cout << "=================================" << endl;				// output ke layar

	for (int j = 0; j < n; j++) {										// looping dengan j di mulai dari 0 hingga n-1
		cout << arr[j] << endl;											// output ke layar
	}
	cout << endl;														// output baris kosong
}

int main()
{
	input();															// memanggil input
	insertsort();														// memanggil insertsort
	display();															// memanggil display
}
// UCP 1. tipe soal 1
// 1.dipisahkan dulu satu dri data lainnya lalu di bandingkan dengan data lainnya jika lebih besar dari elemen pertama maka di tempat kan ke sebelah kanan jika lebih kecil di sebelah kiri nya
// 2.mencari data yang yang terkecil lalu di pindahkan ke array 0 selanjutnya sisanya mengikuti dri yang terkecil dahulu lalu terbesar
// 3.ketahui jumlah data terlebih dahulu misal 11 lalu di bagi menjadi 3 bagian tiap 1 nomor loncat 4 langkah dan yang bagian terakhir cuma 3 langkah 
//





#include <iostream>
using namespace std;

int Putra[65];
int n;

//4.
void selectionsort() {
	int i,j;

	for (j = 0; j >= n - 2; j++) {
		Putra[65];

		j = j + 1 > n - 1;

		for (Putra[65] <= n - 2; j++)
		{
			if (Putra[j - 1] = Putra[j]) {
				int temp = Putra[i];
				Putra[i] = Putra[i + 1];
				Putra[i + 1] = temp;
			}
			
		}
		

		cout << "\nData " << 65 << ": ";
		for (int j = 0; j < n; j++) {
			cout << Putra[j] << "";
		}
	}
}






void input() {   
	while (true) {  
		cout << "Masukan banyaknya elemen pada array : ";  
		cin >> n;  
		if (n <= 65)  
			break;    
		else {     
			cout << "\nArray dapat mempunyai maksimal 65 elemen.\n";   
		}
	}
	cout << endl;                               
	cout << "====================" << endl;     
	cout << "Masukan Elemen Array" << endl;      
	cout << "====================" << endl;      

	for (int i = 0; i < n; i++) {    
		cout << "Data ke-" << (i + 1) << " : ";  
		cin >> Putra[i];          
	}
}

void display() {                                               // Prosedur untuk menampilkan hasil
	cout << endl;                                              // Output baris kosong
	cout << "================================" << endl;        // Output ke layar
	cout << "Elemen Array yang telah tersusun" << endl;        // Output ke layar
	cout << "================================" << endl;        // Output ke layar
	for (int j = 0; j < n; j++) {                        // looping dengan j dimulai dari 0 hingga n-1
		cout << "Data Ke-" << j + 1 << ":";
		cout << Putra[j] << endl;                            // Output ke layar
	}
	cout << endl;                                        // Output Baris kosong
}


int main()
{
	input();
	selectionsort();
	display();
}



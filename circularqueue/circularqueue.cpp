#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];
public:
	Queues () {
		FRONT = -1;
		REAR = -1;
	}
	void insert() {
		int num;
		cout << "Enter a nuber:";
		cin >> num;
		cout << endl;
		//cek apakah antrian penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}
		//cek apakah antiran kosong
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			//jika REAR berada di posisi terakhir array, kembali ke awal array
			if (REAR == max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queue_array[REAR] = num;
	}
	void remove() {
		//cek apakah antrian kosong
		if (FRONT = -1) {
			cout << "Queue ubderflow\n";
			return;

		}
		cout << "\nThe element deleted from the wuque is:" << queue_array[FRONT] << "\n";
		//cek jika antrian hanya memiliki satu elemen
		if (FRONT == REAR) {
			FRONT = -1;
			FRONT = -1;
			REAR = -1;

		}
		else {
			//jika element yang dihapus berada di posisi terakhirarray, kembali ke awal
			if (FRONT == max - 1)
				FRONT = 0;
			else
				FRONT = FRONT + 1;
		}
	}
	void display() {
		int FRONT_position = FRONT;
	}
};
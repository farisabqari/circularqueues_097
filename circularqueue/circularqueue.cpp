#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];
public:
	Queues() {
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
		}
	}

};
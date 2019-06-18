#pragma once
using namespace std;

template <typename X>
void Print(X* ptr, int r) {
	for (int i = 0; i < r; i++) {
		cout << ptr[i] << ' ';
	}
	cout << "\n";
}

template <typename X>
int Search(X* ptr, int r) {
	X key;
	cout << "\nПоиск элемента:" << endl;
	cout << ">> ";
	cin >> key;
	int* ind = new int[r];
	int ex = 0;
	for (int i = 0; i < r; ++i) {
		if (ptr[i] == key) {
			ind[ex++] = i;
		}
	}
	cout << "\nРезультат:" << endl;
	if (ex != 0) { 
		for (int i = 0; i < ex; ++i) {
			cout << "Ключ [" << key << "] находится в ячейке [" << ind[i] << "]." << endl;
		}
	}
	else {
		cout << "Ключ [" << key << "] не был найден";
	}
	return 0;
}
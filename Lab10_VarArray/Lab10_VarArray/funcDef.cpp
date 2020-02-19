#include "Header.h"

void addNumber(int *& arrayPtr, int number, int &size) {
	int *tmp;
	tmp = new int[size + 1];
	for (int i = 0; i < size; i++) {
		tmp[i] = arrayPtr[i];
	}
	tmp[size] = number;
	delete[] arrayPtr;
	arrayPtr = tmp;
	++size;
}

void removeNumber(int *& arrayPtr, int number, int &size) {
	bool match = false;
	int num;
	for (int i = 0; i < size; i++) {
		if (arrayPtr[i] == number)
		{
			match = true;
			num = i;
			size--;
		}
	}

	if (match == true) {
		int *tmparray = new int[size];
		for (int i = 0; i<size + 1; i++) {
			if (i != num)
			{
				if (i>num)
					tmparray[i - 1] = arrayPtr[i];
				else
					tmparray[i] = arrayPtr[i];
			}

		}
		delete[]arrayPtr;
		arrayPtr = tmparray;
	}
	else
		cout << "No matches for: " << number << endl;

}
#include "Header.h"

void LineSearch(float *arr1, int size1, float* arr2, int size2, float* arr3, int size3, float* arr4, int size4, float* arr5, int size5, float number ) {
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	for (int i = 0; i < size1; i++)
		if (number == arr1[i]) {
			cout << "Элемент с индексом " << i + 1 << 
				" в массиве 'a' соответствует введенному элементу" << endl;
			count1++;
		}
	for (int i = 0; i < size2; i++)
		if (number == arr2[i]) {
			cout << "Элемент с индексом " << i + 1 <<
				" в массиве 'b' соответствует введенному элементу" << endl;
			count2++;
		}
	for (int i = 0; i < size3; i++)
		if (number == arr3[i]) {
			cout << "Элемент с индексом " << i + 1 <<
				" в массиве 'c' соответствует введенному элементу" << endl;
			count3++;
		}
	for (int i = 0; i < size4; i++)
		if (number == arr4[i]) {
			cout << "Элемент с индексом " << i + 1 <<
				" в массиве 'b' соответствует введенному элементу" << endl;
			count4++;
		}
	for (int i = 0; i < size5; i++)
		if (number == arr5[i]) {
			cout << "Элемент с индексом " << i + 1 <<
				" в массиве 'b' соответствует введенному элементу" << endl;
			count5++;
		}
	int count = count1 + count2 + count3 + count4 + count5;
	if (count == 0)
		cout << "Нет совпадений с введеным элементом" << endl;
	else cout << "Общее количество совпадений равно: " << count << endl;
}
//void BISearch(float* arr1, int size1, float* arr2, int size2, float* arr3, int size3, float* arr4, int size4, float* arr5, int size5, float number) {
//	int i = 0, j = size1, m = size1 / 2;
//	if (number <= arr1[size1 - 1]) {
//		while (arr1[m] != number) {
//			if (arr1[m] < number)
//				i += m;
//			else j = m - i;
//			m = (i + j) / 2;
//		}
//		cout << "Элемент с индексом " << m <<
//			" в массиве 'a' соответствует введенному элементу" << endl;
//	}
//	else cout << "Данный элемент отсутствует в массиве 'a'";
//
//	i = 0, j = size2, m = size2 / 2;
//	if (number <= arr1[size2 - 1]) {
//	while (arr2[m] != number) {
//		if (arr2[m] < number)
//			i += m;
//		else j = m - i;
//		m = (i + j) / 2;
//	}
//	cout << "Элемент с индексом " << m <<
//		" в массиве 'b' соответствует введенному элементу" << endl;
//	}
//	else cout << "Данный элемент отсутствует в массиве 'b'";
//
//	i = 0, j = size3, m = size3 / 2;
//	if (number <= arr1[size3 - 1]) {
//	while (arr3[m] != number) {
//		if (arr3[m] < number)
//			i += m;
//		else j = m - i;
//		m = (i + j) / 2;
//	}
//	cout << "Элемент с индексом " << m <<
//		" в массиве 'c' соответствует введенному элементу" << endl;
//    }
//	else cout << "Данный элемент отсутствует в массиве 'c'";
//
//	i = 0, j = size4, m = size4 / 2;
//	if (number <= arr1[size4 - 1]) {
//	while (arr4[m] != number) {
//		if (arr4[m] < number)
//			i += m;
//		else j = m - i;
//		m = (i + j) / 2;
//	}
//	cout << "Элемент с индексом " << m <<
//		" в массиве 'd' соответствует введенному элементу" << endl;
//	}
//	else cout << "Данный элемент отсутствует в массиве 'd'";
//
//	i = 0, j = size5, m = size5 / 2;
//	if (number <= arr1[size5 - 1]) {
//	while (arr5[m] != number) {
//		if (arr5[m] < number)
//			i += m;
//		else j = m - i;
//		m = (i + j) / 2;
//	}
//	cout << "Элемент с индексом " << m <<
//		" в массиве 'e' соответствует введенному элементу" << endl;
//	}
//	else cout << "Данный элемент отсутствует в массиве 'e'";
//}
void Search_Binary(float* arr1, int size1, float* arr2, int size2, float* arr3, int size3, float* arr4, int size4, float* arr5, int size5, float number){
	int midd = 0;
	int left = 0, right = size1;
	while (1)
	{
		midd = (left + right) / 2;
		if (number < arr1[midd])      
			right = midd - 1;      
		else if (number > arr1[midd])  
			left = midd + 1;  
		else {
			cout << "Элемент с индексом " << midd <<
				" в массиве 'a' соответствует введенному элементу" << endl;
			break;
		}
		    

		if (left > right) {
			cout << "Введенный элемент отсутствует в массиве 'a'" << endl;
			break;
		}
			
	}
	midd = 0;
	left = 0, right = size2;
	while (1)
	{
		midd = (left + right) / 2;
		if (number < arr2[midd])
			right = midd - 1;
		else if (number > arr2[midd])
			left = midd + 1;
		else {
			cout << "Элемент с индексом " << midd <<
				" в массиве 'b' соответствует введенному элементу" << endl;
			break;
		}


		if (left > right) {
			cout << "Введенный элемент отсутствует в массиве 'b'" << endl;
			break;
		}

	}
	midd = 0;
	left = 0, right = size3;
	while (1)
	{
		midd = (left + right) / 2;
		if (number < arr3[midd])
			right = midd - 1;
		else if (number > arr3[midd])
			left = midd + 1;
		else {
			cout << "Элемент с индексом " << midd <<
				" в массиве 'c' соответствует введенному элементу" << endl;
			break;
		}


		if (left > right) {
			cout << "Введенный элемент отсутствует в массиве 'c'" << endl;
			break;
		}

	}
	midd = 0;
	left = 0, right = size4;
	while (1)
	{
		midd = (left + right) / 2;
		if (number < arr4[midd])
			right = midd - 1;
		else if (number > arr4[midd])
			left = midd + 1;
		else {
			cout << "Элемент с индексом " << midd <<
				" в массиве 'd' соответствует введенному элементу" << endl;
			break;
		}


		if (left > right) {
			cout << "Введенный элемент отсутствует в массиве 'd'" << endl;
			break;
		}

	}
	midd = 0;
	left = 0, right = size5;
	while (1)
	{
		midd = (left + right) / 2;
		if (number < arr5[midd])
			right = midd - 1;
		else if (number > arr5[midd])
			left = midd + 1;
		else {
			cout << "Элемент с индексом " << midd <<
				" в массиве 'e' соответствует введенному элементу" << endl;
			break;
		}


		if (left > right) {
			cout << "Введенный элемент отсутствует в массиве 'e'" << endl;
			break;
		}

	}
}
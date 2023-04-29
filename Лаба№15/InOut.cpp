#include "Header.h"

void inArray(float* arr, int size) {
    cout << "¬ведите " << size << " элементов: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}
void RandArray(float* arr, int num) {
    srand(time(NULL));
    bool isCorrect = 0;
    while (isCorrect == 0) {
        system("cls");
        cout << "¬ыберите тип заполнени€ массива " << endl;
        cout << "1. ÷елые числа" << endl << "2. ƒробные числа" << endl;
        string ch, choice_s;
        char choice;
        ch = getchar();
        getline(cin, choice_s);
        if (ch != "\n")
            choice_s.insert(0, ch);
        if (size(choice_s) > 2 || choice_s < "0" || choice_s>"9") {
            cout << "ѕункт меню выбран некорректно" << endl;
            system("pause");
            system("cls");
        }
        else {
            choice = choice_s[0];
            switch (choice)
            {
            case '1':
                int a, b;
                cout << "¬ведите диапозон чисел" << endl;
                cout << "Ќачальное значение диапозона: ";
                cin >> a;
                cout << "ѕредельное значение диапозона: ";
                cin >> b;
                if (a > b)
                    swap(a, b);
                for (int i = 0; i < num; i++)
                    arr[i] = a + rand() % b;
                system("pause");
                system("cls");
                isCorrect = 1;
                break;
            case '2':
                float c, d;
                cout << "¬ведите диапозон чисел" << endl;
                cout << "Ќачальное значение диапозона: ";
                cin >> c;
                cout << "ѕредельное значение диапозона: ";
                cin >> d;
                if (c > d)
                    swap(c, d);
                for (int i = 0; i < num; i++)
                    arr[i] = c + rand() * d / (float)RAND_MAX;
                system("pause");
                system("cls");
                isCorrect = 1;
                break;
            }
        }
    }
}
void OutArray(float* arr1, float* arr2, float* arr3, float* arr4, float* arr5, int size1, int size2, int size3, int size4, int size5) {
    fstream out("out.txt", fstream::out);
    cout << "Ёлементы массива 'a': ";
    out << "Ёлементы массива 'a': ";
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
        out << arr1[i] << " ";
    }
    cout << endl;
    out << endl;
    cout << "Ёлементы массива 'b': ";
    out << "Ёлементы массива 'b': ";
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
        out << arr2[i] << " ";
    }
    cout << endl;
    out << endl;
    cout << "Ёлементы массива 'c': ";
    out << "Ёлементы массива 'c': ";
    for (int i = 0; i < size3; i++) {
        cout << arr3[i] << " ";
        out << arr3[i] << " ";
    }
    cout << endl;
    out << endl;
    cout << "Ёлементы массива 'd': ";
    out << "Ёлементы массива 'd': ";
    for (int i = 0; i < size4; i++) {
        cout << arr4[i] << " ";
        out << arr4[i] << " ";
    }
    cout << endl;
    out << endl;
    cout << "Ёлементы массива 'e': ";
    out << "Ёлементы массива 'e': ";
    for (int i = 0; i < size5; i++) {
        cout << arr5[i] << " ";
        out << arr5[i] << " ";
    }
    cout << endl;
}

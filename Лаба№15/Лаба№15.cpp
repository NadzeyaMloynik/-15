#include "Header.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float* a, * b, * c, * d, * e;
    int count = 0;
    a = new float[100];
    b = new float[100];
    c = new float[100];
    d = new float[100];
    e = new float[100];
    int num1, num2, num3, num4, num5;
    bool isCorrect = 1, isOK = 0;
    cout << endl;
    string menu[] = { "1. Инициализировать массивы", "2. Заполнить массивы рандомными числами", "3. Сортировка методом пузырька",
        "4. Сортировка методом выбора", "5. Сортировка методом вставки", "6. Сортировка методом Шелла",
        "7. Сортировка методом Хоора", "8. Последовательный поиск", "9. Бинарный поиск", "10. Вывод массивов", "0. Завершить программу" };
    string ch, choice_s;
    int choice;
    while (isCorrect == 1) {
        system("cls");
        cout << "Главное меню" << endl;
        for (int i = 0; i < size(menu); i++)
            cout << menu[i] << endl;
        cout << endl << "Выберите пункт меню: ";
        ch = getchar();
        getline(cin, choice_s);
        if (ch != "\n")
            choice_s.insert(0, ch);
        if (size(choice_s) > 2 || choice_s < "0" || choice_s>"9") {
            cout << "Пункт меню выбран некорректно" << endl;
            system("pause");
        }
        else {
            choice = stoi(choice_s);
            switch (choice)
            {
            case 1: {
                cout << "Введите размера массива 'a': ";
                cin >> num1;
                inArray(a, num1);
                cout << endl;
                cout << "Введите размера массива 'b': ";
                cin >> num2;
                inArray(b, num2);
                cout << endl;
                cout << "Введите размера массива 'c': ";
                cin >> num3;
                inArray(c, num3);
                cout << endl;
                cout << "Введите размера массива 'd': ";
                cin >> num4;
                inArray(d, num4);
                cout << endl;
                cout << "Введите размера массива 'e': ";
                cin >> num5;
                inArray(e, num5);
                cout << endl;
                isOK = 1;
                break;
            }
            case 2: {
                cout << "Введите размера массива 'a': ";
                cin >> num1;
                RandArray(a, num1);
                cout << endl;
                cout << "Введите размера массива 'b': ";
                cin >> num2;
                RandArray(b, num2);
                cout << endl;
                cout << "Введите размера массива 'c': ";
                cin >> num3;
                RandArray(c, num3);
                cout << endl;
                cout << "Введите размера массива 'd': ";
                cin >> num4;
                RandArray(d, num4);
                cout << endl;
                cout << "Введите размера массива 'e': ";
                cin >> num5;
                RandArray(e, num5);
                cout << endl;
                isOK = 1;
                break;
            }
            case 3: {
                system("cls");
                if (isOK != 0) {
                    BubbleSort(a, num1);
                    OutArray(a, b, c, d, e, num1, num2, num3, num4, num5);
                    count++;
                }
                else cout << "Сначала следует заполнить массивы." << endl;
                system("pause");
                break;
            }
            case 4: {
                system("cls");
                if (isOK != 0) {
                    MinSort(b, num2);
                    OutArray(a, b, c, d, e, num1, num2, num3, num4, num5);
                    count++;
                }
                else cout << "Сначала следует заполнить массивы." << endl;
                system("pause");
                break;
            }
            case 5: {
                system("cls");
                if (isOK != 0) {
                    InsertSort(c, num3);
                    OutArray(a, b, c, d, e, num1, num2, num3, num4, num5);
                    count++;
                }
                else cout << "Сначала следует заполнить массивы." << endl;
                system("pause");
                break;
            }
            case 6: {
                system("cls");
                if (isOK != 0) {
                    ShellSort(d, num4);
                    OutArray(a, b, c, d, e, num1, num2, num3, num4, num5);
                    count++;
                }
                else cout << "Сначала следует заполнить массивы." << endl;
                system("pause");
                break;
            }
            case 7: {
                int left = 0, right = num5 - 1;
                system("cls");
                if (isOK != 0) {
                    QuickSort(e, num5, left, right);
                    OutArray(a, b, c, d, e, num1, num2, num3, num4, num5);
                    count++;
                }
                else cout << "Сначала следует заполнить массивы." << endl;
                system("pause");
                break;
            }
            case 8: {
                system("cls");
                if (isOK != 0) {
                    float number;
                    cout << "Введите число для поиска: ";
                    cin >> number;
                    LineSearch(a, num1, b, num2, c, num3, d, num4, e, num5, number);
                }
                else cout << "Сначала следует заполнить массивы." << endl;
                system("pause");
                break;
            }
            case 9: {
                system("cls");
                if (isOK != 0 && count>=5) {
                    float number;
                    cout << "Введите число для поиска: ";
                    cin >> number;
                    Search_Binary(a, num1, b, num2, c, num3, d, num4, e, num5, number);
                }
                else cout << "Сначала следует заполнить и отсортировать массивы." << endl;
                system("pause");
                break;
            }
            case 10: {
                system("cls");
                if (isOK != 0)
                    OutArray(a, b, c, d, e, num1, num2, num3, num4, num5);
                else cout << "Сначала следует заполнить массивы." << endl;
                system("pause");
                    break;
            }
            case 0:
                cout << "Работа программы завершена" << endl;
                system("pause");
                system("cls"); 
                isCorrect = 0;
                break;
            }
        }
    }
}
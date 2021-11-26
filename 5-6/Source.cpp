/////Даны целые числа a1,a2,.....an,среди которых могут быть повторяющиеся.Составить новый массив из чисел,взятых по одному из каждой группы равных членов данной последовательности.
#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        int z;
        cout << "\nВыберите действие: 1-Вычисление,0-Выход" << endl;
        cin >> z;
        if (z == 0)
        {
            break;
        }
        else
        {

            int array[] = { 1,2,1,3,4,5,5,6,3 };

            int n = sizeof(array) / sizeof(0);

            for (int i = 0; i < n; i++)

                cout << array[i] << ' ';

            cout << endl;

            int nnew = 0;

            for (int i = 0; i < n; i++)

                if (count(array, (array + nnew), array[i]) == 0)

                    array[nnew++] = array[i];

            for (int i = 0; i < nnew; i++)

                cout << array[i] << ' ';

            cout << endl;

            return 0;
        }
    }
}
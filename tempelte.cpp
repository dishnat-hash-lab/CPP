#include <iostream>
using namespace std;

template <class T1, int n>
class arr
{
    T1 a[n];
    public:
    void get_arr()
    {
        cout << "\nEnter  integers: ";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "\noriginal array:";
        for (int i = 0; i < n; i++)
        {
            cout << " " << a[i];
        }
        printf("\n");
    }
    void sort(){

        int i, j, temp, key;
        for (j = 1; j < n; j++)
        {
            key = a[j];
            i = j - 1;
            while (i >= 0 && a[i] > key)
            {
                a[i + 1] = a[i];
                i--;
            }

            a[i + 1] = key;
        }
    }
    void show_arr(){

        cout << "\nsorted array:";
        for (int i = 0; i < n; i++)
        {
            cout << " " << a[i];
        }
    };
    
};

int main()
{
    arr <float, 10>ar;
    ar.get_arr();
    ar.sort();
    ar.show_arr();
}
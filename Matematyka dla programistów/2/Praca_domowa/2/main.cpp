#include <iostream>
#include <string>
using std::max;
using std::min;
using namespace std;

template <typename T>

T average_int_table(T tab[], int size)
{
    T sum_el{0};

    for (int i = 0; i < size; i++)
    {
        sum_el += tab[i];
    }
    return sum_el / (float)size;
}

template <typename T>
T max_int_table(T tab[], int size)
{
    T max = tab[0];

    for (int i = 0; i < size; i++)
    {
        if (max < tab[i])
        {
            max = tab[i];
        }
    }
    return max;
}

template <typename T>
T min_int_table(T tab[], int size)
{
    T min = tab[0];

    for (int i = 0; i < size; i++)
    {
        if (min > tab[i])
        {
            min = tab[i];
        }
    }
    return min;
}

// int average_int_table(int tab[], int size)
// {
//     int sum_el{0};

//     for (int i = 0; i < size; i++)
//     {
//         sum_el += tab[i];
//     }
//     return sum_el / (float)size;
// }

// float average_float_table(float tab[], int size)
// {
//     float sum_el{0};

//     for (int i = 0; i < size; i++)
//     {
//         sum_el += tab[i];
//     }
//     return sum_el / (float)size;
// }

// int max_int_table(int tab[], int size)
// {
//     int max = tab[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (max < tab[i])
//         {
//             max = tab[i];
//         }
//     }
//     return max;
// }

// float max_float_table(float tab[], int size)
// {
//     float max = tab[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (max < tab[i])
//         {
//             max = tab[i];
//         }
//     }
//     return max;
// }

// int min_int_table(int tab[], int size)
// {
//     int min = tab[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (min > tab[i])
//         {
//             min = tab[i];
//         }
//     }
//     return min;
// }

// float min_float_table(float tab[], int size)
// {
//     float min = tab[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (min > tab[i])
//         {
//             min = tab[i];
//         }
//     }
//     return min;
// }

int main()
{
    int tab_int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float tab_float[10]{3.44, 2.55, 3.77, 4.4, 5.6, 6.3, 7.7, 8.3, 9.6, 444.6};

    cout << "Average from int table is: " << average_int_table(tab_int, 10) << endl;

    // cout << "Average from  float table  is: " << average_float_table(tab_float, 10) << endl;

    cout << "Max value from table int table is " << max_int_table(tab_int, 10) << endl;

    // cout << "Max value from table float table is " << max_float_table(tab_float, 10) << endl;

    cout << "Min value from table int table is " << min_int_table(tab_int, 10) << endl;

    // cout << "Min value from table float table is " << min_float_table(tab_float, 10) << endl;
}

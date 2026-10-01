#include <iostream>

int ** convert(const int *t, size_t n, const size_t *lns, size_t rows)
{
    int **arr = new int* [rows];
    for (size_t i = 0; i < rows; ++i)
    {
        arr[i] = new int [lns[i]];
    }

    const int *pa = t;
    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < lns[i]; ++j)
        {
            arr[rows][j] = *pa;
            ++pa;
        }
    }

    return arr;
}

int main()
{

}
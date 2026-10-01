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
            arr[i][j] = *pa;
            ++pa;
        }
    }

    return arr;
}

int main()
{
    size_t n = 12;
    int t[] = {5,5,5,5,6,6,7,7,7,7,7,8};

    size_t rows = 4;
    size_t lns[] = {4,2,5,1};

    int **arr = convert(t,n,lns,rows);

    for (size_t i = 0; i < rows; ++i)
    {   
        for (size_t j = 0; j < lns[i]; ++j)
        {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << '\n' << '\n';

    }
}

#include "iter.hpp"

#include <iostream>

template < typename T>
void    square(T &a)
{
    a *= a;
}


template < typename T>
void    add_3(T &a)
{
    a += 3.0; 
}



int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    iter(arr, 5, square<int>);
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;

    double arr1[3] = {1.2, 2.3, 3.1};
    iter(arr1, 3, square<double>);
    for (int i = 0; i < 3; i++)
    {
        std::cout << arr1[i] << " "; 
    }
    std::cout << std::endl;
    iter(arr1, 3, add_3< double>);
    for (int i = 0; i < 3; i++)
    {
        std::cout << arr1[i] << " "; 
    }
    std::cout << std::endl;
    int arr2[5] = {1, 2, 3, 4, 5};
    iter(arr2, 5, add_3<int>);
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr2[i] << " "; 
    }
    std::cout << std::endl;
}

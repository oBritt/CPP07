
#ifndef ITER_HPP
#define ITER_HPP

template < typename T>
void    iter(T* arr, int len, void(*func)(T&))
{
    for (int i = 0; i < len; i++)
    {
        func(*arr);
        arr++;
    }
}

template < typename T>
void    iter(T* arr, int len, void(*func)(T const &))
{
    for (int i = 0; i < len; i++)
    {
        func(*arr);
        arr++;
    }
}

#endif
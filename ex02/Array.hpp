
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template < typename T>
class Array
{
    private:
        T*              arr;
        int           size_of_array;

    public:
        Array<T>(void)
        {
            this->arr = new T[0];
            this->size_of_array = 0;
        }
        ~Array<T>(void)
        {
            if (this->arr)
            {
                delete [] arr;
            }
        }
        Array<T>(int size)
        {
            this->arr = new T[size];
            this->size_of_array = size;
        }

        Array<T>(Array<T> const & other)
        {
            arr = new T[other.size];
            for (int i = 0; i < other.size; i++)
            {
                this->arr[i] = other.arr[i];
            }
            this->size = other.size;
        }
        Array<T>& operator=(Array<T> const & other)
        {
            if (this != &other)
            {
                if (this->arr)
                {
                    delete [] arr;
                }
                arr = new T[other.size_of_array];
                for (int i = 0; i < other.size_of_array; i++)
                {   
                    this->arr[i] = other->arr[i];
                }
                this->size_of_array = other.size_of_array;
            }
        }
        T& operator[](int index) const
        {
            if (index >= this->size_of_array || index < 0)
            {
                throw std::exception();
            }
            else
                return (arr[index]);
        }

        int size(void)
        {
            return this->size_of_array;
        }
};



#endif
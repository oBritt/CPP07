
#include "Array.hpp"


int main()
{
    {
        Array<int> a(10);
        try
        {
            a[123];
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        Array<int> arr(5);
        for (int i = 0; i < 5; i++)
        {
            arr[i] = i;
        }
        for (int i = 0; i < 5; i++)
        {
            std::cout << arr[i] << std::endl;
        }
    }
    {
        Array<double> arr(1);
        arr[0] = 1.2;
        std::cout << arr[0] << std::endl;
    }
    
}
    
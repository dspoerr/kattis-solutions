#include <iostream>

int main()
{
    int wc, hc, ws, hs;
    bool fit = false;

    std::cin >> wc >> hc >> ws >> hs;

    if ((wc - ws) >= 2)
    {
        if ((hc - hs) >= 2)
        {
            fit = true;
        }
    }

    std::cout << fit;
    
    return 0;
}
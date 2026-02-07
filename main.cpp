#include <iostream>
#include <string>

using std::string;

int main()
{
    bool x = true;
    bool y = false;
    bool condizione = 5 < 10;

    std::cout << std::boolalpha;
    std::cout << condizione << std::endl;
    return 0;
}
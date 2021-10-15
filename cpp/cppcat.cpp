// Your First C++ Program

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (!argv[1])
    {
        std::cout << "\033[1;31mError: No filename entered! Please input a filename to read!\033[0m\n";
    }
    else
    {
        std::ifstream f(argv[1]);
        if (!f.is_open())
        {
            std::cout << "\033[1;31mError: could not open " << argv[1] << "\033[0m\n";
        }
        if (f.is_open())
            std::cout << f.rdbuf();
    }

    return 0;
}

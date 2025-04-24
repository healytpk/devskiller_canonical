#include <cstdio>               // printf
#include <cstdlib>              // exit, EXIT_FAILURE
#include <cstring>              // strcmp
#include <exception>            // exception
#include <iostream>             // cout, endl
#include <string>               // string

using std::string;
using std::cout;
using std::endl;

void ShowHelp(char const *const argv0) noexcept
{
    std::printf(
              "Usage: %s [options]\n"
              "Options:\n"
              "\n"
              "Examples:\n"
              "    %s --list-releases\n"
              "    %s --hash 2025-04-03\n\n", argv0, argv0, argv0);
}

int main_proper(int const argc, char **const argv)
{
    (void)argc;
    ShowHelp(argv[0]);
    return 0;
}

int main(int const argc, char **const argv)
{
    try
    {
        return main_proper(argc, argv);
    }
    catch (std::exception const &e)
    {
        cout << "Error : Unhandled Exception : " << e.what() << endl;
    }
    catch (...)
    {
        cout << "Error : Unhandled Exception : Unknown\n";
    }

    return EXIT_FAILURE;
}


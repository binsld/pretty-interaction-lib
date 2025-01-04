//#include <stdlib.h>
#include "pretty-interaction.h"
#include <fmt/core.h>
/*string colors::truecolor(char red, char green, char blue)
{

}*/
/*
bool colors::is_truecolor_available()
{
    std::cout << std::system("echo $COLORTERM > pretty-interaction-lib-color");
    return 0;
}
*/
std::string colors::truecolor_foreground(unsigned char red, unsigned char green, unsigned char blue)
{
    return fmt::v11::format("\e[38;2;{};{};{}m", red, green, blue);
}

std::string colors::truecolor_background(unsigned char red, unsigned char green, unsigned char blue)
{
    return fmt::v11::format("\e[48;2;{};{};{}m", red, green, blue);
}
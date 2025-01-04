#include <string>


namespace colors {
    const char reset[] = "\e[00m";
    
    // palette for development. just type "cout << colors::pallete;"
    const char palette[] = "foreground:\t\t\e[31mred\e[0m \e[33myellow\e[0m \e[32mgreen\e[0m \e[34mblue\e[0m \e[36mcyan\e[0m \e[35mmagenta\e[0m \e[30mblack\e[0m \e[37mwhite\e[0m\nbright_foreground:\t\e[91mred\e[0m \e[93myellow\e[0m \e[92mgreen\e[0m \e[94mblue\e[0m \e[96mcyan\e[0m \e[95mmagenta\e[0m \e[90mblack\e[0m \e[97mwhite\e[0m\nbackground:\t\t\e[41mred\e[0m \e[43myellow\e[0m \e[42mgreen\e[0m \e[44mblue\e[0m \e[46mcyan\e[0m \e[45mmagenta\e[0m \e[40mblack\e[0m \e[47mwhite\e[0m\nbright_background:\t\e[101mred\e[0m \e[103myellow\e[0m \e[102mgreen\e[0m \e[104mblue\e[0m \e[106mcyan\e[0m \e[105mmagenta\e[0m \e[100mblack\e[0m \e[107mwhite\e[0m\n";
    
    namespace foreground {
        const char black[] = "\e[30m";
        const char red[] = "\e[31m";
        const char green[] = "\e[32m";
        const char yellow[] = "\e[33m";
        const char blue[] = "\e[34m";
        const char magenta[] = "\e[35m";
        const char cyan[] = "\e[36m";
        const char white[] = "\e[37m";
    }

    namespace bright_foreground {
        const char black[] = "\e[90m";
        const char red[] = "\e[91m";
        const char green[] = "\e[92m";
        const char yellow[] = "\e[93m";
        const char blue[] = "\e[94m";
        const char magenta[] = "\e[95m";
        const char cyan[] = "\e[96m";
        const char white[] = "\e[97m";
    }

    namespace background {
        const char black[] = "\e[40m";
        const char red[] = "\e[41m";
        const char green[] = "\e[42m";
        const char yellow[] = "\e[43m";
        const char blue[] = "\e[44m";
        const char magenta[] = "\e[45m";
        const char cyan[] = "\e[46m";
        const char white[] = "\e[47m";
    }

    namespace bright_background {
        const char black[] = "\e[100m";
        const char red[] = "\e[101m";
        const char green[] = "\e[102m";
        const char yellow[] = "\e[103m";
        const char blue[] = "\e[104m";
        const char magenta[] = "\e[105m";
        const char cyan[] = "\e[106m";
        const char white[] = "\e[107m";
    }

    // available in Xterm, KDE's Konsole, iTerm, libvte based terminals like GNOME Terminal.
    // to check, use the colors::is_truecolor_available()
    std::string truecolor_foreground(unsigned char red, unsigned char green, unsigned char blue);
    std::string truecolor_background(unsigned char red, unsigned char green, unsigned char blue);
    // bool is_truecolor_available();

}

namespace ansi {
    const char erase_line[] = "\e[2K";
    const char erase_screen[] = "\e[2J";
}
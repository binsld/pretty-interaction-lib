
namespace colors {
    const char reset[] = "\e[00m";
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
}

namespace ansi {
    const char erase_line[] = "\e[2K";
    const char erase_screen[] = "\e[2J";
}
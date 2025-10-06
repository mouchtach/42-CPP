#ifndef COLORS_HPP
#define COLORS_HPP


// Text attributes
#define RESET       "\033[0m"
#define BOLD        "\033[1m"

// Foreground colors
#define BLACK       "\033[30m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"

// Bright colors
#define BRIGHT_BLACK   "\033[90m"
#define BRIGHT_RED     "\033[91m"
#define BRIGHT_GREEN   "\033[92m"
#define BRIGHT_YELLOW  "\033[93m"
#define BRIGHT_BLUE    "\033[94m"
#define BRIGHT_MAGENTA "\033[95m"
#define BRIGHT_CYAN    "\033[96m"
#define BRIGHT_WHITE   "\033[97m"

// Background colors
#define BG_BLACK     "\033[40m"
#define BG_RED       "\033[41m"
#define BG_GREEN     "\033[42m"
#define BG_YELLOW    "\033[43m"
#define BG_BLUE      "\033[44m"
#define BG_MAGENTA   "\033[45m"
#define BG_CYAN      "\033[46m"
#define BG_WHITE     "\033[47m"

// Bold + color combo helper
#define BOLD_RED     BOLD RED
#define BOLD_GREEN   BOLD GREEN
#define BOLD_YELLOW  BOLD YELLOW
#define BOLD_BLUE    BOLD BLUE
#define BOLD_MAGENTA BOLD MAGENTA
#define BOLD_CYAN    BOLD CYAN
#define BOLD_WHITE   BOLD WHITE

// NOTE: ANSI does not support changing font size in terminal.
// Font size must be set in your terminal emulator settings, not by C++.

#endif // COLORS_HPP

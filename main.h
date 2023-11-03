#ifndef _HEADER_
#define _HEADER_

int _printf(const char *format, ...);
void format_char(int *char_count, va_list args);
void format_string(int *char_count, va_list args);
void format_int(int *char_count, va_list args);
void format_percent(int *char_count);
void handle_format(int *char_count, const char **format, va_list args);
void print_int(int *char_count int num);
#endif

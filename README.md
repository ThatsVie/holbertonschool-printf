
![Printf_Function (1)](https://github.com/ThatsVie/holbertonschool-printf/assets/144152489/052145cf-984d-43c1-ae87-55eb6a78e7b6)

<p align="center">
✨by <a href="https://github.com/ThatsVie/">Vie</a> and  <a href="https://github.com/Srixx24/">Jackie</a> ✨
</p>

## Our Repo for the [Printf Project](https://github.com/ThatsVie/holbertonschool-printf) 💕

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white) ![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)

Our printf fuction works through four distinct files, each code file works in tandum to produce output according to a format. Files are listed bellow:

### 🌟 [_printf](https://github.com/ThatsVie/holbertonschool-printf/blob/main/_printf.c)
- The _printf function is a variadic function that takes a format string as its first argument, followed by a variable number of additional arguments.
- The function iterates over each character in the format string and performs the appropriate action based on the character.
<details>
<summary>Function Details</summary>
<ul><li>
Defines an array specifiers that holds the format specifiers and their corresponding print functions</li>
<li>Initializes a variable arguments list args.</li>
<li>Initializes a counter variable count to keep track of the number of characters printed.</li>
<li>Checks if the format string is empty. If it is, the function returns -1.</li>
<li>Starts processing variable arguments using va_start.</li>
<li>Iterates over each character in the format string.</li>
<li>If the character is not a % symbol (format specifier), it is printed using the _putchar function and the count is incremented.</li>
<li>If the character is a % symbol, it checks if the next character matches any of the format specifiers in the specifiers array.</li>
<li>If a match is found, it moves the format pointer to the next character and calls the corresponding print function, passing the variable arguments.</li>
<li>If a match is not found and there are no more characters, it returns -1.</li>
<li>If a match is not found but there are more characters, it prints the % character and increments the count.</li>
<li>After processing all characters in the format string, it ends processing variable arguments using va_end.</li>
<li>Finally, it returns the total number of characters printed.</li>
</details>

### 🌟 [print_functions.c](https://github.com/ThatsVie/holbertonschool-printf/blob/Jackie/print_functions.c)
- This code uses mulitple functions to handle the appropriate formatting function based on the encountered format specifier and updating the char_count accordingly.

### 🌟 [main.h](https://github.com/ThatsVie/holbertonschool-printf/blob/main/main.h)
- This file is the header file that contains our prototypes called.

### 🌟 [string_conversion.c](https://github.com/ThatsVie/holbertonschool-printf/blob/Jackie/string_conversion.c)
- This code file allows the _printf function to format and print integers correctly

[![Our GitHub stats](https://github-readme-stats.vercel.app/api?username=ThatsVie&theme=tokyonight)](https://github.com/ThatsVie/holbertonschool-printf)


#

<img align="right" alt="Coding" width="300" src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSDtguQl4ahyEPvsWB4rTkN-1b9yEKpGM4K-7gJLvhaTQ&s">



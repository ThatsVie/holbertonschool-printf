![Printf_Function](https://github.com/ThatsVie/holbertonschool-printf/assets/144152489/75129953-9781-4c82-adf5-b4806eaae021)

<p align="center">
✨by <a href="https://github.com/ThatsVie/">Vie</a> and  <a href="https://github.com/Srixx24/">Jackie</a> ✨
</p>

<br>

![Static Badge](https://img.shields.io/badge/Cool%20Cats-Cool%20Code-purple?style=string&logoColor=purple) ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white) ![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white) 

<br>

<h3><p align="center">
Directory for our <a href="https://github.com/ThatsVie/holbertonschool-printf/">Printf Project</a> 💕
</p></h3>

Our printf fuction works through three distinct code files, each code works in tandum to produce output according to a format. Code files are listed bellow:

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
<li>If the character is not a % symbol (format specifier), it is printed using the putchar function and the count is incremented.</li>
<li>If the character is a % symbol, it checks if the next character matches any of the format specifiers in the specifiers array.</li>
<li>If a match is found, it moves the format pointer to the next character and calls the corresponding print function, passing the variable arguments.</li>
<li>If a match is not found and there are no more characters, it returns -1.</li>
<li>If a match is not found but there are more characters, it prints the % character and increments the count.</li>
<li>After processing all characters in the format string, it ends processing variable arguments using va_end.</li>
<li>Finally, it returns the total number of characters printed.</li>
</details>

### 🌟 [print_functions.c](https://github.com/ThatsVie/holbertonschool-printf/blob/Jackie/print_functions.c)
- The code defines several functions that handle different format specifiers: _printChar, _printString, _printInt, _printPercent, and _putchar.
- These functions are responsible for printing different types of data.
<details>
<summary>Function Details</summary>
<ul><li>The _printChar function takes a va_list argument named args, which is a variable argument list. It retrieves the next argument of type int from the args list using va_arg. The function then writes the character to the standard output using write and returns the number of characters written.</li>
<li>The _printString function also takes a va_list argument named args. It retrieves the next argument of type char* from the args list using va_arg. If the retrieved string is NULL, it assigns a default value of "(null)" to the s variable. The function then writes the string to the standard output using write and returns the number of characters written.</li>
<li>The _printInt function takes a va_list argument named args. It first determines the size of int and long int to handle different argument types. It retrieves the next argument of the appropriate type from the args list using va_arg. If the number is negative, it sets the isneg flag and converts the number to its positive counterpart. The function then converts the number to a string representation by extracting each digit and storing it in the buffer array. The digits are converted to characters by adding the ASCII value of '0'. The function also calculates the length of the number. If the number is negative, it adds a '-' sign to the buffer. It then reverses the order of the characters in the buffer to correctly represent the number. Finally, it writes the number as a string to the standard output using write and returns the number of characters written.</li>
<li>The _printPercent function takes a va_list argument named args, but it doesn't use it. It writes a '%' character to the standard output using write and returns the number of characters written.</li>
<li>The _putchar function takes a character argument c and writes it to the standard output using write. It returns the number of characters written.</li>
</details>

### 🌟 [main.h](https://github.com/ThatsVie/holbertonschool-printf/blob/main/main.h)
- This code is the header file that contains our prototypes.
<details>
<summary>Function Details</summary>
<ul><li>The code defines a structure called PrintFunction. This structure is used to store a format specifier and its associated printing function, specifier (A string that represents a format specifier) and function (A function pointer that points to the corresponding printing function for the format specifier)</li>
<li>The code declares function prototypes for various functions used in the implementation of the _printf function and the printing of different types of data</li>
</details>

<br>
<br>
<br>


|[Check_out_our_Man_page!](https://github.com/ThatsVie/holbertonschool-printf/blob/main/man_3_printf)|
|---|

<br>

#

![carbon](https://github.com/ThatsVie/holbertonschool-printf/assets/144152489/2e7c9329-5f82-4a38-851f-72c334918f22)

#

[![GitHub](https://github.com/ThatsVie/holbertonschool-printf/assets/144152489/9e114860-dd75-4645-b018-3855427a8504)](https://github.com/ThatsVie/holbertonschool-printf/blob/main/man_3_printf)




<p align="center">
  <img width="300" src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSDtguQl4ahyEPvsWB4rTkN-1b9yEKpGM4K-7gJLvhaTQ&s">
</p>

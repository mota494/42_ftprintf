<div align="center">

# 42_ftprintf
![Static Badge](https://img.shields.io/badge/score-%3100%2F100-green?style=for-the-badge&labelColor=%2312263A&color=%2306BCC1)
![Static Badge](https://img.shields.io/badge/language-C-green?style=for-the-badge&labelColor=%2312263A&color=%2306BCC1)

### Recreating the C standard library function printf()

# libft functions used
Function | Description
--|--|
`ft_putchar.c` | Output a char to the standard output
`ft_putnbr.c` | Output any number inserted to the standard output
`ft_putstr.c` | Output any string inserted to the standard output

# Files
Name | Description | Status 
--|--|--
`ft_printf.c`| Receives the arguments and sends them to a function to print them | ⠀✔️
`ft_flags.c` | Receives the flags and sends them to the functions that will print it | ⠀✔️
`ft_printint.c` | Prints integers, doubles and unsigned int | ⠀✔️
`ft_printhexa.c` | Prints any number in it's hexadecimal | ⠀✔️
`ft_printpointer.c` | Prints the address of the pointer received | ⠀✔️ 

</div>

<div align="center">

# More info

</div>

In both ft_printhexa.c file and ft_printpointer.c there's a function that only calls the function that actually prints the specific type, this was only done because of the Norm in 42. There's no reason to use this ft_printf instead of the actual printf, but in case you want to do it i recommend just creating a variable inside of the putnbr hex and pointer like this


```c
void	ft_putnbrhex(unsigned int num, char *hex, int *count)
{
  char *hex[] = "0123456789ABCDEF";
	if (num >= 16)
	{
		ft_putnbrhex(num / 16, hex, count);
		ft_putnbrhex(num % 16, hex, count);
	}
	else
		ft_putchar(hex[num], count);
}
```

If you want to use or test this code you just have to clone the repository, include the header in your .c file and also compile all the .c files in this repo.

<div align="center">

# 42_ftprintf
![Static Badge](https://img.shields.io/badge/score-%3100%2F100-green?style=for-the-badge&labelColor=%2312263A&color=%2306BCC1)
![Static Badge](https://img.shields.io/badge/language-C-green?style=for-the-badge&labelColor=%2312263A&color=%2306BCC1)

[![Static Badge](https://img.shields.io/badge/Music%20Suggestion-Click%20Me?style=for-the-badge&logo=YouTube&logoColor=%23000000&labelColor=%23FFFFFF&color=%23FF0000)](https://www.youtube.com/watch?v=hCI8ki34p1E)

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
`ft_printf.c`| Receives the arguments and sends them to a function to print them | ⠀✓
`ft_flags.c` | Receives the flags and sends them to the functions that will print it | ⠀✓
`ft_printint.c` | Prints integers, doubles and unsigned int | ⠀✓
`ft_printhexa.c` | Prints any number in it's hexadecimal | ⠀✓
`ft_printpointer.c` | Prints the address of the pointer received | ⠀✓

</div>

<div align="center">

# More info

<b>Functions Map</b>

```mermaid
graph LR
	ft_printf-->ft_flags-->transport
	transport-->ft_printint
		ft_printint-->ft_unsputnbr-->ft_putchar
		ft_printint-->ft_putnbr-->ft_putchar
	transport-->ft_putstr-->ft_putchar
	transport-->ft_hexamain-->ft_lowhex-->ft_putnbrhex
	ft_hexamain-->ft_uphex-->ft_putnbrhex-->ft_putchar
	transport-->ft_printpointer-->ft_hexdefine-->ft_pointerputnbr-->ft_putchar
```

</div>

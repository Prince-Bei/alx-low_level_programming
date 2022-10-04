#ifndef _MAIN_
#define _MAIN_

/**
 * strtow - string to words
 * @str: string to go to words
 * Return: char value
 */
char **strtow(char *str);
/**
 * argstostr - args stuff
 * @ac: arguments
 * @av: array of arguments?
 * Return: char array
 */
char *argstostr(int ac, char **av);
/**
 * free_grid - frees a grid
 * @grid: grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height);
/**
 * str_concat - concats strings
 * @s1: string one to concat
 * @s2: string 2 to concat
 * Return: returns a concated string
 */
char *str_concat(char *s1, char *s2);
/**
 * alloc_grid - creates 2d array
 * @width: width of array
 * @height: height of array
 * Return: pointer of double array
 */
int **alloc_grid(int width, int height);
/**
 * _strdup - copies string
 * @str: string to copy
 * Return: character value
 */
char *_strdup(char *str);
/**
 * create_array - creates array
 * @size: size of array
 * @c: char to initialize
 * Return: char value
 */
char *create_array(unsigned int size, char c);
/**
 * is_palindrome - is palindrome
 * @s: string to do
 * Return: boolean
 */
int is_palindrome(char *s);
/**
 * is_print_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n);
/**
 * _sqrt_recursion - square root of int
 * @n: integer to root
 * Return: int value
 */

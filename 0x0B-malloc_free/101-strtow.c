#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_count(char *str);
char *first_word(char *str);
char **strtow(char *str);

/**
 * world_len - locates the index marking the end of the
 *  first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */

int word_count(char *str)
{
	int index = 0, len = 0;

	while (*(str +  index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * word_count - Count number of words
 *
 * @str: char pointer
 *
 * Return: Word count
 */

int word_count(char *str)
{
	int counter = 0, wordCount, letter;

	while (str[counter] != '\0')
	{
		if (str[counter] != ' ' && !letter)
		{
			wordCount++;
			letter = 1;
		}
		else if (str[counter] == ' ' && letter)
		{
			letter = 0;
		}
		counter++;
	}
	return (wordCount);
}

/**
 * first_word - Gets first word
 * @str: char pointer
 * Return: Pointer to word
 */

char *first_word(char *str)
{
	int counter;
	char *word;

	counter = 0;
	while (str[counter] != ' ' && str[counter] != '\0')
	{
		counter++;
	}
	word = malloc(sizeof(char) * (counter + 1));
		if (!word)
		{
			return (NULL);
		}
		word[counter] = '\0';
		counter--;
		while (counter >= 0)
		{
			word[counter] = str[counter];
			counter--;
		}
		return (word);
}

#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts words in a string (separator = space)
 * @str: input string
 *
 * Return: number of words
 */
static int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str != ' ' && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*str == ' ')
            in_word = 0;
        str++;
    }
    return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings, or NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int word_count, i, j, k;
    int word_start, word_len;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return (NULL);

    i = 0;      /* index in str */
    k = 0;      /* index in words array */
    while (str[i] && k < word_count)
    {
        /* skip leading spaces */
        while (str[i] == ' ')
            i++;

        /* start of a word */
        word_start = i;
        word_len = 0;
        while (str[i] != ' ' && str[i] != '\0')
        {
            word_len++;
            i++;
        }

        /* allocate space for the word + null terminator */
        words[k] = malloc(sizeof(char) * (word_len + 1));
        if (words[k] == NULL)
        {
            /* free all previously allocated words */
            for (j = 0; j < k; j++)
                free(words[j]);
            free(words);
            return (NULL);
        }

        /* copy the word */
        for (j = 0; j < word_len; j++)
            words[k][j] = str[word_start + j];
        words[k][word_len] = '\0';

        k++;
    }

    words[k] = NULL;   /* null-terminate the array */
    return (words);
}

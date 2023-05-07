/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int bits)
{
    for (int i = 0; i < bits; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return 1;
}

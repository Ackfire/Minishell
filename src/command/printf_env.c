/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** printf_env
*/

#include "minishell1.h"

int printf_env(char **cmd_array, minishell_t *shell)
{
    if (cmd_array[1] != NULL)
        return -1;
    for (int i = 0; shell->env[i] != NULL; i++) {
        my_printf("%s\n", shell->env[i]);
    }
    return 0;
}

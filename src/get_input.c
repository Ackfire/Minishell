/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** get_input
*/

#include "minishell1.h"

char *get_input(char *cmd)
{
    size_t buff = 0;

    free(cmd);
    if ((getline(&cmd, &buff, stdin)) < 0)
        return NULL;
    return cmd;
}

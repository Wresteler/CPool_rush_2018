/*
** EPITECH PROJECT, 2018
** language.c
** File description:
** language.c
*/

#include "../../include/my.h"

void language(int len, char *str)
{
    int tab_lg[4][26] = {{8167, 1492, 2782, 4253, 12702, 2228, 2015, 6094, 6966, 153, 772, 4025, 2406, 6749, 7507, 1929, 95, 5987, 6327, 9056, 2758, 978, 2360, 150, 1974, 74}, {7636, 901, 3260, 3669, 14715, 1066, 866, 737, 7529, 613, 74, 5456, 2968, 7095, 5796, 2521, 1362, 6693, 7948, 7244, 6311, 1838, 49, 427, 128, 326}, {6516, 1886, 2732, 5076, 16396, 1656, 3009, 4577, 6550, 268, 1417, 3437, 2534, 9776, 2594, 670, 18, 7003, 7270, 6154, 4166, 846, 1921, 34, 39, 1134}, {11525, 2215, 4019, 5010, 12181, 692, 1768, 703, 6247, 493, 11, 4967, 3157, 6712, 8683, 2510, 877, 6871, 7977, 4632, 2927, 1138, 17, 215, 1008, 467}};
    int tab[4] = {0, 0, 0, 0};
    int i = 0;
    int j = 0;
    int c = 0;
    int a = 97;
    int country = 0;
    int arr[26][3];

    while (j <= 25) {
        arr[j][0] = a;
        arr[j][1] = occurences(a, str);
        arr[j][2] = frequencies(a, arr[j][1], str);
        a++;
        j++;
    }
    while (i <= len - 1) {
        c = 0;
        country = 0;
        if (arr[i][0] < 91 && arr[i][0] > 64)
            c = 32;
        c = c + arr[i][0] - 97;
        country = closer(arr[i][2] * 10, tab_lg[0][c], tab_lg[1][c], tab_lg[2][c], tab_lg[3][c]) - 1;
        tab[country] += (tab_lg[country][c] * arr[i][2]);
        i++;
    }
    display_language(tab);
}

void display_language(int tab[4])
{
    int i = 0;
    int indice = 0;
    int max = tab[0];

    while (i <= 3) {
        if (tab[i] > max) {
            indice = i;
            max = tab[i];
        }
        i++;
    }
    if (indice == 0)
        my_putstr("=> English");
    if (indice == 1)
        my_putstr("=> French");
    if (indice == 2)
        my_putstr("=> German");
    if (indice == 3)
        my_putstr("=> Spanish");
}

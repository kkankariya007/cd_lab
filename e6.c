#include <stdio.h>
#include <string.h>
char prol[10][10] = {"E","X","F"};
char pror[10][10] = { "+FX","*F","i" };
char prod[10][10] = { "E->+FX","X->*F","F->i" };
char first[10][10] = { "+","*","i" };
char follow[10][10] = { "@","@","*" };
char table[6][7][20];
int numr(char c)
{
switch (c)
{
case 'E':
return 0;
case 'X':
return 1;
case 'F':
return 2;
case '+':
return 0;
case '*':
return 1;
case 'i':
return 2;
case '@':
return 3;
}
return (2);
}
int main()
{
int i, j, k;
for (i = 0; i < 5; i++)
for (j = 0; j < 6; j++)
strcpy(table[i][j], " ");
printf("The following grammar is used for Parsing Table:\n");
for (i = 0; i < 7; i++)
printf("%s\n", prod[i]);
printf("\nPredictive parsing table:\n");
fflush(stdin);
for (i = 0; i < 7; i++)
{
k = strlen(first[i]);
for (j = 0; j < 20; j++)
if (first[i][j] != '@')
strcpy(table[numr(prol[i][0]) + 1][numr(first[i][j]) + 1], prod[i]);
}
for (i = 0; i < 10; i++)
{

if (strlen(pror[i]) == 1)
{
if (pror[i][0] == '@')
{
k = strlen(follow[i]);
for (j = 0; j < k; j++)
strcpy(table[numr(prol[i][0]) + 1][numr(follow[i][j]) + 1], prod[i]);
}
}
}
strcpy(table[0][0], " ");
strcpy(table[0][1], "+");
strcpy(table[0][2], "*");
strcpy(table[0][3], "i");
strcpy(table[0][4], "@");
strcpy(table[1][0], "E");
strcpy(table[2][0], "X");
strcpy(table[3][0], "F");
printf("\n---------------------------------------------------------\n");
for (i = 0; i < 4; i++)
for (j = 0; j < 7; j++)
{
printf("%-10s", table[i][j]);
if (j == 6)
printf("\n---------------------------------------------------------\n");
}
}

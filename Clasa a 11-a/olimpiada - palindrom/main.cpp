#include <iostream>
#include <cstring>
#include <algorithm>
 
char str[] = "GEORGE";
 
bool isPal(char s[]) {
    char z[100];
    for (int i = 0, l = strlen(s); i < (int)strlen(s); i++) {
        z[l - i - 1] = s[i];
    }
    if (!strcmp(s, z))return true;
    else return false;
}
int m;
 
void bk(char s[], int level)
{
    if (level == strlen(str))
        return;
    for (size_t i = level; i < strlen(str); i++)
    {
        char lit[2] = { str[i], '\0' };
        strcat(s, lit);
        std::cout << s << std::endl;
        bk(s, i + 1);
 
        s[(int)strlen(s) - 1] = '\0';
 
    }
}
 
int main()
{
    char aux[100] = "";
    bk(aux, 0);
    std::cin.get();
    return 0;
}
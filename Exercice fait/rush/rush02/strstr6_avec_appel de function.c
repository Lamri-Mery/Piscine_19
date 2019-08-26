#include <string.h>
#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
char   *ma_function(char *to_find, char *src, int *a, int *b, int *p)
{
     if(to_find[*b] == '\0')
            {
                while(src[*p])
                {
                    ft_putchar(src[*p]);
                    *p= *p + 1; //increment pointeur
                }
                return (src[*a]);
            }
}
char    *ft_strstr (char *src, char *to_find)
{
    int a;
    int b;
    int p;

    a = 0;
    b = 0;
    p = 0;
    while(src[a] && to_find[b])
    {
      /*
      ** scr[a] = *(src + a) -> scr[a] est d'avantage apprecié car sinon
      ** il risque de ne pas compiler.
      */
              if((src[a] != '\0') && (src[a] == to_find[b]))
        {
            p = a;
            while(src[p + b] == to_find[b])
            {
                b++;
            }
            ma_function(to_find,src, &a, &b, &p);
            b = 0;
        }
        a++;
    }
}

int main() {
    char *src = "bhcbdspapaKHKpapaiDSK";
    char *to_find = "papai";

    *ft_strstr (src, to_find);

    return 0;
}

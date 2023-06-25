#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void uncrease(int *x)
{
    (*x)++;
}

void swap(int *x, int *y)
{
    int c = *y;
    *y = *x;
    *x = c;
}

int myRandom(int min, int max){
     return min + rand() % (max - min + 1);
}

char* gatRandomSerialNumber()
{
     char *buf = (char*)malloc(20 * sizeof(char));
     char b = myRandom(65,90);
     char c = myRandom(65,90);
     int v = myRandom(100,999);
     sprintf(buf, "%c%c-%d", b, c, v);
     return buf;
}

char* reverseString(char str[])
{
    char *buf = (char*)malloc(20 * sizeof(char));
    int lentgh = strlen(str);
    for(int k = 0; k < 6; k++)
    {
        buf[k] = str[lentgh-1-k];
    }
    return buf;
}

void mymemset(void* buf, char byte, int size)
{
    char* br = buf;
    for(int i = 0; i < size; i++)
    {
        br[i] = byte;
    }
}

int myMemeequals(void *first, void *second, int size)
{
    char* fir = first;
    char* sec = second;
    for(int i = 0; i < size; i++)
    {
        if(fir[i]!=sec[i])
        {
            return 0;
        }
    }
    return 1;
}

int myMemcmp(void *first, void *second, int size)
{
    char* fir = first;
    char* sec = second;
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(fir[i]>sec[i])
        {
            return -1;
        }
        if(fir[i]<sec[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    srand(time(NULL));
    setlocale(LC_ALL, "Rus");

    char u[] = {255,255,255,255};
    char b[] = {255,255,255,255};
    printf("%d",myMemcmp(u, b, 4));

    /*
    int x;
    mymemset(&x, 0xFF, 4);
    printf("%d", x);


    char u[] = {255,255,255,255};
    int b = -1;
    printf("%d", myMemeequals(u, &b, 4));
    */

    //int x = 75;
    //int y = 57;
    //swap(&x,&y);
    //printf("x = %d;\ny = %d;", x , y);
    //scanf("%d", &x);
    //printf("value: %d\naddress: %p", x, &x);
    //int *px = &x;
    //printf("%p", px);
    //printf("%d", *px);
    //(*px)++;//76
    //printf("%p\n", px);
    //printf("%p", px + 1);
    //uncrease(&x);
    //printf("%d" , x);
    //int a[] = {3,5,7,9,11,13};
    //int *b = a;
    //printf("%p\n", a);
    //printf("%p", &a[0]);

    //for(int i = 0; i < 6; i++)
    //{
        //printf("%d\n", *(a + i));//a[i];
        //printf("%d\n", b[i]);
    //}

    //int *buf = (int*)malloc(20 * sizeof(int));
    //buf[0] = 1;
    //printf("%d", buf[0]);
    //free(buf);

    //zad 1
    /*
    short p = 25;
    printf("Значение: %d;\nАдрес: %p;\n", p, &p);

    short *z = &p;
    printf("Значение: %d;\nАдрес: %p;\n", *z, z);



    //zad 2

    int num[15];
    int count;
    for(int i = 0; i < 15; i++){
        num[i] = myRandom(-100,100);
        printf("%d ", num[i]);
        count += num[i];
    }
    printf("Сумма: %d\n", count);
    count = 0;

    for(int i = 0; i < 15; i++)
    {
        printf("%d ", *(num + i));
        count += *(num + i);
    }
    printf("Сумма: %d\n", count);



    //zad 3

    double a[10];

    for(int i = 0; i < 10; i++){
        a[i] = (double)myRandom(0,100)/100;
        printf("Значение: %.2f Адрес: %p\n", a[i], a+i);
    }



    //zad 4

    char* viva = gatRandomSerialNumber();
    printf("Серийный номер: %s", viva);
    free(viva);

    */

    //zad 5
/*
    char viva[] = {'H','e','l','l','o','!','\0'};
    char* viva2 = reverseString(viva);
    printf("Исходная строка: %s\n", viva);
    printf("Перевёрнутая строка: %s", viva2);
    free(viva2);
*/
    return 0;
}


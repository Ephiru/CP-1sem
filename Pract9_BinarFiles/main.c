#include <stdio.h>
#include <stdlib.h>

struct point
{
    double X;
    double Y;
};

struct pointer
{
    double X;
};
struct point newPinter(double x)
{
    struct point p;
    p.X = x;
    return p;
};

struct point newPont(double x, double y)
{
    struct point p;
    p.X = x;
    p.Y = y;
    return p;
};

int main()
{
    /*
    int count = 4;
    struct point points[count];
    points[0] = newPont(1,1);
    points[1] = newPont(2,-5);
    points[2] = newPont(-1.5,2.76);
    points[3] = newPont(0.273,-0.2893);
    FILE *f = fopen("value.bin", "wb+");//wb - запись длябинарного файла
    //FILE *g = fopen("value.bin", "rb");//nb - для чтение

    if (f==NULL)
    {
        printf("No\n");
        return -1;
    }
    */

    //int x = 0;
    //fread(/*ADRES, SKOLKOCHITAT', KOLICHESTVO, FILE*/&x, sizeof(x), 1, f);
    //printf("%d %x ", x, x);

    //int x = 0x00FFFF05;
    //fwrite(/*ADRES, RAZMER_ELEMENTA, KOLICHESTVO, FILE*/&x, sizeof(x), 1, f);

    //int x[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    //fwrite(x, sizeof(int), 15, f);

    //int x[15];
    //fread(x, sizeof(int), 15, f);

    /*
    int x[5];

    while(fread(x, sizeof(int), 5, f) != 0)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", x[i]);
        }
        printf("\n");
    }
    */

    //fseek(FILE, SMESHENIE, OTKUDA_SMESHAT');
    //OTKUDA_SMESHAT': SEEK_CUR - относительно текущего места
    //SEEK_SET/SEEK_END - относительно начала/конца

    /*
    fwrite(&count, sizeof(int), 1, f);
    fwrite(points, sizeof(struct point), count, f);
    fseek(f, 0, SEEK_SET);

    int count_r = 0;
    struct point points_r[1000];

    fread(&count_r, sizeof(int), 1, f);
    fread(points_r, sizeof(points_r[0]), count_r, f);

    for(int i = 0; i < count_r; i++)
    {
        struct point temp;
        fseek(f, -i * sizeof(struct point), SEEK_END);
        fread(&temp, sizeof(temp), 1, f);
        printf("x: %lf; y: %lf\n", points_r[i].X, points_r[i].Y);
    }
    */
    //fseek(f, -sizeof(struct point) / -1 * sizeof(struct point), SEEK_END); p1 p2 p3 !p4
    //fseek(f, -2 * sizeof(struct point), SEEK_END); p1 p2 !p3 p4

    //fclose(f);

    /*
    FILE *f = fopen("nyancat.gif", "rb");

    char gif[3];
    fread(gif, sizeof(char), 3, f);
    //printf("%c %c %c", gif[0], gif[1], gif[2]);

    short w,h;

    fseek(f, 6, SEEK_SET);

    fread(&w, sizeof(short), 1, f);
    fread(&h, sizeof(short), 1, f);

    printf("%hd x %hd\n", w, h);

    fclose(f);
    */


    //----------------------------------
    /*
    fread(&count_r, sizeof(int), 1, f);
    fread(points_r, sizeof(points_r[0]), count_r, f);
    */
    //----------------------------------

    //zadanie 2

    //zad 2.1

    FILE *f = fopen("value.bin", "wb+");

    int count = 1;
    struct point x[count];
    x[0] = newPinter(1.68);
    fwrite(&x, sizeof(struct pointer), 1, f);
    printf("x: %lf;", x[0].X);

    fclose(f);

    //zad 2.2

    int count = 4;
    struct point x[count];
    x[0] = newPinter(1.68);
    fwrite(&x, sizeof(struct pointer), 1, f);
    printf("x: %lf;", x[i].X);

    fclose(f);

    return 0;
}

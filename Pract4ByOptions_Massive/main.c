#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int myRandom(int min, int max){
     return min + rand() % (max - min + 1);
}

int main()
{
    setlocale(LC_ALL, "Rus");

    //a

    int Gena[90];
    int Snezha[90];
    //printf("Дни Гены");
    int sumGENA;
    int sumSNEZHA;
    int sredGENA[9] = {0};
    int sredSNEZHA[9] = {0};
    for(int i = 0; i < 90; i++)
    {
        Gena[i] = myRandom(2000,50000);
        //sumGENA += Gena[i];
    }
    //sredGENA[0] = sumGENA / 90;
    //printf("Дни Снежи");
    for(int i = 0; i < 90; i++)
    {
        Snezha[i] = myRandom(2000,50000);
        //sumSNEZHA += Snezha[i];
        //printf("%d\n", Snezha[i]);
    }
    //sredSNEZHA[0] = sumSNEZHA / 90;

    //b

    /*
    int g = Gena[0];
    int s = Snezha[0];
    int hg = Gena[0];
    int hs = Snezha[0];
    for(int i = 0; i < 90; i++)
    {
        if (Gena[i] > g){
            g = Gena[i];
        }
        if (Snezha[i] > s){
            s = Snezha[i];
        }
        if (Gena[i] < hg){
            hg = Gena[i];
        }
        if (Snezha[i] < hs){
            hs = Snezha[i];
        }
    */
    //printf("Самый лучщий результат Гены: %d Самый лучший результат Снежи: %d\nСамый худший результат Гены: %d Самый худший результат Снежи: %d\n", g, s, hg, hs);

    //c

    //printf("Финальный результат Гены: %d Финальный результат Снежи: %d\nСредний результат Гены: %d Средний результат Снежи: %d\n", sumGENA, sumSNEZHA, sredGENA[0], sredSNEZHA[0]);

    //d

    printf(" Гена | Снежа| Победитель\n");
    int z1=0;
    int pg = 0;
    int ps = 0;
    for(int k = 10; k < 100; k = k+10)
    {
        int sumGENA1 = 0;
        int sumSNEZHA1 = 0;
        for(int i = k-10; i < k; i++)
        {
            sumGENA1 += Gena[i];
            sumSNEZHA1 += Snezha[i];
        }
        sredGENA[z1] = sumGENA1 / 10.0;
        sredSNEZHA[z1] = sumSNEZHA1 / 10.0;
        if(sredGENA[z1] > sredSNEZHA[z1])
        {
            printf("%d |%d |Гена\n", sredGENA[z1], sredSNEZHA[z1]);
            pg++;
        }
        else if (sredGENA[z1] < sredSNEZHA[z1])
        {
            printf("%d |%d |Снежа\n", sredGENA[z1], sredSNEZHA[z1]);
            ps++;
        }
        else
        {
            printf("%d |%d |Ничья\n", sredGENA[z1], sredSNEZHA[z1]);
        }
        z1++;
    }
    if(pg > ps)
    {
        printf("Победитель Гена!");
    }
    else if (ps > pg)
    {
        printf("Победитель Снежа!");
    }
    else
    {
        printf("Победитель Дружба!");
    }
    return 0;
}

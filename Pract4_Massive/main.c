#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>
int myRandom(int min, int max){
     return min + rand() % (max - min + 1);
}

int main()
{
    setlocale(LC_ALL, "Rus");

    //zad 1

    /*int massiv[20];
    for(int i = 0; i < 20; i++){
        massiv[i] = myRandom(-100,100);
        printf("%d ������� �������: %d\n", i + 1, massiv[i]);
    }*/

    //zad 2

    /*int n;
    scanf("%d",&n);
    int massiv[n];
    int a;

    for(int i = 0; i < n; i++)
    {
        massiv[i] = myRandom(-100,100);
        printf("%d ������� �������: %d\n", i + 1, massiv[i]);
    }

    int b = massiv[0];
    int c = massiv[0];

    for(int i = 0; i < n; i++)
    {
        a += massiv[i];
        if (massiv[i] >= b){
            b = massiv[i];
        }
    if (massiv[i] <= c){
            c = massiv[i];
        }
    }

    //����� ���������
    printf("%d\n", a);
    //������� ��������
    printf("%d\n", a/n);
    // ������������ ��������
    printf("%d\n", b);
    // ����������� ��������
    printf("%d\n", c);*/

    //zad 3

    int massiv1[10];
    int massiv2[10];
    printf("������ ������:\n");
    for(int i = 0; i < 10; i++)
    {
        massiv1[i] = myRandom(-100,100);
        printf("%d ������� �������: %d\n", i + 1, massiv1[i]);
    }
    printf("������ ������:\n");
    for(int i = 9, k = 0; k < 10; k++, i--)
    {
        massiv2[k] = massiv1[i];
        printf("%d ������� �������: %d\n", k + 1, massiv2[k]);
    }

    return 0;
}

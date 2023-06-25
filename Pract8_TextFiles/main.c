#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define nado2 150

char nado[nado2];

void printHint()
{
    puts("1. Помощь");
    puts("2. В верхний регистр");
    puts("3. В нижний регистр");
    puts("4. Удалить N символов");
    puts("5. Зашифровать текст шифром Цеаря со сдвигом N");
    puts("0. Выход");
    clearStdIn();
}

void printHintHelp()
{
    puts("1. Помощь (Вы здесь)");
    puts("2. В верхний регистр (Вписать в файл все символы заглавными)");
    puts("3. В нижний регистр (Вписать в файл все символы прописными)");
    puts("4. Удалить N символов (удалить N количество первых символов)");
    puts("5. Зашифровать текст шифром Цеаря со сдвигом N (Шифр Цезаря — это вид шифра подстановки, в котором каждый символ в открытом тексте заменяется символом, находящимся на некотором постоянном числе позиций левее или правее него в алфавите. Например, в шифре со сдвигом вправо на 3, А была бы заменена на Г, Б станет Д, и так далее)");
}

void clearStdIn()
{
    char br[10];
    gets(br);
}

void ToUpper(FILE *fr, FILE *fw)
{
    while(fgets(nado, nado2, fr) != NULL)
    {
        for(int i = 0; i < nado2; i++)
        {
            nado[i] = toupper(nado[i]);
        }
        fputs(nado, fw);
    }
}

void ToLower(FILE *fr, FILE *fw)
{
    while(fgets(nado, nado2, fr) != NULL)
    {
        for(int i = 0; i < nado2; i++)
        {
            nado[i] = tolower(nado[i]);
        }
        fputs(nado, fw);
    }
}

void deleteN(FILE *fr, FILE *fw, int v)
{

    char slovo[100] = {0};
    for(int i = 0; i < v; i++)
    {
        fscanf(fr, "%c", &slovo[i]);
        printf("%s\n", slovo);
    }
    fputs(slovo, fw);
}

void cesarN(FILE *fr, FILE *fw, int v)
{
    while(!feof(fr))
    {
        char rule;
        fscanf(fr, "%c", &rule);
        if(rule>='a' && rule<='z')
        {
            if(rule + v > 'z')
            {
                rule = (rule + v) - 26;
            }
            else
            {
                rule = (rule + v);
            }
            fputc(rule, fw);
        }
    }
}

void stringReverse(char *str)
{
    char *begin = str;
    char *end = str + strlen(str) - 1;
    while (begin < end)
    {
        char temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    FILE *f = fopen("output.txt", "w");
    FILE *g = fopen("input.txt", "r");
    FILE *bananas = fopen("bananas.txt", "r");
    /*
    if(f==NULL)
    {
        printf("Не можем открыть файл!");
        return -1;
    }
    fputs("Hello, world!",f);

    int first = 0, second = 0, b = 0;
    fscanf(g, "%d\n", &b);

    for(int i = 1; i <= b; i++)
    {
        fscanf(g, "%d %d\n", &first, &second);
        printf("%d * %d = %d\n", first, second, first*second);
        fprintf(f, "%d * %d = %d\n", first, second, first*second);
    }


    int first = 0, second = 0, b = 0, h = 0;
    fscanf(bananas, "%d\n", &b);

    for(int i = 1; i <= b; i++)
    {
        fscanf(bananas, "%d %d\n", &first, &second);
        h += first*second;
    }
    printf("%d", h);


    printf("Введите имя файла\n");
    char x[100];
    scanf("%s", x);
    //FILE *fr = fopen(x, "r");
    FILE *fr = fopen("test.txt", "r");
    FILE *fw = fopen("testOUTPUT.txt", "w");
    printf("Введите действие\n");
    char qwerty;
    do{
    printHint();
    scanf("%c", &qwerty);

    switch(qwerty){
    case '1':
        printHintHelp();
        break;
    case '2':
        ToUpper(fr, fw);
        printf("ГОТОВО!\n");
        break;
    case '3':
        ToLower(fr, fw);
        printf("ГОТОВО!\n");
        break;
    case '4':
        printf("Введите N\n");
        int v;
        scanf("%d", &v);
        deleteN(fr,fw,v);
        printf("ГОТОВО!\n");
        break;
    case '5':
        printf("Введите сдвиг (N)\n");
        int z;
        scanf("%d", &z);
        cesarN(fr,fw,z);
        printf("ГОТОВО!\n");
        break;
    case '0':
        puts("Пока.");
        break;
    default:
        puts("Invalid");
        break;
    }
    }while (qwerty != '0');
    */


    FILE *fileKot = fopen("kotik.txt", "r");
    if(f == NULL)
    {
        printf("Не могу прочитать\n");
        return -1;
    }
    else
    {

        char rule[10000];
        char rules[100];
        char t = strlen(rule);
        int n;
        //do
        //{
            printf("\nЧто вы хотите сделать?\n1.Исходное изображение\n2.Изображение, повернутое на 180 градусов\n3.Изображение, отраженное вертикально\n4.Изображение, отраженное горизонтально\n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                //FILE *fileKot = fopen("kotik.txt", "r");
                while(fgets(rule, 1000, fileKot) != NULL)
                {
                    printf("%s", rule);
                }
                //fclose(fileKot);
                break;
            case 2:
                //FILE *fileKote = fopen("kotik.txt", "r");
                while(fgets(rules, 100, fileKot) != NULL)
                {
                    strcat(rule, rules);
                }
                for(int i = strlen(rule); i != 0; i--)
                {
                    printf("%c", rule[i]);
                }
                //fclose(fileKote);
                break;
            case 3:
            while(fgets(rules, 100, fileKot) != NULL)
            {
                stringReverse(rules);
                strcat(rule, rules);
            }
            for(int i = 0; i < strlen(rule); i++)
            {
                if(rule[i] == '\n')
                {
                    printf("\n");
                }
                else
                {
                    printf("%c", rule[i]);
                }
            }
                break;
            case 4:
            while(fgets(rules, 100, fileKot) != NULL)
            {
                stringReverse(rules);
                strcat(rule, rules);
            }
            for(int i = strlen(rule); i != 0; i--)
            {
                if(rule[i] == '\n')
                {
                    printf("\n");
                }
                else
                {
                    printf("%c", rule[i]);
                }
            }
                break;
            default:
                printf("Invalid");
                break;
            }
        //}
        //while(n!=0);
    }

    fclose(bananas);
    fclose(f);
    //fclose(fr);
    //fclose(fw);
    fclose(g);
    fclose(fileKot);

    return 0;
}

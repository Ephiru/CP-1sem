##include <stdio.h>
#include <stdlib.h>

void strCopy(char dest[], char source[])
{
    int len = strlen(source);
    for(int i = 0; i < strlen(source); i++)
    {
        dest[i] = source[i];
    }
    dest[len] = '\0';
}
void strofchar(char mass[],char simv, int kol){
    for(int i = 0; i < kol; i++){
        mass[i] = simv;
    }
    mass[kol] = '\0';
}
void strCat(char dest[], char source[])
{
    int kl = strlen(dest);
    for(int i = 0; i < strlen(source); i++)
    {
        dest[kl+i] = source[i];
    }
    int kl1 = strlen(dest);
    dest[kl1] = '\0';
}
void ToUpper(char str[])
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}
void ToLower(char str[])
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] + ('A' - 'a');
        }
    }
}
int indexOf(char str[], char symbol){
    int kol = strlen(str);
    int temp;
    for(int i = 0; i < kol; i++){
        if(str[i] == symbol){
            temp = i;
            break;
        } else {
            temp = -1;
        }
    }
    return temp;
}

int contains(char symbol, char symbols[])
{
    for(int j = 0; j < strlen(symbols); j++){
        if(symbol == symbols[j]) return 1;
    }
    return 0;
}
void trim(char text[], char symbols[])
{
    int kol_txt = strlen(text);
    int start, end;
    char temp [strlen(text)];
    for(int i = 0; i < kol_txt; i++)
    {
        if (!contains(text[i], symbols))
        {
            start = i;
            break;
        }
    }
    for(int i = (kol_txt - 1); i >= 0 ;i--)
    {
        if (!contains(text[i], symbols))
        {
            end = i;
            break;
        }
    }
    for(int i = start; i <= end; i++)
    {
        temp[i - start] = text[i];
    }
    temp[end + 1] = '\0';
    strcpy(text,temp);
}
int endsWith(char str[], char sumb[]){
    int kol = strlen(sumb);
    int kols = strlen(str);
    int temps = kol;
    int temp = 0;
    while(kol != 0){
        if(str[kols] == sumb[kol]){
            temp++;
        }
        kol--;
        kols--;
    }
    if(temp == temps){
        return 1;
    }
    else {
        return 0;
    }
}

void decToBin(char result[], int decValue)
{
    int temp1 = 0;
    int temp = 0;

    char mass[100];
    while(decValue > 0){
        temp1 = decValue % 2 + '0';
        decValue = decValue / 2;
        mass[temp] = temp1;
        temp++;
    }
    mass[strlen(mass)] = '\0';


    int kol = strlen(mass);
    int g = strlen(result);
    int ch = 0;
    while(kol != 0){
        result[ch] = mass[kol];
        kol--;
        ch++;
    }
    int kolsss = strlen(result);
     result[kolsss] = '\0';
    printf("%s", result);

}

void myRevesre(char mass[]){
}

int main()
{
    /*char first[] = {'a','b','c','\0'};
    char second[4];
    strCopy(second, first);
    printf("%s\n", first);
    printf("%s", second);
    char fist[100];
    strofchar(fist, 'T', 10);
    printf("%s", fist):
    char first[] = {'a','b','c','\0'};
    char first1[] = {'1','2','3','4','\0'};
    strcat(first,first1);
    printf("%s", first);

    char first[] = {',','_','a','b','_','c',',',',','\0'};
    char first1[] = {'a','b','\0'};
    char se[] = {' ', '_', ',', '\0'};

    trim(first,se);
    //printf("%s", first);
    /*ToUpper(first);
    ToLower(first);
    printf("%s", first);

    //char v = 'a';
    //int otv = indexOf(first, v);
    char bebra[3];
    trim(first, se, bebra);
    printf("%s", bebra);


    char str[] = {'a','b','c','c','d','\0'};
    char check[] = {'c','c','c','\0'};
    if(endsWith(str,check) == 1){
        printf("Good");
    }
    else {
        printf("Bad");
    }
    */
    char res[100];
    decToBin(res, 20);
    printf("%s", res);


    return 0;
}

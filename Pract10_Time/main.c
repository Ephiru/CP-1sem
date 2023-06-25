#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


int main()
{
    /*
    FILETIME ft;
    SYSTEMTIME st;

    ft.dwHighDateTime = 0;
    ft.dwLowDateTime = 0;

    GetSystemTime(&st);
    printf("Date: %d, %d, %d", st.wDay, st.wMonth, st.wYear);
    */

    //printf("%d", sizeof(time_t));

    /*
    time_t t = time(NULL);
    //printf("%lld\n", t);

    //clock_t c = clock();
    //printf("%lld", c);

    struct tm *utc;
    utc = gmtime(&t);

    printf("%d.%d.%d %d:%d\n", utc->tm_mday, utc ->tm_mon+1, utc ->tm_year+1900, utc ->tm_hour, utc ->tm_min);

    struct tm *local;
    local = localtime(&t);

    printf("%d.%d.%d %d:%d\n", local->tm_mday, local ->tm_mon+1, local ->tm_year+1900, local ->tm_hour, local ->tm_min);


    char* tSTR = ctime(&t);
    printf("%s", tSTR);
    */


    //zad 1
    /*
    time_t t = time(NULL);
    struct tm *utc;
    utc = localtime(&t);
    printf("%d.%d.%d %d:%d\n", utc->tm_mday, utc ->tm_mon+1, utc ->tm_year+1900, utc ->tm_hour, utc ->tm_min);
    printf("%lld", t);
    */
    //zad 2

    /*
    time_t t = time(NULL);
    struct tm *utc;
    */
    //a
    /*
    t += 60*60*24*42;
    utc = localtime(&t);
    printf("%d.%d.%d %d:%d\n", utc->tm_mday, utc ->tm_mon+1, utc ->tm_year+1900, utc ->tm_hour, utc ->tm_min);
    */
    //b
    /*
    utc = localtime(&t);
    int den = utc -> tm_wday;
    printf("%d\n", den);
    if(den == 0)
    {
        t += 60*60*24*1;
    }
    else
    {
        t += 60*60*24*(8 - den);
    }
    utc = localtime(&t);
    printf("%d.%d.%d %d:%d\n", utc->tm_mday, utc ->tm_mon+1, utc ->tm_year+1900, utc ->tm_hour, utc ->tm_min);
    */

    //v
    /*
    t += 1000000;
    utc = localtime(&t);
    printf("%d.%d.%d %d:%d\n", utc->tm_mday, utc ->tm_mon+1, utc ->tm_year+1900, utc ->tm_hour, utc ->tm_min);
    */

    //zad 3
    /*
    time_t t = time(NULL);
    struct tm date;
    memset(&date, 0, sizeof(date));

    date.tm_year = 107;
    date.tm_mday = 1;
    date.tm_mon = 0;
    date.tm_hour = 0;
    date.tm_min = 0;


    t = mktime(&date);
    printf("%lld\n", t);
    */

    //zad 4
    /*
    time_t t = time(NULL);
    struct tm *utc;
    utc = localtime(&t);
    int den = utc -> tm_wday;
    int god = utc -> tm_year;
    int dog = god + 1;
    int count = 0;
    while(god != dog)
    {
        t += 60*60*24*1;
        utc = localtime(&t);
        den = utc -> tm_wday;
        god = utc -> tm_year;
        if(god > 122)
        {
            break;
        }
        if(den == 6 || den == 0)
        {
            printf("%d.%d.%d\n", utc->tm_mday, utc ->tm_mon+1, utc ->tm_year+1900);
            count++;
        }
    }
    printf("%d", count);
    */

    //zad 5
    /*
    time_t t = time(NULL);
    struct tm *utc;
    utc = localtime(&t);
    int mden = utc -> tm_mday;
    int den = utc -> tm_wday;
    int god = utc -> tm_year;
    int count = 0;
    while(0 != 1)
    {
        t += 60*60*24*1;
        utc = localtime(&t);
        mden = utc -> tm_mday;
        den = utc -> tm_wday;
        god = utc -> tm_year;
        if(mden == 13 && den == 5)
        {
            printf("%d.%d.%d\n", utc->tm_mday, utc ->tm_mon+1, utc ->tm_year+1900);
            count++;
        }
        if(count == 3)
        {
            break;
        }
    }
    */
    //zad 6
    time_t t = time(NULL);
    struct tm *utc;
    utc = localtime(&t);

    struct tm bd;
    bd.tm_year = 104;
    bd.tm_mday = 26;
    bd.tm_mon = 7;

    int bdDAY = bd.tm_mday;
    int bdMON = bd.tm_mon;
    int bdGOD = bd.tm_year;

    int wrDAY = utc -> tm_mday;
    int wrMON = utc -> tm_mon;
    int wrGOD = utc -> tm_year;

    time_t bid = time(NULL);
    bid = mktime(&bd);

    int age = 0;

    while(1)
    {
        bdDAY = bd.tm_mday;
        bdMON = bd.tm_mon;
        bdGOD = bd.tm_year;
        wrDAY = utc -> tm_mday;
        wrMON = utc -> tm_mon;
        wrGOD = utc -> tm_year;
        bid += 60*60*24*1;
        if(bdDAY == wrDAY && bdMON == wrMON && bdGOD == wrGOD)
        {
            break;
        }
        age++;
    }

    return 0;
}

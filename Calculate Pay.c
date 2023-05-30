//Compiler - Dev C++
#include <stdio.h>
#include <string.h>

int main()
{
    //defined variables
    char name[100], edu[100];
    int work, jam, edu2;
    const int pay = 2000000;
    
    //input
    printf("PROGRAM HITUNG GAJI KARYAWAN\nNama Karyawan: ");
    scanf("%[^\n]", name);
    printf("Golongan Jabatan: ");
    scanf("%d", &work);
    printf("Pendidikan: ");
    getchar();
    scanf("%s", edu);
    printf("Jumlah jam kerja: ");
    scanf("%d", &jam);
    
    //*calculations*
    //work 1,2,3 have increase pay of 5,10,15 % respectively
    if (work==1){work = pay*0.05;}
    if (work==2){work = pay*0.1;}
    if (work==3){work = pay*0.15;}
    
    //strcmp to compare the input strings then add 2.5/5/10 % pay
    //also convert edu into edu2 (strings to integer data type)
    if (strcmp(edu, "SMA") == 0 || strcmp(edu, "sma") == 0){edu2 = pay*0.025;}
    if (strcmp(edu, "D3") == 0 || strcmp(edu, "d3") == 0){edu2 = pay*0.05;}
    if (strcmp(edu, "S1") == 0 || strcmp(edu, "s1") == 0){edu2 = pay*0.1;}
    
    //verify if hours is >8, if so -8 then *3000 for every extra hours.
    //else reset the hours to 0.
    if (jam > 8){jam = 3000*(jam - 8);}
    else jam=0;
    
    //total sum of every variables
    int total = pay + work + edu2 + jam;
    
    //output
    printf("\nNama Karyawan: %s", name);
    printf("\n\tTunjangan Jabatan Rp %d", work);
    printf("\n\tTunjangan Pendidikan Rp %d", edu2);
    printf("\n\tHonor Lembur Rp %d", jam);
    printf("\nTotal Gaji Rp %d", total);
    
    return 0;
    }   
/*
Algorithm and Programming
2502141990 - Muhammad Faza
*/

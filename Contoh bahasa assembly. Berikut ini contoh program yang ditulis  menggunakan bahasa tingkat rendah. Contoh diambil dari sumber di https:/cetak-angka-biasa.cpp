#include <stdio.h>
// karena ada perintah printf maka ... include ini
#define AkhirLooping 7
// untuk mencetak angka 1-7 sesuai banyaknya hari
// karena tidak boleh ada magic number,
// maka dibuat definisi nilai ini
int main (void)
// program bahasa c minimal terdiri dari satu
// fungsi yaitu fungsi main()
{
int bilangan;
// deklarasi variabel bilangan
for (bilangan=1;bilangan<=AkhirLooping;bilangan++)
// membuat looping dari 1-7
{
printf("%d ",bilangan);
// mencetak angka 1 2 3 4 5 6 7
}
printf("\n");
} // akhir fungsi main

./buble
#dwi sakethi 26 agustus 2018
------------------------------------------------------------- */
// menyertakan library untuk mencetak data ke layar
#include <stdio.h>
// misalkan banyaknya data maksimal yang akan diolah ada 100 data
#define jumlah_data_maksimum 100
int main()
{
int banyak_data;
int data[jumlah_data_maksimum];
int data_ke,data_setelah,bilangan_sementara;
// menghapus layar
system("clear");
// menanyakan banyaknya data
printf("Banyaknya data: ");
scanf("%d",&banyak_data);
// looping pemasukan data
for (data_ke=0;data_ke<banyak_data;data_ke++)
{
// memasukkan data ke-?
printf("Masukkan data ke-%d : ",data_ke+1);
scanf("%d",&data[data_ke]);
}
/* pengurutan data dengan metode buble sort */
/* -------------------------------------------------
pembandingan dilakukan dari data pertama
sampai dengan data terakhir-1
karena perbandingan terakhir adalah perbandingan
antara data terakhir-1 dengan data terakhir
0-1 0-2 0-3 0-4
1-2 1-3 1-4

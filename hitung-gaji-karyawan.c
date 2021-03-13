/*  Nama      : Ade Rohdiana
    NIM       : 2401990255
    Prodi     : S1 Teknik Informatika
    Pembuatan : 13 Maret 2020
    Program   : Hitung gaji karyawan menggunakan Bahasa C
 */
#include <stdio.h>

main(){
    // variable
    int gajiTotal, gajiPokok, tunjanganJabatan, tunjanganPendidikan;
    unsigned int jam, lembur, jabatan;
    char nama[30], pendidikan[10];

    // input
    printf("<--------------------------------------------->\n");
    printf("PROGRAM HITUNG GAJI KARYAWAN\n");
    printf("\n");
    printf("Nama Karyawan: ");
    scanf("%[^\n]%*c", nama);
    printf("Golongan Jabatan: ");
    scanf("%d",&jabatan);
    printf("Pendidikan: ");
    scanf("%s",&pendidikan);
    printf("Jumlah jam kerja: ");
    scanf("%d",&jam);

    //proses
    gajiPokok = 2000000;
    if (jabatan == 1){
        tunjanganJabatan = (gajiPokok*5)/100;
    }
    else if (jabatan == 2){
        tunjanganJabatan = (gajiPokok*10)/100;
    }
    else if (jabatan == 3){
        tunjanganJabatan = (gajiPokok*15)/100;
    }
    else{
        tunjanganJabatan = 0;
    }
 
    if(strcmp(pendidikan, "SMA") == 0){
        tunjanganPendidikan = (gajiPokok*2.5)/100;        
    } 
    else if(strcmp(pendidikan, "D3") == 0){
        tunjanganPendidikan = (gajiPokok*5)/100;        
    }
    else if(strcmp(pendidikan, "S1") ==  0){
        tunjanganPendidikan = (gajiPokok*10)/100;        
    }
    else{
        tunjanganPendidikan = 0;
    }

    if (jam < 8){
        jam = 0;
    }
    else{
        jam = jam - 8;
    }
    lembur = jam*3000;

    gajiTotal = gajiPokok + tunjanganJabatan + tunjanganPendidikan + lembur;

    // output
    printf("\n");
    printf("Nama Karyawan %s\n",nama);
    printf("Tunjangan Jabatan Rp. %d\n", tunjanganJabatan);
    printf("Tunjangan Pendidikan Rp. %d\n", tunjanganPendidikan);
    printf("Honor lembur Rp. %d\n", lembur);
    printf("Total Gaji Rp. %d\n", gajiTotal);
    printf("<--------------------------------------------->\n");
}
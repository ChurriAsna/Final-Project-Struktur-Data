#include <iostream>
#include <malloc.h>
#include <stdlib.h>
FILE *x, *y;
using namespace std;

typedef struct {
  char nama[50], 
  char judul[100],
  char no[20],
  int nobook;
}data;

typedef struct{
  int belakang,
  data elemen [100];
}typequeue

typequeue queue;

void ambilfile();
void enqueue(data ib);
void dequeue();
void gantidata (int noganti);
void buatqueue();
void hapusdata();
void cetakqueue();
void caridata(int cari);
void hapus();
void updatedata();

void buatqueue(){
  queue.belakang= 0;
}

void hapus(){
  int x;
  int i;
  cetakqueue();
  cout<<"\nHapus No Antrian : ";
  cin>>x;
  for(i=x;i<queue.belakang;i++){
    queue.element[i]=queue.element[i+1];
  }
  queue.belakang--;
  hapusdata();
  updatedata();
}

void hapusdata(){
  char file[50]="file.txt";
  x=fopen("file.txt","w");
  remove(file);
  fclose(x);
}

void ambilfile(){
  queue.belakang=0;
  y=fopen("file.txt", "r");
  int j=1;
  while(!feof(y))
    {
      fread(&queue.elemen[j], sizeof(queue.elemen[j]), 1, y);
      queue.belakang++;
      j++;
    }
    fclose(y);
}

void enqueue(data ib){
  x=fopen("file.txt","a");
  fwrite(&ib,sizeof(ib),1,x);
  fclose(x);
}

void dequeue(){
  inti;
  ambilfile();
  for(i=1;i<enqueue.belakang;i++)
  {
    queue.elemen[i]=queue.elemen[i+1];
  }
  queue.belakang--;
  hapusdata();
  updatedata();
}

void gantidata(int noganti){
  data ganti;
  bool x=0;
  ambilfile();
  for(int i=1;i<queue.belakang.;i++)
    {
      if(queue.elemen[i).nobook==noganti)
      {
        cout<<"Ubah data menjadi\n";
        cout<<"Nama Peminjam :";
        cin.ignore();
        cin.getline(ganti.nama,50);
        cout<<"No Buku:";
        cin>>ganti.nobook;
        cout<<"Judul Buku :";
        cin.getline(ganti.judul,100);
        cout<<"No Telp :";
        cin>>ganti.no;
        queue.elemen[i]=ganti;
        x=1;
      }
    }
    if(x==0)
    {
      cout<<"Data Tidak Ditemukan";
      queue.elemen[i]=ganti;
      x=1;
    }
}
int main() {
  int pilih,x,y,cari,noganti;
  data in;
  buatqueue();
  do(){
    cout<<"==========================================================\n";
    cout<<"Final Project Struktur Data Kelompok 8\n";
    cout<<"==========================================================\n";
    cout<<"==========================================================\n";
    cout<<"Anggota kelompok :\n";
    cout<<"1. Churri Asna Fatchiyah (21081010156)\n";
    cout<<"2. Chiristian K (21081010169)\n";
    cout<<"3. Aura Choirun Nisa (21081010173)\n";
    cout<<"4. Rena Rama Rosalinda (21081010190)\n";
    cout<<"5. Najwa Laila Anggraini (21081010191)\n";
    cout<<"6. Aqiilah Zayyaan Syihab (21081010239)\n";
    cout<<"==========================================================\n\n";
  cout<<"================Program Antrian Perpustakaan==================\nMenu :\n";
  cout<<"1. Inputdata\n2. Hapus Data\n3. Cek Data\n4. Cari Data\n5. Update Data\n";
  cout<<"Masukkan Pilihan : ";
  cin>>pilih;
  system("cls");
}

#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main(){

	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"                                      SELAMAT DATANG\n";
	cout<<"                                           DI\n";
	cout<<"                              Program KUIS Seputar virus Corana\n";
	cout<<"                         =============================================\n";
	cout<<"                                      Silahkan Login!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "atha" && pass == "atha")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN  BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"==================================================================\n";
	cout<<"1. Organ apa yang di serang oleh virus covid-19 pada manusia?\n";
	string pilgan1[50]={"a. paru-paru","b. hati","c. jantung ","d. lambung"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"=================================================================\n";        
cout<<"2. Sebelum virus covid-19 menyerang paru-paru dimanakah pertama virus tersebut singgah pada organ manusia ?\n";
    string pilgan2[50]={"a. Rambut","b. Tangan","c. Lambung","d. Tenggorokan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
    cout<<"===================================================================\n";        
	cout<<"3. Dari negara manakah virus tersebut pertama kali muncul?\n";
	string pilgan3[50]={"a. hongkong","b. india","c. cina","d. amerika"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"====================================================================\n";				
	cout<<"4. Gejala apa saja yang timbul ketika seseorang terpapar covid-19 ?\n";
	string pilgan4[50]={"a. diare","b. muntah-muntah","c. sakit kepala","d. batuk,demam,dan sesak nafas"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
    cout<<"========================================================================\n";       
cout<<"5.Bagaimana cara mencegah Covid-19 masuk ke tubuh,kecuali \n";
    string pilgan5[50]={"a. tidak menggunakan masker ketika berada dikeramaian","b. Rajin mencuci tangan","c. Menjaga imunitas","d. stay at homme"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"6. Berapa masa inkubasi virus tersebut ?\n";
	string pilgan6[50]={"a. 1 minggu","b. 2 minggu","c. 3 minggu","d. 4 minggu"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. Siapakah orang yang rentan terkena Virus Corona ?\n";
	string pilgan7[50]={"a. Lansia","b. memiliki riwayat penyakit berat","c. orang dengan imun rendah ","d. Semua jawaban benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. Bagaimana orang yang terpapar covid bisa sembuh?\n";
	string pilgan8[50]={"a. olahraga","b. Dengan menjaga imun tubuhnya","c. makan yang banyak ","d. sering beraktifitas"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9. Apa dampak negara di sebabkan oleh virus tersebut ?\n";
	string pilgan9[50]={"a. melemahnya ekonomi suatu negara","b. banyak terjadi orang kelaparan","c. tingkat pengangguran meningkat","d. semua benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. Bagaimana pemerintah indonesia bertindak tentang virus corona ini ?\n";
	string pilgan10[50]={"a. tidak melakukan tindakan apa-apa","b. membiarkan masrakat braktifitas bebas","c. membuat obat antivirus","d. Menerapkan psbb(pembatasan sosial bersekala besar) "};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"PerolehanNilai :"<<endl;
		nilai = benar*10;
		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
		cout<<"    Skor Nilai   : "<<nilai<<"\n"<<endl;
			selesai :
			cout<<"==========================="<<endl;
			cout<<"Program Selesai, Terimakasi\n";
			cout<<"==========================="<<endl;
	
}

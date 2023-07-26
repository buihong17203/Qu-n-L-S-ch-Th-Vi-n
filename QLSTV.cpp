#include"iostream"
#include"conio.h"
#include"string.h"
#include"iomanip"
#include"string.h"
using namespace std;
 
struct book
{
	int MaS;
	string TenTG , TenSach;
	double Sachtrongkho , Sachngoaikho , Tongsach;
};

book bo[1000];

//Ham nhap thong tin cho sach
void nhap(book bo[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n Ten Sach "<<i+1<<": "<<endl;
		
		cout<<"\n Ma Sach "<<i+1<<": ";cin>>bo[i].MaS;
			fflush(stdin); //xoa bo ho dem
		cout<<"\n Ten Tac Gia: ";getline(std::cin,bo[i].TenTG);
		
		cout<<"\n So Sach Trong Kho: ";cin>>bo[i].Sachtrongkho;
		
		cout<<"\n So Sach Ngoai Kho: ";cin>>bo[i].Sachngoaikho;
		bo[i].Tongsach = (bo[i].Sachtrongkho + bo[i].Sachngoaikho);
		cout<<"\n Tong So Sach: ";cin>>bo[i].Tongsach;
	}	
}

//xuat danh sach 
void xuat(book bo[],int n)
{
	cout<<"\MaSach:";
	cout<<setw(50)<<"TenSach"<<setw(50)<<"TenTG";
	cout<<setw(50)<<"Sachtrongkho"<<setw(10)<<"Sachngoaikho";
	cout<<setw(50)<<"Tongsach";
	
	for(int i=0;i<n;i++)
	{
		cout<<""<<setw(50)<<bo[i].MaS<<setw(50)<<bo[i].TenSach;
		cout<<""<<setw(50)<<bo[i].TenTG;
		cout<<""<<setw(50)<<bo[i].Sachtrongkho<<setw(50)<<bo[i].Sachngoaikho<<setw(50)<<bo[i].Tongsach<<endl;
	}
}

int main()
{
	int option,n;
	cout<<"\n Nhap so luong Sach: ";
	cin>>n;
	while(n>0)
	{
		
	cin>>option;
	switch(option)
		{
		case 1:
			cout<<"* Moi nhap thong tin Sach: \n";
			nhap(bo,n);
			cout<<"Bam phim bat ki de tiep tuc: ";
			system("pause");
			break;
		case 2:
			if(n>0)
			cout<<"Danh sach Sach: \n";
			xuat(bo,n);
			cout<<"Bam phim bat ki de tiep tuc: ";
			system("pause");
			break;
				
		default:
		return 0;
		}
	}
}

#include"iostream"
#include"conio.h"
#include"string.h"
#include"iomanip"
#include"string.h"
using namespace std;

struct Sach
{
// MaS , TenS , TenTacGia , NgayNhap , LoaiSach , SoTrang , TenNXB , MaNXB , GiaSach , SoLuongSachTrongKho , SoLuongSachNgoaiKho , TongSoLuongSach 
	int MaS , MaNXB ,SoTrang , GiaSach ; 
	string TenTacGia , LoaiSach , TenS , TenNXB ;
	double SoLuongSachTrongKho , SoLuongSachNgoaiKho , TongSoLuongSach;
};

Sach bo[10000]

//ham nhap du lieu cho struct sach
void nhap(Sach bo[],int n)
{
	for(int i=0;i<=n;i++)
	{
		cout<<"Ma Sach "<<i+1<<": ";cin>>bo[i].MaS<<endl;
		cout<<"Ten Sach: ";
		cout<<
	}
}
	
int main()
{
	
}

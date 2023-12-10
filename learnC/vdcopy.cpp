#include<conio.h>
#include<stdio.h>
#include<string.h>

struct sinhvien
{
	char hvt[100], mssv[100];
	int namsinh, ngaynghi;;
	float dtb;

};
void nhap(sinhvien &a);
void xuat(sinhvien a);/*
void nhapmangsv(sinhvien a[], int &n);
void xuatmangsv(sinhvien a[], int n);*/
int main()
{
	sinhvien a;
	nhap(a);
	xuat(a);
	//int n;
	//printf("\nNhap so luong sinh vien: \n");
	//scanf_s("%d", &n);
	//nhapmangsv(a, n);
	//xuatmangsv(a, n);
	_getch();
}
void nhap(sinhvien &a)
{
	printf("Nhap ho va ten sv: ");
	gets_s(a.hvt);
	printf("Nhap MSSV: ");
	gets_s(a.mssv);
	printf("Nhap nam sinh: ");
	scanf_s("%d", &a.namsinh);

	printf("Nhap diem trung binh: ");
	scanf_s("%f", &a.dtb);

	printf("Nhap so ngay nghi: ");
	scanf_s("%d", &a.ngaynghi);

}
void xuat(sinhvien a)
{
	printf("Thong tin Sv vua nhap: ");
	printf("\nHo va ten: %s", a.hvt);
	printf("\nMSSV: %s", a.mssv);
	printf("\nNam sinh: %d", a.namsinh);
	printf("\nDiem trung binh: %.2f", a.dtb);
	printf("\nSo ngay nghi: %d", a.ngaynghi);


}
//void nhapmangsv(sinhvien a[], int &n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("Nhap sinh vien thu %d\n", i + 1);
//		nhap(a[i]);
//	}
//}
//void xuatmangsv(sinhvien a[], int n)
//{
//	printf("Danh sach lop hoc");
//	for (int i = 0; i < n; i++)
//	{
//		xuat(a[i]);
//	}
//
//
//}

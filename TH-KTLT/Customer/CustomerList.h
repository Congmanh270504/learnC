#ifndef CustomerList_h
#define CustomerList_h

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

struct KhachHang
{
	char name[30], phoneNum[13], movieName[40], watchRoom[30],showTime[30];
	int adultTicket, kidTicket;
	long int money;
	;
};
typedef KhachHang Kh;

void menu();

void deleteEndLine(char s[]);
void fixScanf();

void setTTSV(Kh &a);// nhap TTKH
void getTTKH(Kh &a);// xuat TTKH

void fixTTSVLongName(Kh& a);// xuat TTKH vs ten dai hon 17
void fixSon(Kh& a);
void fixTTSVLongMoiveName(Kh& a);
void fixSon(Kh& a);
void fixQuy(Kh& a);

void getTTSVFile(FILE *fi, Kh &a);// doc TTKH
void updateTTSVFile(FILE *fo, Kh &a);// ghi THKH

void readFileCustomer(const char*filename, Kh *&a, int &n);
void writeFileCustomer(const char*filename, Kh *&a, int &n);

void prinfCustomerArray(Kh *a, int &n);
// Practice
int checkMoneyTheater(Kh*& a, int& n);
int getMoney(Kh& a);

void getMoneyCustomer(Kh*& a, int& n);
int getRevenue(Kh*& a, int& n);

int checkMoneyMovieName(Kh*& a, int& n, char* movieName);
void getSumMoneyMovie(Kh*& a, int& n);



#endif //


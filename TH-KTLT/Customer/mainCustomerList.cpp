//#include"CustomerList.h"
//int main() {
//	const char* fi = "input-CustomerList.txt";
//	//const char *fo = "output-CustomerList.txt";
//
//	KhachHang* a = NULL;
//	int luachon, n;
//	long int result;
//	readFileCustomer(fi, a, n);
//	printf("\nDanh sach khach hang vua load tu FILE: \n");
//	prinfCustomerArray(a, n);
//	do
//	{
//		menu();
//		printf("\t\tNhap lua chon bai muon lam: ");
//		scanf("%d", &luachon);
//		fixScanf();
//		if (luachon < 0 || luachon>10)
//		{
//			printf("Khong co bai muon lam!!\n");
//		}
//		switch (luachon)
//		{
//		case 1:
//			
//				printf("Khoan thanh toan cua khach hang: \n");
//				getMoneyCustomer(a, n);
//				prinfCustomerArray(a, n);
//
//			break;
//		case 2:
//			/*if (a == NULL)
//			{
//				printf("\t\tChua mo dan sach !! (Hay chon option 1 )\n");
//
//			}
//		else
//		{
//			
//		}*/
//		if (!checkMoneyTheater(a, n))
//		{
//			printf("Vui long tinh tien cho moi khach hang!! (*Choose option 1)");
//		}
//		else
//		{
//			result = getRevenue(a, n);
//			printf("\t\tTong tien cua rap phim: %ld VND\n", result);
//		}
//			break;
//		case 3:
//			if (!checkMoneyTheater(a, n))
//			{
//				printf("Vui long tinh tien cho moi khach hang!! (*Choose option 1)");
//			}
//			else
//			{
//				getSumMoneyMovie(a, n);
//
//			}
//			break;
//			/*case 3:
//				printf("Danh sach cac sinh vien:\n");
//				xuatMang1Chieu_SV(a, n);
//				break;
//			case 4:
//				if (a == NULL)
//				{
//					printf("Mang SV chua duoc khoi tao!!\n(Hay chon option 1 2 )\n");
//
//				}
//				else
//				{
//					intertchangeSortWithName(a, n);
//					xuatMang1Chieu_SV(a, n);
//					ghiMang1ChieuSoNguyen(fo, a, n);
//				}
//				break;
//			case 5:
//				if (a == NULL)
//				{
//					printf("Mang SV chua duoc khoi tao!!\n(Hay chon option 1 2 )\n");
//				}
//				else {
//					printf("Nhap MSSV muon tim: ");
//					fflush(stdin);
//					gets_s(pMSSV);
//					printf("Danh sach cac sinh vien co MSSS:%s la:\n", pMSSV);
//					result = findMSSV_InterchangeSort(a, n, pMSSV);
//					if (result != -1)
//					{
//						xuatTTSV(a[result]);
//					}
//					else
//					{
//						printf("Khong co thong tin Sv!! ");
//					}
//				}
//				break;
//			case 6:
//				if (a == NULL)
//				{
//					printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2 )\n");
//				}
//				else {
//
//					printf("Nhap ten Sv muon tim: ");
//					fflush(stdin);
//					gets_s(pten);
//					printf("Danh sach cac sinh vien co ten %s la:\n", pten);
//					result = findName_InterchangeSort(a, n, pten);
//					if (result != -1)
//					{
//						xuatTTSV(a[result]);
//					}
//					else
//					{
//						printf("Khong co thong tin Sv!! ");
//					}
//				}
//				break;
//
//			case 7:
//				if (a == NULL)
//				{
//					printf("Mang chua duoc khoi tao!!\n(Hay chon option 1 2 )\n");
//				}
//				else
//				{
//					intertchangeSortWithName(a, n);
//					xuatMang1Chieu_SV(a, n);
//					printf("Nhap ten muon tim: ");
//					fflush(stdin);
//					gets_s(pMSSV);
//					result = findName_BinarySort(a, n, pten);
//					if (result != -1)
//					{
//						xuatTTSV(a[result]);
//					}
//					else
//					{
//						printf("Khong co thong tin Sv!! ");
//					}
//				}
//				break;*/
//		case 0:
//			return 0;
//		}
//	} while (luachon >= 0 && luachon <= 10);
//
//	/*printf("\n%s\n", a[7].phoneNum);
//	printf("%d", strlen(a[7].phoneNum));*/
//
//
//	_getch();
//}
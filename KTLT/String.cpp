//#include"String.h"
//
//int countSpace(char s[])// Dem khoang trang trong chuoi 
//{
//	int count = 0;
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if (s[i] == ' ')// neu ma vi tri do no bang space
//		{
//			count++;// tang bien dem
//		}
//	}
//	return count;
//}
//// *Luu y: khoang trang ki hieu la ' '
//void deleteIndex(char s[], int index)// xoa phan tu o vi tri nao do
//{
//	int len = strlen(s);// lm 1 bien tam 
//	for (int i = index; i < len; i++)
//	{
//		s[i] = s[i + 1];// cho chay vong for neu ma tim thay thi cai phan tu tiep theo ghi de len
//	}
//	s[len - 1] = '\0';// phan tu cuoi = NULL
//}
//void deleteExtraSpace(char s[])// Xoa khoang trang thua
//{
//	int len = strlen(s), count = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == ' ' && s[i + 1] == ' ')// neu ma co 2 vi tri lien tiep nhau ma la khoang trang 
//		{
//			deleteIndex(s, i);// xoa o cai vi tri thu i di
//			i--;// pai co i-- boi vi sau khi ghi de ki tu truoc len ki tu sau thi cai phan tu cuoi no se ve null va luc do vong for chay lai i sẽ 
//			// ko đc tăng lên bởi vì nếu nó tăng lên thì nó tạo ra khoảng trắng dư ở cuối mà lúc cái đk 2 khoảng trắng liên tiếp sẽ ko chạy 
//			// nếu rùa thì nó còn dư 1 khoảng trắng sẽ chạy xuống dòng xóa trắng cuối nếu mà xui ở cuối có số khoảng trắng >=2 thì sai 
//			count++;
//		}
//	}
//	if (s[0] == ' ')
//	{
//		deleteIndex(s, 0);// nếu có khoảng trắng ở đầu thì xóa nó đi, truyền vào là cái idex nhá chứ ko pải s[i] vì truyền vậy sẽ là truyền cái giá trị nó vô cái hàm deleteIndex nó 
//		// sẽ ko chạy vòng for mà dẫn đến sai kq
//	}
//	if (s[strlen(s) - 1] == ' ')
//	{
//		deleteIndex(s, strlen(s) - 1);// tương tự là xóa cuối nhớ là truyền vào index 
//
//	}
//}
////================================================= Doi chu dau thanh in va chu trong cau thanh thuong =================================================
//void LowerUper(char s[])
//{
//	int len = strlen(s);
//	if (s[0] >= 97)
//	{
//		s[0] -= 32;
//	}
//	for (int i = 1; i < len; i++)
//	{
//		if (s[i - 1] == ' ' && s[i] >= 97)
//		{
//			s[i] -= 32;
//			i++;
//		}
//		if (s[i - 1] == ' ' && s[i] <= 97)
//		{
//			continue;
//		}
//		else if (s[i] != ' ' && s[i] <= 90)
//		{
//			s[i] += 32;
//		}
//
//	}
//}
////================================================= Tim chuoi con trong chuoi cha =================================================
//int findName(char s[], char name[])
//{
//	if (strstr(s, name))
//	{
//		return 1;
//	}
//	return 0;
//}
////================================================= Tach chuoi ten ra khoi chuoi ho ten =================================================
//int findLastSpace(char s[])// lay ra dau cach cuoi cung
//{
//	int len = strlen(s);
//	for (int i = len; i >= 0; i--)
//	{
//		if (s[i] == ' ')
//		{
//			return i;
//		}
//	}
//}
//void getLastName(char name[], int lenName, int lastSpace)
//{
//	printf("Ho : ");
//	for (int i = 0; i < lenName; i++)
//	{
//		printf("%c", name[i]);
//	}
//}
//void getFirstName(char s[], char name[5])// ham lay ra ten trong chuoi cha
//{
//	int len = strlen(s), j = 0;
//	int lastSpace = findLastSpace(s) + 1;
//	for (int i = lastSpace; i < len; i++)
//	{
//		name[j] = s[i];
//		j++;
//	}
//	int k = strlen(name);
//	//name[strlen(name)+1] = '\0';
//	int lenName = len - lastSpace;
//	printf("Ten nhan vat: ");
//	for (int i = 0; i < lenName; i++)
//	{
//		printf("%c", name[i]);
//	}
//
//
//}
////================================================= Chen chuoi o vi tri x =================================================
//void insertString(char s[], char string2[], int x)
//{
//	int len = strlen(s) + strlen(string2), j = 0;// chinh lai do dai cho chuoi va tao 1 bien dem toan cuc j
//	int lenString2 = strlen(string2);
//
//	s[len + 1] = '\0';
//	for (int i = strlen(s); i >= x; i--)// cho no chay tu vi tri cuoi cung 
//	{
//		s[i + lenString2] = s[i];// ki tu o vi tri thu i sẽ ghi đè lên kí tự thứ i + strlen(string2) vì để cho nó nhô ra khoảng cần thêm
//	}
//	for (int i = x; i < len; i++)
//	{
//		s[i] = string2[j];// ghi de ki tu thu j cua chuỗi string2 vào chuỗi 1
//		j++;
//		if (j == lenString2)// nếu j độ dài strlen(string2) thì break <-> nó như là đk đừng cho số lần lặp
//		{
//			// giả sử có 2 kí tự thì có 2 lần lặp ,4 lần thì 4 lần lặp,n thì n lần
//			break;
//		}
//	}
//	puts(s);
//}
////================================================= Xóa chuỗi x trong chuỗi   =================================================
//int getIndexDelete(char s[], char string2[])
//{
//	int len1 = strlen(s), len2 = strlen(string2), count = 0, j = 0;
//	for (int i = 0; i < len1 - len2; i++)
//	{
//		for (int j = 0; j < len2; j++)
//		{
//			if (s[i + j] == string2[j])
//			{
//				count = i;
//			}
//		}
//	}
//	return count;
//}
//void deleteString(char s[], char string2[])
//{
//	int index = getIndexDelete(s, string2), len = strlen(s) - strlen(string2), len2 = strlen(string2), len1 = strlen(s);
//	for (int i = index; i < len; i++)
//	{
//		s[i] = s[i + len2];
//	}
//	for (int i = len1 - 1; i >= len; i--)
//	{
//		s[strlen(s) - 1] = '\0';
//	}
//	deleteExtraSpace(s);
//	puts(s);
//}
////================================================= Tim ki tu xuat hien nhieu nhat trong chuoi   =================================================
//int findChar(char s[], char x)
//{
//	int count = 0, len = strlen(s);
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == x)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int charWithAppearTime(char s[], char string2[])
//{
//	int max = findChar(s, s[0]);
//	int value = 0, len = strlen(s);
//	for (int i = 1; i < len; i++)
//	{
//		if (max < findChar(s, s[i]))
//		{
//			max = findChar(s, s[i]);
//		}
//	}
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = i + 1; j < len; j++)
//		{
//			if (s[i] == s[j])
//			{
//				value++;
//			}
//		}
//		if (value == max)
//		{
//			return i;
//		}
//	}
//	return 0;
//}
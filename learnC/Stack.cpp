//#include<conio.h>
//#include<stdio.h>
////============================================= Khai báo cái stack =============================================
//struct Node
//{
//	int data;
//	Node* Next;
//};
//struct Stack // khai báo cấu trúc stack như của danh sách liên kết đơn chỉ khác là stack chỉ có top chứ có bottom
//{
//	Node* Top;
//};
////============= Khởi tạo cái stack =================== 
//void khoitao(Stack& s);
//Node* createNote(Stack& s, int x);
//bool Isemty(Stack s);
//bool Push(Stack &s, int x);
//bool Pops(Stack& s);
//bool getTop(Stack s);
//void Input(Stack &s, int n);
//void Output(Stack s);
//
//int main()
//{
//	Stack s;
//	khoitao(s);
//	int n, m;
//	printf("Nhap so luong phan tu: ");
//	scanf("%d", &n);
//	Input(s, n);
//
//	Output(s);
//	/*printf("\nNhap phan tu moi muon them vao: ");
//	scanf("%d", &m);
//	Push(s, m);
//	Output(s);*/
//
//	/*printf("\nLay phan tu dau ra khoi danh sach ");
//	int g = Pops(s);
//	printf("\nPhan tu da lay ra khoi danh sach la : %d \n", g);
//	Output(s);*/
//
//	/*int g = getTop(s);*/
//	printf("\nLay ra phan tu dau:%d ", s.Top->data);
//	getch();
//}
//void khoitao(Stack& s)
//{
//	s.Top = NULL; // Cho cái stack nó đầu là rỗng (tạo cái thùng )
//}
////============= Kiểm tra xem cái stack có rỗng không ? =================== 
//bool Isemty(Stack s)
//{
//	if (s.Top == NULL)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//Node* createNote(Stack& s, int x)
//{
//	Node* p = new Node;
//	if (p == NULL)// Kiểm tra xem có tạo đc cái node P k 
//	{
//		return 0;
//	}
//	/*else if (s.Top == NULL)
//	{
//		p = s.Top;
//	}*/ // nếu để cái code ở đây nó sẽ tạo ra cái đúng vs cái đk rằng là s.Top=NULL nó chạy vô và bỏ qua dòng dưới 
//	// thứ 2 là nó lúc nào cx sẽ tạo cái node ko có giá trị và cứ gắn vô cái s.Top nên khi xuất sẽ k đc 
//	else
//	{
//		p->data = x;
//		p->Next = NULL;
//	}
//	return p;
//}
////============= Thêm vào đầu cái stack (cái thùng sách) =================== 
//bool Push(Stack &s, int x)
//{
//	Node *p = createNote(s, x);
//	if (Isemty(s) == true)// xem cái Stack rỗng ko 
//	{
//		s.Top = p;// Rỗng thì top=p
//	}
//	else
//	{
//		p->Next = s.Top;// hàm thêm vào đầu
//		s.Top = p;
//
//	}
//	return true;
//}
////============= Lấy Node đầu ra khỏi cái stack và giữ lại data của cái stack  =================== 
//bool Pops(Stack& s)
//{
//	if (Isemty(s) == true)
//	{
//		return false;
//	}
//	else
//	{
//		int x; // cái biến để lưu giá trị
//		Node* p = s.Top; // tạo 1 cái node p lm thế mạng cho cái s.Top 
//		s.Top = s.Top->Next;// p chỏ tới cái sau của s.Top lấy địa chỉ của nó
//		x = p->data;// lưu ý là nhớ giữ lại cái data của p r mới xóa nha
//		delete p;// xóa nó đi
//	}
//}
////============= Lấy data đầu cái stack (cái thùng sách) =================== 
//
//bool getTop(Stack s)
//{
//	int x;
//	if (Isemty(s) == true)
//	{
//		return false;
//	}
//	x = s.Top->data;
//	return true;
//
//}
//void Input(Stack &s, int n)
//{
//
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		printf("Phan tu thu %d : ", i + 1);
//		scanf("%d", &x);
//		Push(s, x);
//	}
//}
//void Output(Stack s)
//{
//	printf("Danh sach cac phan tu : ");
//	for (Node* k = s.Top; k != NULL; k = k->Next)
//	{
//		printf("\t%d", k->data);
//	}
//}

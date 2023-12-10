//#include<conio.h>
//#include<stdio.h>
////============================================= Khai báo cái Queue =============================================
//struct Node
//{
//	int data;
//	Node* Next;
//};
//struct Queue // khai báo cấu trúc Queue như của danh sách liên kết đơn chỉ khác là Queue chỉ có top chứ có bottom
//{
//	Node* Head;
//	Node* Tail
//};
////============= Khởi tạo cái Queue =================== 
//void khoitao(Queue& q);
//Node* createNote(Queue& q, int x);
//bool Isemty(Queue q);
//bool Push(Queue qs, int x);
//bool Pops(Queue& q);
//bool getTop(Queue q);
//void Input(Queue &, int n);
//void Output(Queue q);
//
//int main()
//{
//	Queue s;
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
//void khoitao(Queue& s)
//{
//	q.Head = NULL; // Cho cái Queue nó đầu là rỗng (tạo cái thùng )
//	q.Tail = NULL;
//}
////============= Kiểm tra xem cái Queue có rỗng không ? =================== 
//bool Iqemty(Queue s)
//{
//	if (s.Top == NULL)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//Node* createNote(Queue& s, int x)
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
////============= Thêm vào đầu cái Queue (cái thùng sách) =================== 
//bool Push(Queue &s, int x)
//{
//	Node *p = createNote(s, x);
//	if (Isemty(s) == true)// xem cái Queue rỗng ko 
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
////============= Lấy Node đầu ra khỏi cái Queue và giữ lại data của cái Queue  =================== 
//bool Pops(Queue& s)
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
////============= Lấy data đầu cái Queue (cái thùng sách) =================== 
//
//bool getTop(Queue s)
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
//void Input(Queue &s, int n)
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
//void Output(Queue s)
//{
//	printf("Danh sach cac phan tu : ");
//	for (Node* k = s.Top; k != NULL; k = k->Next)
//	{
//		printf("\t%d", k->data);
//	}
//}

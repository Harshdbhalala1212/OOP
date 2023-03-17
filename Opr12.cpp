class Box
{
 	int a,b;
 	public:
 			void set()
 			{
 				cout<<"Enter a & b value:";
 				cin>>a>>b;
 			}
 			void get()
 			{
				cout<<"a="<<a<<endl;
 				cout<<"b="<<b<<endl;
 			}
 			void operator+(Box b3)
 			{
 				int c,d;
 				c= a+b3.a;
 				d= b+b3.b;
 				cout<<"c="<<c<<endl;
 				cout<<"d="<<d<<endl;
 			}
};
void main()
{
	clrscr();
	Box b1,b2;
	b1.set();
	b2.set();
	//b1.operator+(b2);
	b1+b2;
	getch();
}

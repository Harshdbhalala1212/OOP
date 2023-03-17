class A
{
	public:
			void set()
			{
				cout<<"Set function of a Class";
			}
};

class B: public A
{
    public:
    		void set()
    		{
    			cout<<"set function of B class";
    		}
};

void main()
{
  clrscr();
   B b;
   b.set();
  getch();
}

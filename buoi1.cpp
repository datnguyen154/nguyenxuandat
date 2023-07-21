#include <iostream>
using namespace std;
class PS {
	private:
		int ts,ms;
	public:
	   void nhap(){
	   	 cout <<"Nhap tu so: ";
	   	 cin>>ts;
	   	 cout<<"Nhap mau so: ";
	   	 cin>>ms;
	   	 while (ms==0){
	   	 	cout<< "-> Khong hop le, hay nhap lai: ";
	   	 	cin>>ms;
			}	
	   }
	   void xuat();	
};
 void PS::xuat(){
 	cout<<ts<<"/"<<ms<<endl;
 }
int main ()
{
	PS a;
	a.nhap();
	a.xuat();
    return 0;
}

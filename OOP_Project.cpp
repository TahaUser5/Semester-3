#include<iostream>
#include<fstream>
using namespace std;
class POS {
	protected:
		string name;
		int code;
	public:
		POS(string name="unknown", int code = 00000)
//Parameterized constructor
		{
			this->name = name;
			this->code = code;
		}
		void setvalues() { //Entering data
			cout<<"Enter name :\n";
			cin>>name;
			cout<<"Enter code :\n";
			cin>>code;
		}
		string getname() {
			return name;
		}
		int getcode() {
			return code;
		}
//-----------------------To display data of POS in file-------------------------
		---------
		void display() {
			ofstream f1;
			f1.open("POS.txt",ios::app);
			f1<<"Name :"<<name<<endl;
			f1<<"Code : "<<code<<endl;
		}
};
class product:public POS {
	protected:
//-------------------Unique data members of Product---
		---------------------
		double price;
		int stock;
		int pno;
	public:
//-------------------Parameterized constructor------
		-----------------
		product(double price=000,int stock = 000) {
			this->price=price;
			this->stock=stock;
		}
//--------------------Entering data in Product-------
		------------------
		void setval2() {
			cout<<"Please Add Product Details:\n\n";
			cout<<"Enter Product number\n";
			cin>>pno;
			setvalues();
			cout<<"Enter Price:\n";
			cin>>price;
			cout<<"Enter Stock:\n";
			cin>>stock;
		}
		int getstock() {
			return stock;
		}
		double getprice() {
			return price;
		}
//-------------------------To display data of product in
		file------------------------------------
		void displayP() {
			ofstream file;
			file.open("Product.txt", ios::app);
			file<<"PRODUCT:\n"<<endl;
			cout<<"PRODUCT:\n"<<endl;
			cout<<"PRODUCT NO : "<<pno<<endl;
			file<<"PRODUCT NO : "<<pno<<endl;

			file<<"................................\n";
			cout<<"................................\n";
			file<<"Name : "<<name<<endl;
			cout<<"Name : "<<name<<endl;
			file<<"Code : "<<code<<endl;
			cout<<"Code : "<<code<<endl;
			file<<"stock : "<<stock<<endl;
			cout<<"stock : "<<stock<<endl;
			file<<"Price : "<<price<<endl;
			cout<<"Price : "<<price<<endl;
			file<<"................................\n";
			cout<<"................................\n";
		}
		void dis() { //reading file data
			ifstream infile;
			infile.open("Product.txt",ios::in);
			infile>>name;
			infile>>code;
			infile>>stock;
			infile>>price;
		}
};
class supplier:public POS {
	protected:
//---------------------Unique data members of
		supplier-------------------------
		int suppno;
	public:
//---------------------Entering data in supplier
		section-----------------------

		void setval3() {
			cout<<"please enter supplier crenditials\n";
			cout<<"Enter Supplier number\n";
			cin>>suppno;
			setvalues();
		}
//----------------------To display data of supplier
		in file----------------------
		void displayS() {
			ofstream f1;
			f1.open("Supplier.txt",ios::app);
			f1<<"SUPPLIER:\n"<<suppno<<endl;
			cout<<"................................\n";
			cout<<"SUPPLIER:"<<suppno<<endl;
			f1<<"Name : "<<name<<endl;
			cout<<"Name : "<<name<<endl;
			f1<<"Code : "<<code<<endl;
			cout<<"Code : "<<code<<endl;
			cout<<"................................\n";
		}
};
class employee:public POS {
	protected:
//------------------------Unique data members of
		employee section--------------------------
		int empno;
	public:
//---------------------Entering data in
		employee section-----------------------------
		void setval4()

		{
			cout<<"please enter Employee
			    crenditials\n";
			    cout<<"Enter Employee numebr\n";
			cin>>empno;
			setvalues();
		}
//----------------------To display data of
		employee in file---------------------------
		void displayE() {
			ofstream f2;
			f2.open("Employee.txt",ios::app);
			f2<<"EMPLOYEE :\n"<<endl;
			f2<<"................................\n";
			cout<<"EMPLOYEE :\n"<<endl;
			f2<<"Number:"<<empno<<endl;
			cout<<"Number:"<<empno<<endl;
			cout<<"................................\n";
			f2<<"Name : "<<name<<endl;
			cout<<"Name : "<<name<<endl;
			f2<<"code : "<<code<<endl;
			cout<<"code : "<<code<<endl;
			cout<<"................................\n";
			f2.close();
		}
};
int main() {
	int num,num1,num2;

	product a[num];
	employee c[num2];
	int cmmnd;
	system("cls");
p0:
	system("cls");
	cout<<" "<<"<Point Of sale
	    Application>\n\n"
	    <<"Sections :
	    \n\n"
	    <<"Press 1 for Admin Section.\n"
	    <<"Press 2 for Customer Section.\n\n\n";
	cout<<" or Press any 0 to terminate the program\n";
	cin>>cmmnd;
	switch(cmmnd) {
		case 1: {
p1:
			system("cls");
			cout<<"
			    "<<"<Admin Section>\n\n";
			    cout<<"Which Sub-Section u want to
			    access...?\n\n";
			    cout<<"1.Products Section\n";
			cout<<"2.Supplier Section\n";
			cout<<"3.Employee Section\n";
			cout<<"or press 0 to exit program\n";
			int cmmnd2;
			cin>>cmmnd2;
			switch(cmmnd2) {
				case 1: {


					system("cls");
					cout<<"
					    "<<"<Products Section>\n\n";
					    cout<<"1.Create
					    new product.\n\n\n";
					    cout<<"2.Go back to Admin Section.\n";
					cout<<"3.to Go back to Main Screen.\n";
					int
					cmmnd3;
					cin>>cmmnd3;
					switch(cmmnd3) {
						case 1: {
p2:
							system("cls");
							product a[num],a1;

							cout<<" "<<"<Create Product>\n\n";
							cout<<"How many Products u want to add?\n";
							cin>>num;

							for(int i=0; i<num; i++) {
								a[i].setval2();
								system("cls");
								cout<<"\n\n\n";
								cout<<"................................\n";

								a[i].displayP();

								cout<<"................................\n";
							}


							system("cls");

							cout<<"Added Successfully\n\n\n";
label1:
							cout<<"0. to edit the product\n";

							cout<<"1.to revert to Admin Section\n";
							cout<<"2.to revert to Main Screen\n";
							cout<<"3.Revert to Product Section Again\n";
							cout<<"4.Search product\n";
							int
							temp;

							cin>>temp;
							if(temp==1) {
								goto p1;
							} else if(temp==2) {
								goto p0;
							} else if(temp==3) {
								goto p2;
							}
							if(temp==0) {
								int x;
								cout<<"Enter product to edit\n";

								cin>>x;

								for(int i=0; i<num; i++) {
									if(x==a[i].getcode()) {
										a[i].setval2();
										cout<<"New Data\n";
										system("cls");
										cout<<"................................\n";
										a[i].displayP();
										cout<<"................................\n";
									}

								}
								goto label1;

							}
							if(temp==4) {
								int z;
								cout<<"Enter code to Search\n";

								cin>>z;
								for(int o=0; o<num; o++) {
									if(z==a[o].getcode()) {
										a[o].displayP();
									}

								}

								goto label1;
							}
						}
						case 2: {

							if(cmmnd3==2)

							{

								goto p1;

							}

							break;
						}
						case 3: {

							if(cmmnd3==3) {

								goto p0;
							}
							break;

						}
					}
				}
				case 2: {
					system("cls");
					cout<<"
					    "<<"<Supplier's Section>\n\n";
					    cout<<"1.Add New
					    Supplier.\n\n\n";
					    cout<<"2.Go back to Admin Section.\n";
					cout<<"3.to Go back to Main Screen.\n";
					int
					cmmnd4;
					cin>>cmmnd4;
					switch(cmmnd4) {
						case 1: {
S2:
							system("cls");

							cout<<" "<<"<Add Supplier>\n\n";
							cout<<"How many Suppliers ?\n";

							cin>>num1;
							supplier b[num1];

							for(int j=0; j<num1; j++) {
								b[j].setval3();
								system("cls");
								cout<<"\n\n\n";

								b[j].displayS();
							}
							system("cls");

							cout<<"Added Successfully\n";
label3:
							cout<<"Do you wish to edit? press '0'\n";
							cout<<"1.to revert to Admin Section\n";
							cout<<"2.to revert to Main Screen\n";
							cout<<"3.Revert to Supplier Section Again\n";
							cout<<"4.Search\n";

							int
							temp1;
							cin>>temp1;
							if(temp1==1) {
								goto p1;
							} else if(temp1==2) {
								goto p0;
							} else if(temp1==3) {
								goto S2;
							}
							if(temp1==0) {
								int y;
								cout<<"Enter code to edit\n";

								cin>>y;
								for(int j=0; j<num1; j++) {
									if(y==b[j].getcode()) {
										b[j].setval3();
										b[j].displayS();
									}

								}
								goto label3;
							}
							if(temp1==4) {
								int v;

								cout<<"Enter code to search\n";

								cin>>v;
								for(int g=0; g<num1; g++) {
									if(v==b[g].getcode()) {
										b[g].displayS();
									}

								}
								goto label3;
							}

						}
						case 2: {

							if(cmmnd4==2)

							{

								goto p1;

							}

							break;
						}
						case 3: {

							if(cmmnd4==3) {

								goto p0;
							}
							break;
						}
					}
				}

				case 3: {
					system("cls");
					cout<<"
					    "<<"<Emploees's Section>\n\n";
					    cout<<"1.Add New
					    Employee.\n\n\n";
					    cout<<"2.Go back to Admin Section.\n";
					cout<<"3.to Go back to Main Screen.\n";
					int
					cmmnd4;
					cin>>cmmnd4;
					switch(cmmnd4) {
						case 1: {
E2:
							system("cls");

							cout<<" "<<"<Add Employee>\n\n";
							cout<<"How many Employee ?\n";
							cin>>num2;
							employee c[num2];
							for(int k=0; k<num2; k++) {
								c[k].setval4();


								system("cls");
								cout<<"\n\n\n";

								c[k].displayE();
							}
							system("cls");

							cout<<"Added Successfully\n\n\n";
label4:
							cout<<"Press 0 to Edit Employee\n";

							cout<<"1.to revert to Admin Section\n";
							cout<<"2.to revert to Main Screen\n";
							cout<<"3.Revert to Employee Section Again\n";
							cout<<"4.Search Employee\n" ;
							int
							temp2;
							cin>>temp2;
							if(temp2==1) {
								goto p1;
							}

							else if(temp2==2) {
								goto p0;
							} else if(temp2==3) {
								goto E2;
							}
							if(temp2==0) {
								int k;
								cout<<"Enter Code For Edit The Employee\n";

								cin>>k;
								for(int y=0; y<num2; y++) {
									if(k==c[y].getcode()) {

										c[y].setval4();
										c[y].displayE();
									}

								}
								goto label4;
							}
							if(temp2==4) {
								int b;
								cout<<"Enter Code to search\n";

								cin>>b;
								for(int n=0; n<num2; n++) {
									if(b==c[n].getcode())

									{
										c[n].displayE();
									}

								}
								goto label4;
							}
						}
						case 2: {

							if(cmmnd4==2)

							{

								goto p1;

							}

							break;
						}
						case 3: {

							if(cmmnd4==3) {

								goto p0;
							}
							break;
						}
					}
				}

			}

		}
		case 2: {
			system("cls");
			int pcode;
			cout<<" "<<"<Customer
			    Section>\n\n";

			    int i,buy;
			cout<<"Enter code to buy \n";

			cin>>i;
			for(int o=0; o<num; o++) {
				if(i==a[o].getcode()) {
					a[o].displayP();
					cout<<"HOW MANY PRODUCT YOU
   WANT TO BUY:
					    \n";
					    cin>>buy;
					cout<<"Product name:"<<a[o].getname();

					cout<<"\nTotal prize is
					    \n"<<(a[o].getprice()*buy);
					    cout<<"\nRemaining stock after
   purchasing:
					    \n"<<a[o].getstock()-buy<<endl;
					    cout<<"\n\n";
				}

			}
			int c;
			cout<<"Press 1 to revert.\n";
			cin>>c;
			if(c==1) {
				goto p0;
			}

			break;
		}
	}
}
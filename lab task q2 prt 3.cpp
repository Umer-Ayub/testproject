#include<iostream>
#include<string.h>
using namespace std;
class person{
	private:
		int age,height,weight;
	protected:
		string name;
		string city;
		string state;
		string zip;
		string streetaddress;
		string phone;
		public:
		void get_info(){
			cout<<"information of person is"<<name<<"   "<<city<<"   "<<state<<"   "<<zip<<"   "<<streetaddress<<"   "<<phone<<endl;
		}
	person(){
		cout<<"this is per constructor"<<endl;
	}
	~person(){
		cout<<"this is per distructor"<<endl;
	}
};
class student:protected person{
public:
string major,adviser;
int chours;
float gpa;	
void find_info(string a,string b,string c,string d,string e,string f,string g,string h,int i,float j){
	name=a; city=b; state=c; zip=d; streetaddress=e; phone=f; major=g; adviser=h; chours=i; gpa=j;
}
	student(){
		cout<<"this is  std constructor"<<endl;
	}
	~student(){ 
		cout<<"this is std distructor"<<endl;
	}	
	
	
};
int main(){
	student s1;
	string a1,b1,c1,d1,e1,f1,g1,h1;
	int i1;
	float j1;
	cout<<"enter the information of student such as name,city,state,zip,streetaddress,phone,major,adviser"<<endl;
	cin>>a1>>b1>>c1>>d1>>e1>>f1>>g1>>h1>>i1>>j1;
	s1.find_info(a1,b1,c1,d1,e1,f1,g1,h1,i1,j1);
	s1.name=a1;
	cout<<s1.name<<endl;
	s1.get_info();
	cout<<s1.age<<endl;
	
}

//16. slayt 74-77

#include <iostream>
#include "opOverClass.h"
using namespace std;

//opOverClass operator+(opOverClass o_in1 , opOverClass o_in2);
//bool operator==(opOverClass o_in1,opOverClass o_in2);
ostream& operator<<(ostream&,const opOverClass);
istream& operator>>(istream&,opOverClass&);
//opOverClass operator++(opOverClass&);
//opOverClass operator++(opOverClass&,int);

int main()
{
    opOverClass obj(20,20);
    opOverClass obj2(200,400);
    opOverClass obj3;
    //a=++b;
    //a=++b;
    
    // cout<<a.get_a()<<" "<<a.get_b()<<" "<<b.get_a()<<" "<<b.get_b();
    
    cin >> obj;
    cin >> obj2;
    
    obj3 = obj + obj2;
    
    
    cout << obj3;
    

    
//    b=a++;
//    cout<<b.get_a()<<" "<<b.get_b();
    
    //b=++a; 
    
    //b=a;
    
    //cout<<b.get_a()<<" "<<b.get_b();
    
    //opOverClass c=a+b;
    
//  	if(a==b){
//  		
//  		cout<<"True";
//	}
//	else{
//		
//		cout<<"False";
//	}

    //cout << "Hello world! " << c.get_a() <<" " << c.get_b() << endl;
    
    
    
    return 0;
}


//opOverClass operator++(opOverClass& o_in,int x){
//	opOverClass temp=o_in;
//	o_in.a++;
//	o_in.b++;
//	return temp;
//}

//opOverClass operator++(opOverClass& o_in){
//	++(o_in.a);
//	++(o_in.b);
//	return o_in;
//}

istream& operator>>(istream& isObject,opOverClass& o_in){
	isObject>>o_in.a>>o_in.b;
	return isObject;
}
ostream& operator<<(ostream& osObject,const opOverClass o_in){
	osObject<<"("<<o_in.a<<" , "<<o_in.b<<")";
	return osObject;
}

//bool operator==(opOverClass o_in1,opOverClass o_in2){
//	if(o_in1.get_a() == o_in2.get_a() && o_in1.get_b() == o_in2.get_b()){
//		return true;
//	}
//	return false;
//}

//opOverClass operator+(opOverClass o_in1 , opOverClass o_in2){
//	opOverClass temp;
//	temp.a=o_in1.a+o_in2.a;
//	temp.b=o_in1.b+o_in2.b;
//	return temp;
//}


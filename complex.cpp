#include<iostream>
using namespace std;
class complex{   // class declaration
	private:
		int r,i;
	public:
		complex(){             // default construtor
			r=0;
			i=0;
		}
		complex(int real,int imag){     // constructor 
			r=real;
			i=imag;
		}
		complex add(complex c1,complex c2){  //function for additon on 2 complex numbers
			complex c3;
			c3.r=c1.r+c2.r;
			c3.i=c1.i+c2.i;
			return c3;
			}
		complex sub(complex c1,complex c2){  //function for sunstraction on 2 complex numbers
			complex c3;
			c3.r=c1.r-c2.r;
			c3.i=c1.i-c2.i;
			return c3;
			}
		complex mul(complex c1,complex c2){      //function for multiplication on 2 complex number
			complex c3;
			c3.r=c1.r*c2.r;
			c3.i=c1.i*c2.i;
			return c3;
			}	

	void printa(void){                               // print function
  		 cout<<"complex no. is"<<r<<" + "<<i<<" i "<<endl;             

}
		

};
int main(){           // driver code
complex c1(5,4);
complex c2(7,6);
complex c3(0,0);
cout<<"addition is "<<endl;
c3=c3.add(c1,c2);
c3.printa();
cout<<"substraction is "<<endl;
c3=c3.sub(c1,c2);
c3.printa();
cout<<"multiplication is "<<endl;
c3=c3.mul(c1,c2);
c3.printa();
}

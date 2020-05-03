#include <iostream>
#include "CaesarCipher.h"
#include<string>
using namespace std;



int main(int argc, char** argv) {
	int key;
    cout << "dwse to key pou theleis: ";
    cin>> key;
    while(cin.fail())
    {
    	cin.clear();
    	 cout << "dwse to key pou theleis: ";  // an to key pou dwsei den einai arithmos to ksana zhtaei na dwsei arithmo
    	 cin.ignore();
        cin>> key;
    	
	}
    cin.ignore(); // gia na diabasei to epomeno cout
	
	CaesarCipher c(key); 
	string  phrase;

	
	
 	c.encrypt(phrase);                   // kalei sunarthsh gia thn eisagwgh kai kruptografish tou mhnumatos
	 	string phrasejulius=phrase;
	cout<<"to algarithmitiko pou edwses kruptografimeno einai:"<< phrase<<endl;   // ektupwnei to kruptografimeno mhnuma 	
	c.decrypt(phrase);                   // kalei thn sunarthsh gia na apokruptografisei to mhnuma
	cout<< "-------------------------------------------"<<endl;
	cout<< "to mhnuma apokruptografimeno einai: "<< phrase<<endl; 
	
	int t_shift[10];
	int size_t_shift;    // tha krataei to sunolo twn arithmwn pou exei o pinakas 
	for (int i=0;i<10;i++)
	{
		 t_shift[i]=0;   
	}
	
	t_shift[0]=4;     
	t_shift[1]=2;            // arithmoi pou tha einai ta key gia thn  kruptografish
	t_shift[2]=5;
	
	size_t_shift=3;
	
	
	c.JuliusEncrypt(phrasejulius,size_t_shift,t_shift);
	
cout<<"to kainourgio kruptografimeno mnm einai "<< phrasejulius<<endl;
	
	
	
	c.JuliusDecrypt(phrasejulius,size_t_shift,t_shift);
	
	
	
	cout<<"to kainourgio apokruptografimeno mnm einai "<< phrasejulius;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

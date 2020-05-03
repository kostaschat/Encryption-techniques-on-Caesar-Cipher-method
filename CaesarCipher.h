#ifndef CAESARCIPHER_H
#define CAESARCIPHER_H
#include <string>
using namespace std;
class CaesarCipher
{
	private: 
	      int key;
	public:
		CaesarCipher(int k);
		string encrypt(string &phrase);
	    string decrypt(string &phrase);
	    string JuliusEncrypt(string &phrasejulius,int size_t_shift,int t_shift[]);
		 string JuliusDecrypt(string &phrasejulius,int size_t_shift,int t_shift[]);
		
		
		
	protected:
};

#endif

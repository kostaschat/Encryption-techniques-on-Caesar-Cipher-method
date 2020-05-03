#include "CaesarCipher.h"
#include<iostream>
using namespace std;


	CaesarCipher::CaesarCipher(int k)
	{
		key=k;
	}
	string CaesarCipher::encrypt(string& phrase)
	{
		cout <<"dwse to alfarithmitiko pou theleis  na kryptografiseis: ";
		getline(cin,phrase);
		int length= phrase.length();
		int i;
		
		
		for (i=0; i<length;i++)
		{
			if(isalpha(phrase[i]))
			{
				int offset =65;
				if(islower(phrase[i]))   // an einai mikra ta grammata
				{
				offset= 97;
			    }
			    int  cipheredLetter=(((int)phrase[i]-offset+key)%26)+offset;
			    
			    phrase[i]=cipheredLetter;
			}
			else cout << phrase[i];
		
		}
		
		return phrase;
	}
	
	 string CaesarCipher::decrypt(string& phrase)
	{
		int length= phrase.length();
		int i;
		
		
		for (i=0; i<length;i++)
		{
			if(isalpha(phrase[i]))
			{
				int offset =65;
				if(islower(phrase[i]))   // an einai mikra ta grammata
				{
				offset= 97;
			    }
			    int  cipheredLetter=(((int)phrase[i]-offset-key)%26)+offset;
			    
			    phrase[i]=cipheredLetter;
			}
			else cout << phrase[i];
		
		}
		
		return phrase;
	}
		
  string CaesarCipher::JuliusEncrypt(string &phrasejulius,int size_t_shift,int t_shift[])
  {
  		int length= phrasejulius.length();
		int i;
		int ka;
		int count;
		
		
		for (i=0; i<length;i++)
		{   if (count<size_t_shift)
		    {	
		    ka=t_shift[count];
		    
		   }else if(count==size_t_shift)
		   {
		   	ka=t_shift[0];
		    count=0;
		   }
		   
		   
			if(isalpha(phrasejulius[i]))
			{
				int offset =65;
				if(islower(phrasejulius[i]))   // an einai mikra ta grammata
				{
				offset= 97;
			    }
			    int  cipheredLetter=(((int)phrasejulius[i]-offset+ka)%26)+offset;
			    
			    phrasejulius[i]=cipheredLetter;
			    
			}
			else cout << phrasejulius[i];
		  count++;
		}
		
  	
      
      return phrasejulius;
  }	
		
	string CaesarCipher::JuliusDecrypt(string &phrasejulius,int size_t_shift,int t_shift[])
		{
		  	int length= phrasejulius.length();
		int i;
		int ka;
		int count;
		
		
		for (i=0; i<length;i++)
		{   if (count<size_t_shift)
		    {	
		    ka=t_shift[count];
		    
		   }else if(count==size_t_shift)
		   {
		   	ka=t_shift[0];
		    count=0;
		   }
		   
		   
			if(isalpha(phrasejulius[i]))
			{
				int offset =65;
				if(islower(phrasejulius[i]))   // an einai mikra ta grammata
				{
				offset= 97;
			    }
			    int  cipheredLetter=(((int)phrasejulius[i]-offset-ka)%26)+offset;
			    
			    phrasejulius[i]=cipheredLetter;
			    
			}
			else cout << phrasejulius[i];
		  count++;
		}
		
  	
      
      return phrasejulius;
     }		
		
	
	

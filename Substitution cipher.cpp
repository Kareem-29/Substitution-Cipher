#include<iostream>
using namespace std;

int main()
{
	char array[]= {
	'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
	'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
	'0','1','2','3','4','5','6','7','8','9',
	'!','@','#','$','%','^','&','*','(',')','-','+','=',' '};

	char array2[]={
	'A','H','M','E','D','K','R','L','I','B','C','F','G','J','N','O','P','Q','S','T','U','V','W','X','Y','Z',
	'k','a','r','e','m','l','i','h','d','b','c','f','g','j','n','o','p','q','s','t','u','v','w','x','y','z',
	'0','5'	,'4','2','6','1','7','9','3','8',
	'@','!','(','-','&','+','%',')','#','*','$','=',' ','^'};
	
	//	key genartion For capital letter => AHMED KAREEM ALI 
	//	key genartion For Small letter => karrem ali ahmed 
	//	key genartion For numbers=> 0542651079 
	// 	key genartion For special characters => Random 
	string x;
	int number;
	do {
	
	cout<<"To Encrypt[1]"<<endl;
	cout<<"To Decrypt[2]"<<endl;
	cout<<"Exit[3]"<<endl;
	
	cout<<"Choose:";
	cin>>number;
	
	
	
		
		switch (number )
		{
			case 1:
				//To Encrypt
			cout<<"Plaintext: ";
			cin>>x;
			cout<<"Ciphertext: ";
			for(int i=0 ; i<x.length(); i++)
			{
			
				for(int j=0 ; j<76; j++ )
			{
			
			
			if(x[i]==array[j])
			{
				
				
			cout<<array2[j];
				 
				
				
			}
			
			}
			}
			
			getline( cin, x );
			
	
			for(int i=0 ; i<x.length(); i++)
			{
			
				for(int j=0 ; j<76; j++ )
			{
			
			
			if(x[i]==array[j])
			{
				
				
			cout<<array2[j];
				 	
				
			}
			
			}
			}
			cout<<endl;
			cout<<endl;
			break;
			
			case 2: 
			//To Decrypt
			cout<<"Ciphertext: ";
			cin>> x;
			cout<<"Plaintext: ";
				for(int i=0 ; i<x.length(); i++)
			{
			
				for(int j=0 ; j<76; j++ )
			{
			

			if(x[i]==array2[j])
			{
			cout<<array[j];
				 
				
				
			}
			
			}
			}
			getline( cin, x );
	
			for(int i=0 ; i<x.length(); i++)
			{
			
				for(int j=0 ; j<76; j++ )
			{
			

			if(x[i]==array2[j])
			{
			cout<<array[j];
				 
				
			}
			
			}
			}
			
			cout<<endl;
			cout<<endl;
			break;
			
			case 3:
				cout<<endl;
			cout<<"Thank You!";
			
		}
		
			} while(number!=3);
return 0;
}

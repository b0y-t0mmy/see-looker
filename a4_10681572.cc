#include <iostream>
using namespace std;

int main()

{  
   int remainder;

   int a;
    cout << "PLease enter a\n";
    cin >> a;
   
   int b;
    cout << "Please enter b\n";
    cin >> b;
    
    while(a != b){
    	if(a > b){
    		a -= b;
		}
	else{b -= a;
	}	
	}
	cout << "gcd =" << a; 
 return 0;
}
   	

  
  


#include <stdio.h>

int main ()
{
	char caracter = '&';
	int valor_ascii = (int) caracter;
	
	printf ("El valor ascii es %d de %c \n", valor_ascii, caracter);
	if (valor_ascii >= 48 && valor_ascii <= 57)
	{
		printf ("Es digito");
   	}else{
		if(valor_ascii >= 65 && valor_ascii <= 90)
		   {
		   	printf ("El valor %c es mayuscula", caracter);
	    	}else{
	    		 if (valor_ascii >= 97 && valor_ascii <= 122)
	    		{
	    		  printf ("El valor %c es minuscula", caracter);
				}else{ 
					printf ("El valor %c es caracter especial", caracter);
			    	}
			}
		
      	} 
      	
      	
	return 0;
	
}

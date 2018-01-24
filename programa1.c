#include <stdio.h>
void casillas (char *argv[]);
int main(int argc, char *argv[])
{
  // short int  a;
  //short int b;
  //short int c;
  //short int d;
  

   if (argc==1)
   {
       printf("Debes ingresar mas parametros...\n");
       
       return 1;
   }
   //  else
   //  {
   //  scanf(" %hd", &a);
   //}

    if (argc==2)
   {
       printf("Debes ingresar mas parametros...\n");
      
   }
    //else
    //{
    //	scanf (" &d", &b);
    //}
    
      if (argc==3)
   {
       printf("Debes ingresar mas parametros...\n");
    
   }
      //else
      //{
      //  scanf (" %hd", &c);
      //}
      if (argc==4)
   {
       printf("Debes ingresar mas parametros...\n");
    
   }
      //else
      //{
      //  scanf (" %hd", &d);
      //}

 

  
   casillas(argv);
}

void casillas (char *argv[])
{
   int op;
     printf("Del 1 al 4, que casilla quieres?(por favor, poner del 1 al 4)\n\n");
    scanf(" %d", &op);
 if (op==1)
     {
       printf ("el numero que corresponde a la casilla uno es %s\n", argv[1]);
     }

     if (op==2)
     {
       printf ("el numero que corresponde a la casilla uno es %s\n", argv[2]);
     }

       if (op==3)
     {
       printf ("el numero que corresponde a la casilla uno es %s\n", argv[3]);
     }

         if (op==4)
     {
       printf ("el numero que corresponde a la casilla uno es %s\n", argv[4]);
     }
	
	 
	 casillas(argv);
}

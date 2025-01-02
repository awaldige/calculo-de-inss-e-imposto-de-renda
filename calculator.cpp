 int main() {
     
     float salario, inss, ir, sal_liquido;
     
     printf("Calculo de Salario Liquido Com desconto do IR e INSS\n\n");
     printf("\nDigite seu salario Bruto\n"); 
     scanf("%f", &salario);
     
     //Calcular o INSS e ir
     if ( salario <= 2500) {
     
     inss = salario * 0.075;
	 	             
     }    
	 if (salario >= 2259.21 && salario <= 2826.65){
	   
	  ir = salario * 0.075;
	 }
    
	 else
     
     if ( salario >= 2500.01 && salario <= 5500.00) {
         
         inss = salario * 0.09;       
        
     }
      
	 if  ( salario >= 2826.66 && salario <=3751.05) {
	   
	    ir= salario * 0.15; 
	 
	 } 
	
	
		 
	 
	 else
	 
	 if ( salario >= 5500.01 && salario <= 10000.00) {
	
	     inss = salario * 0.12;
          
	 }        
         
	 if   (salario >=3751.06 && salario <= 4664.68) {
	      
		  
		  ir= salario * 0.225;
	 
	 }  
     	 
	 
	 
     else
	 
	 if (salario >= 10000.01 && salario >=20000.00){
	
	     inss = salario * 0.14;	 	  
	
	 }
	 
	 if (salario>= 4664.68) {
	 
	    ir = salario * 0.275; 
	 }
	       
	    
	       
	 
	     	 
         
         
         
          	 sal_liquido = (salario - inss) - ir; //Resultados
     
          printf( "\nDesconto do INSS e: %.2f\n\n",inss);
          printf( "Desconto do imposto de renda e: %.2f\n\n",ir);
          printf( "Salario liquido: %.2f\n\n", sal_liquido);
           return 0;
     
     	
     	
     	
     	
     	
     	
     }    
     

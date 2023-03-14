main()
{
 
  printf("\n\n\        Serie de Fibonacci: descobrir se seu numero pertence ou nao!\n ");
  printf("\n\n\-------------------------------------------------------------------------\n\n\ ");
  printf("\n\               1.     Informe o numero requisitado: \n\ ");
  scanf("\n\n\%i", &valor);
  printf("-------------------------------------------------------------------------\n\n\ ");
 while (valor>ccnt){
 

 ccnt = acnt + bcnt;
 acnt = bcnt;
 bcnt = ccnt;
}
  if ((valor==0) || (valor==1)){
  	printf("\n              2.     Faz parte sim da serie de fibonacci! :) \n\n\ ");
  	printf("-------------------------------------------------------------------------\n\n\ ");
  }else if (valor==ccnt){
  	printf("\n               2.     Faz parte sim da serie de fibonacci! :) \n\n\ ");
  	printf("-------------------------------------------------------------------------\n\n\ ");
  }else{
  	printf("\n               2.     Nao faz parte da serie de fibonacci! :( \n\n");
  	printf("-------------------------------------------------------------------------\n\n\ ");
  }

system("pause");	
}

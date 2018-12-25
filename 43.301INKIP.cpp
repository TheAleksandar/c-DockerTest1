#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;
int main(int argc, char *argv[])
{
 	system("title Aleksandar Poposki INKIP 301  Zadaca br:43 fajl:1");
 
 	int m,j,k,t;
 	char i,n;
 	int a[9][9];
 	cout<<"          ____________________________\n"<<endl;
 	cout<<"          =======SAHOVSKA TABLA=======\n"<<endl;
 	cout<<"          =======    KRALICA   ======="<<endl;
 	cout<<"          ____________________________"<<endl;
 	
 	
 	
 	printf("\n\n\nVnesete go poleto na koesto se naoga kralicata: ");
 	scanf("%c%d", &n,&m);
 	while(m<1 || m>8 || (int)n<65 || (int)n>72){
  			printf("\nNe postoi takvo pole na sahovskata tabla ili\ntreba da koristete golemi bulvi, vnesete poftorno: ");
			  cin>>n>>m;}
			  system("cls");
			  k=(int)n-64;//karakterite A,B se pretvoraat vo brojki..
			  for(t=0, j=1;j<=8;j++) // comma expression
			  a[t][j]=j;
			  for(t=1;t<=8;t++){
			  for(j=1;j<=8;j++){
			  					a[t][j]=0;}}
			  					a[k][m]=2;//vrednosti na vnesenata lokacija
 	cout<<"          ____________________________\n"<<endl;
 	cout<<"          =======SAHOVSKA TABLA=======\n"<<endl;
 	cout<<"          =======    KRALIVA   ======="<<endl;
 	cout<<"          ____________________________"<<endl;
			  					
			  					
								  printf("\n\nKralicata od pozicijata %c%d, smee da odi na slednite pozicii:\n",n,m);
			  					//multi kontrol FOR
							  //gore desno	
							          printf("     GORE DESNO\n");
			  				for(i=n+1, j=m+1, t=k+1;j>=1&&j<=8&&(int)i>=65&&(int)i<=72;++i,++t,++j){
							  			   a[t][j]=1;
									   printf(" %c%d, ", i,j);}
					
									   printf("\n");
									//gore levo	 
									printf("     GORE LEVO\n") ;
									   for(i=n-1,j=m+1,t=k-1;j>=1&&j<=8&&(int)i>=65&&(int)i<=72;--i,--t,++j){
										a[t][j]=1;
										printf(" %c%d, ",i,j);}
										printf("\n");
 								//dolu levo
 								printf("     DOLU LEVO\n");
								   for(i=n-1,j=m-1,t=k-1;j>=1&&j<=8&&(int)i>=65&&(int)i<=72;--i,--t,--j){
								  a[t][j]=1;
								  printf(" %c%d, ",i,j);}
								printf("\n");
								  //dolu desno
								  printf("     DOLU DESNO\n");
								  for(i=n+1,j=m-1,t=k+1;j>=1&&j<=8&&(int)i>=65&&(int)i<=72;++i,++t,--j){
										a[t][j]=1;
										printf(" %c%d, ",i,j);}
									
									printf("\n");
									printf("      DESNO\n");
							  				   	   	//desno
			  				for(i=n, j=m, t=k;j>=1&&j<=8&&(int)i>=65&&(int)i<=72;++i,++t){
							  			   a[t][j]=1;
									   printf(" %c%d, ", i,j);}
									   printf("\n");
									   printf("      LEVO\n");
									   	   	//levo	
			  				for(i=n, j=m, t=k;j>=1&&j<=8&&(int)i>=65&&(int)i<=72;--i,--t){
							  			   a[t][j]=1;
									   printf(" %c%d, ", i,j);}
								printf("\n");
									   	//gore	
									   	printf("      GORE \n");
			  				for(i=n, j=m+1, t=k;j>=1&&j<=8&&(int)i>=65&&(int)i<=72;++j){
							  			   a[t][j]=1;
									   printf(" %c%d, ", i,j);}
							printf("\n");
									   	//dole	
									   	printf("      DOLU\n");
			  				for(i=n, j=m-1, t=k;j>=1&&j<=8&&(int)i>=65&&(int)i<=72;--j){
							  			   a[t][j]=1;
									   printf(" %c%d, ", i,j);}
									   
									   printf("\n");
									   
									a[k][m]=8;
										printf("\n\n");
										printf("Preku vizuelen prikaz kralicata se dvizi na poziciite so 1,");
										printf("\nod pocetnata pozicija obelezana so 8\n\n");
										printf("  ");
										for(char y='A';y<='H';y++)
										printf(" %2c",y);
										printf("\n");
										for(j=1;j<=8;j++){
				 						 for(t=0;t<=8;t++){
		 				   				 printf("%2d ",a[t][j]);
										 }
										 printf("\n");
										 }
										 printf("\n");
										system("pause");
										return 0;
					}
	
																				 
															 
										

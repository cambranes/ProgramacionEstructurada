#include <stdio.h>
/*Autor: José Marcos Morales Gómez 31/Enero/2017
	Entradas: hora, minutos
	Salidas: horario estandar 
	Procedimiento general: mediante la digitacion de horas y minutos se convertira
    a horario estandar en am o pm dependiendo el caso
*/
int main(int argc, char *argv[]) {
	int hora, minutos;
	printf("Ingrese la hora militar a convertir (este debe tener dos digitos)\n");
	scanf ("%i", &hora);
	printf ("Ingrese los minutos (este debe tener dos digitos)\n");
	scanf ("%i", &minutos);
	if (hora>12){
		if (hora==13){
			hora=1;
			printf("%i",hora);
			printf(":%i", minutos);
			printf ("pm");
		}
		else 
			if(hora==14){
				hora=2;
				printf("%i",hora);
				printf(":%i", minutos);
				printf ("pm");
			}	
			else 
					if(hora==15){
						hora=3;
						printf("%i",hora);
						printf(":%i", minutos);
						printf ("pm");
					}	
					else 
							if(hora==16){
								hora=4;
								printf("%i",hora);
								printf(":%i", minutos);
								printf ("pm");
							}	
							else 
									if (hora==17){
										hora=5;
										printf("%i",hora);
										printf(":%i", minutos);
										printf ("pm");
									}	
									else 
											if(hora==18){
												hora=6;
												printf("%i",hora);
												printf(":%i", minutos);
												printf ("pm");	
											}
											else 
												if (hora==19){
													hora=7;
													printf("%i",hora);
													printf(":%i", minutos);
													printf ("pm");
												}
												else
													if(hora==20){
														hora=8;
														printf("%i",hora);
														printf(":%i", minutos);
														printf ("pm");
													}	
													else 
															if(hora==21){
																hora=9;
																printf("%i",hora);
																printf(":%i", minutos);
																printf ("pm");
															}	
															else 
																	if(hora==22){
																		hora=10;
																		printf("%i",hora);
																		printf(":%i", minutos);
																		printf ("pm");
																	}
																	else
																		if(hora==23){
																			hora=11;
																			printf("%i",hora);
																			printf(":%i", minutos);
																			printf ("pm");
																		}	
																		else 
																				if(hora==24){
																					hora=12;
																					printf("%i",hora);
																					printf(":%i", minutos);
																					printf ("pm");
																				}
																			
																					}
																
	
	else { 
		printf("%i",hora);
		printf(":%i", minutos);
		printf("am");
	}
	return 0;
}


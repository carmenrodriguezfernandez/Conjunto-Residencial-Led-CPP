#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x,int y);
void marco(int x1, int y1, int x2, int y2,bool linea);
void marc(int x1, int y1, int x2, int y2,int x3, bool linea,bool linea1,bool linea2,bool linea3,bool linea4);
int main();
int man();
    
void marco(int x1, int y1, int x2, int y2, bool linea) {
	int i;

	for (i=x1;i<=x2;i++){
		gotoxy(i,y1);cout<<"*";
	}
	//linea adicional
	if (linea){
		for (i=x1;i<=x2;i++){
			gotoxy(i,y1+3);cout<<"*";
		}
	}
	 // fin linea

	for (i=x1;i<=x2;i++){
		gotoxy(i,y2);cout<<"*";
	}

	for (i=y1;i<=y2;i++){
		gotoxy(x1,i);cout<<"*";
	}

	for (i=y1;i<=y2;i++){
		gotoxy(x2,i);cout<<"*";
	}
}

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos); 
	

}
typedef short _stdcall (*inpfuncPtr)(short portaddr);
typedef void _stdcall (*oupfuncPtr)(short portaddr, short datum);


void gotoxy(int x,int y);
void marc(int x1, int y1, int x2, int y2,int x3,int y3, bool linea,bool linea1,bool linea2,bool linea3,bool linea4);
void marc(int x1, int y1, int x2, int y2,int x3,int y3, bool linea,bool linea1,bool linea2,bool linea3,bool linea4){
				int i;
		        for (i=x1;i<=x2;i++){
		       	gotoxy(i,y1+3);cout<<"*";
		        }
            	
				for (i=x3;i<x2;i++){
		        gotoxy(i,y1+18);cout<<"*";
             	}
             	 //linea adicional
	            if (linea){
		        for (i=y1;i<=y2;i++){
		       	gotoxy(x1+26,i);cout<<"*";
		        }
            	}
	             // fin linea
	            //linea adicional,notoc ar
	            if (linea1){
		        for (i=x1;i<=x2;i++){
		       	gotoxy(i,y1);cout<<"*";
		        }
            	}
	             // fin linea
	              //linea adicional
	            if (linea2){
		        for (i=x1;i<=x2;i++){
		       	gotoxy(i,y2);cout<<"*";
		        }
            	}
	             // fin linea
	              //linea adicional
	            if (linea3){
		        for (i=x1;i<=x3;i++){
		       	gotoxy(i,y1+10);cout<<"*";
		        }
            	}
	             // fin linea
	              //linea adicional
	            if (linea4){
		        for (i=x1;i<=x3;i++){
		       	gotoxy(i,y1+18);cout<<"*";
		        }
            	}
	             // fin linea

             	for (i<=x3;i<=x2;i++){
	        	 gotoxy(i,y1+13);cout<<"*";
             	}

            	for (i=y1;i<=y2;i++){
	        	gotoxy(x1,i);cout<<"*";
            	}

            	for (i=y1;i<=y2;i++){
	        	gotoxy(x2,i);cout<<"*";
            	}
                }
  int main(){

	int op;
	bool ban=true;
	do{
	system("cls");	
	marco(5,2,50,22,true);
	gotoxy(7,3);cout<<" BIENVENIDOS AL CONJUNTO CERRADO UPECISTA "<<endl;
	gotoxy(2,7);cout<<"\t\t[1]. Casa Modelo \n ";
	gotoxy(2,9);cout<<"\t\t[2]. Entrada Principal \n ";
	gotoxy(2,11);cout<<"\t\t[3]. Letrero \n";
	gotoxy(2,13);cout<<"\t\t[4]. Luz De Postes \n";
	gotoxy(2,15);cout<<"\t\t[5]. SALIR\n ";
	gotoxy(2,17);cout<<"\t\tDigite opcion: ( )";
	gotoxy(32,17);cin>>op;
		switch(op){
			case 1:{
				int op2;
				bool ban=true;
				do{
				system("cls");
				marc(5,3,57,30,30,20,true,true,true,true,true);
				gotoxy(8,4);cout<<" PLANO DE LA CASA MODELO "<<endl;
             	gotoxy(8,5);cout<<"Digite el numero respectivo para encender el foco \n ";
              	gotoxy(2,9);cout<<"\t\t[1] \n ";
             	gotoxy(2,17);cout<<"\t\t[2]  \n";
            	gotoxy(2,26);cout<<"\t\t[3]  \n";
				gotoxy(6,11);cout<<"\t\t\t\t\t [4]  \n\n";
	            gotoxy(6,19);cout<<"\t\t\t\t\t [5] \n\n";
	            gotoxy(6,26);cout<<"\t\t\t\t\t [6]  \n\n";
	            gotoxy(65,22);cout<<" [1]. COCINA \n";
	            gotoxy(65,23);cout<<" [2]. COMEDOR \n";
	            gotoxy(65,24);cout<<" [3]. SALA \n";
	            gotoxy(65,25);cout<<" [4]. CUARTO I \n";
	            gotoxy(65,26);cout<<" [5]. BAÑO \n";
	            gotoxy(65,27);cout<<" [6]. CUARTO II \n";
	            gotoxy(65,28);cout<<" [7]. ATRAS \n ";
	            gotoxy(65,29);cout<<" Digite opcion: ( )";

				gotoxy(82,29);cin>>op2;
			
				switch(op2){
			
				case 1:{
				int op3;
				system("cls");
				marc(5,3,57,30,30,20,true,true,true,true,true);
				gotoxy(8,4);cout<<" PLANO DE LA CASA MODELO "<<endl;
             	gotoxy(8,5);cout<<"Digite el numero respectivo para encender el foco \n ";
              	gotoxy(2,9);cout<<"\t\t[ON - OFF] \n ";
             	gotoxy(2,17);cout<<"\t\t[2]  \n";
            	gotoxy(2,26);cout<<"\t\t[3]  \n";
				gotoxy(6,11);cout<<"\t\t\t\t\t [4]  \n\n";
	            gotoxy(6,19);cout<<"\t\t\t\t\t [5] \n\n";
	            gotoxy(6,26);cout<<"\t\t\t\t\t [6]  \n\n";
	            gotoxy(65,9);cout<<" 1: on \n";
	            gotoxy(65,10);cout<<" [2]. off \n";
	            gotoxy(65,24);cout<<" [3]. ATRAS \n ";
	            gotoxy(65,25);cout<<" Digite opcion: ( )";
	            gotoxy(82,25);cin>>op3;
	             switch(op3){
	             	case 1:{
	             	 gotoxy(65,12); man ();
					 gotoxy(65,13); system("pause");	
	             		break;
	             	}
	             	case 3:{
	             		
					 ban=false;
	             		 break;
	             	}
	             	default:cout<<"Ingrese opcion valida"<<endl;
	             	break;
	             }
	            
				break;
				}
				case 2:{int op3;
				system("cls");
				marc(5,3,57,30,30,20,true,true,true,true,true);
				gotoxy(8,4);cout<<" PLANO DE LA CASA MODELO "<<endl;
             	gotoxy(8,5);cout<<"Digite el numero respectivo para encender el foco \n ";
              	gotoxy(2,9);cout<<"\t\t [1] \n ";
             	gotoxy(2,17);cout<<"\t\t[ON-OFF]  \n";
            	gotoxy(2,26);cout<<"\t\t[3]  \n";
				gotoxy(6,11);cout<<"\t\t\t\t\t [4]  \n\n";
	            gotoxy(6,19);cout<<"\t\t\t\t\t [5] \n\n";
	            gotoxy(6,26);cout<<"\t\t\t\t\t [6]  \n\n";
	            gotoxy(65,9);cout<<"  [1]. on \n";
	            gotoxy(65,10);cout<<" [2]. off \n";
	            gotoxy(65,24);cout<<" [3]. ATRAS \n ";
	            gotoxy(65,25);cout<<" Digite opcion: ( )";
	            gotoxy(82,25);cin>>op3;
	             switch(op3){
	             	case 1:{
	             	 gotoxy(65,12); man ();
					 gotoxy(65,13); system("pause");	
	             		break;
	             	}
	             	case 2:{
	             		
	             		break;
	             	}
	             	case 3:{
	             		
					 ban=false;
	             		 break;
	             	}
	             	default:cout<<"Ingrese opcion valida"<<endl;
	             	break;
	             }
	            
				break;
				}
				case 3: {
					int op3;
				system("cls");
				marc(5,3,57,30,30,20,true,true,true,true,true);
				gotoxy(8,4);cout<<" PLANO DE LA CASA MODELO "<<endl;
             	gotoxy(8,5);cout<<"Digite el numero respectivo para encender el foco \n ";
              	gotoxy(2,9);cout<<"\t\t [1] \n ";
             	gotoxy(2,17);cout<<"\t\t[2]  \n";
            	gotoxy(2,26);cout<<"\t\t[ON - OFF]  \n";
				gotoxy(6,11);cout<<"\t\t\t\t\t [4]  \n\n";
	            gotoxy(6,19);cout<<"\t\t\t\t\t [5] \n\n";
	            gotoxy(6,26);cout<<"\t\t\t\t\t [6]  \n\n";
	            gotoxy(65,9);cout<<"  [1]. on \n";
	            gotoxy(65,10);cout<<" [2]. off \n";
	            gotoxy(65,24);cout<<" [3]. ATRAS \n ";
	            gotoxy(65,25);cout<<" Digite opcion: ( )";
	            gotoxy(82,25);cin>>op3;
	             switch(op3){
	             	case 1:{
	             	 gotoxy(65,12); man ();
					 gotoxy(65,13); system("pause");	
	             		break;
	             	}
	             	case 2:{
	             		
	             		break;
	             	}
	             	case 3:{
	             		
					 ban=false;
	             		 break;
	             	}
	             	default:cout<<"Ingrese opcion valida"<<endl;
	             	break;
	             }
	            
				break;
				}
				case 4:{
				int op3;
				system("cls");
				marc(5,3,57,30,30,20,true,true,true,true,true);
				gotoxy(8,4);cout<<" PLANO DE LA CASA MODELO "<<endl;
             	gotoxy(8,5);cout<<"Digite el numero respectivo para encender el foco \n ";
              	gotoxy(2,9);cout<<"\t\t [1] \n ";
             	gotoxy(2,17);cout<<"\t\t[2]  \n";
            	gotoxy(2,26);cout<<"\t\t[3]  \n";
				gotoxy(6,11);cout<<"\t\t\t\t\t [ON -OFF]  \n\n";
	            gotoxy(6,19);cout<<"\t\t\t\t\t [5] \n\n";
	            gotoxy(6,26);cout<<"\t\t\t\t\t [6]  \n\n";
	            gotoxy(65,9);cout<<" [1]. on \n";
	            gotoxy(65,10);cout<<" [2]. off \n";
	            gotoxy(65,24);cout<<" [3]. ATRAS \n ";
	            gotoxy(65,25);cout<<" Digite opcion: ( )";
	            gotoxy(82,25);cin>>op3;
	             switch(op3){
	             	case 1:{
	             	 gotoxy(65,12); man ();
					 gotoxy(65,13); system("pause");	
	             		break;
	             	}
	             	case 2:{
	             		
	             		break;
	             	}
	             	case 3:{
	             		
					 ban=false;
	             		 break;
	             	}
	             	default:cout<<"Ingrese opcion valida"<<endl;
	             	break;
	             }
	            
				break;
				}
				case 5:{
					int op3;
				system("cls");
				marc(5,3,57,30,30,20,true,true,true,true,true);
				gotoxy(8,4);cout<<" PLANO DE LA CASA MODELO "<<endl;
             	gotoxy(8,5);cout<<"Digite el numero respectivo para encender el foco \n ";
              	gotoxy(2,9);cout<<"\t\t[1] \n ";
             	gotoxy(2,17);cout<<"\t\t[2]  \n";
            	gotoxy(2,26);cout<<"\t\t[3]  \n";
				gotoxy(6,11);cout<<"\t\t\t\t\t [4]  \n\n";
	            gotoxy(6,19);cout<<"\t\t\t\t\t [ON - OFF] \n\n";
	            gotoxy(6,26);cout<<"\t\t\t\t\t [6]  \n\n";
	            gotoxy(65,9);cout<<"  [1]. on \n";
	            gotoxy(65,10);cout<<" [2]. off \n";
	            gotoxy(65,24);cout<<" [3]. ATRAS \n ";
	            gotoxy(65,25);cout<<" Digite opcion: ( )";
	            gotoxy(82,25);cin>>op3;
	             switch(op3){
	             	case 1:{
	             	 gotoxy(65,12); man ();
					 gotoxy(65,13); system("pause");	
	             		break;
	             	}
	             	case 2:{
	             		
	             		break;
	             	}
	             	case 3:{
	             		
					 ban=false;
	             		 break;
	             	}
	             	default:cout<<"Ingrese opcion valida"<<endl;
	             	break;
	             }
	            
				break;
				}
				case 6:{
				int op3;
				system("cls");
				marc(5,3,57,30,30,20,true,true,true,true,true);
				gotoxy(8,4);cout<<" PLANO DE LA CASA MODELO "<<endl;
             	gotoxy(8,5);cout<<"Digite el numero respectivo para encender el foco \n ";
              	gotoxy(2,9);cout<<"\t\t[1] \n ";
             	gotoxy(2,17);cout<<"\t\t[2]  \n";
            	gotoxy(2,26);cout<<"\t\t[3]  \n";
				gotoxy(6,11);cout<<"\t\t\t\t\t [4]  \n\n";
	            gotoxy(6,19);cout<<"\t\t\t\t\t [5] \n\n";
	            gotoxy(6,26);cout<<"\t\t\t\t\t [ON - OFF]  \n\n";
	            gotoxy(65,9);cout<<"  [1]. on \n";
	            gotoxy(65,10);cout<<" [2]. off \n";
	            gotoxy(65,24);cout<<" [3]. ATRAS \n ";
	            gotoxy(65,25);cout<<" Digite opcion: ( )";
	            gotoxy(82,25);cin>>op3;
	             switch(op3){
	             	case 1:{
	             	 gotoxy(65,12); man ();
					 gotoxy(65,13); system("pause");	
	             		break;
	             	}
	             	case 2:{
	             		
	             		break;
	             	}
	             	case 3:{
	             		
					 ban=false;
	             		 break;
	             	}
	             	default:cout<<"Ingrese opcion valida"<<endl;
	             	break;
	             }
	            
				break;
				}	
				case 7:{
				ban=false;
				break;
				}
				default:
				{
				cout<<"Ingrese una opcion valida";
				getch();
				}
				}
		
			}while(ban==true);
	 		break;
			}
			
			
			case 2:{
			  man();
			  system("pause");
			break;
	 		}
			
		case 3:{
				system("cls");	
				cout<<"\t\t..:: menuu ::..\n";
				
				break;
			}	
		
		case 4:{
				system("cls");	
				cout<<"\t\t..:: menuu ::..\n";
				
				break;
			}
		
			
		case 5:{
				ban=false;
				break;
			}	
			default:{
				cout<<"Ingrese una opcion valida";
				getch();
			}	
		}
		
	}while(ban== true);

 getch();
}

int man() {
    		HINSTANCE hLib;
   			inpfuncPtr in;
    		oupfuncPtr out;

			hLib = LoadLibrary("inpout32.dll");
			if (hLib == NULL)	{
 			cout<<"ERROR DE LIBRERIA.\n"; 
			cin.get();
 			return -1; 
			}

			in = (inpfuncPtr) GetProcAddress(hLib, "Inp32");
			if (in == NULL) {
			cout<<"GetProcAddress (ERROR EN EL INPUT32).\n";
			cin.get();
			return -1;
			}

			out = (oupfuncPtr) GetProcAddress(hLib, "Out32");
			if (out == NULL) {
			cout<<"GetProcAddress (ERROR EN EL OUP32).\n";
			cin.get();
			return -1;
			}
			string input;

			do
			{
			cout<<"\n ESCRIBA 'ABRIR' O 'CERRAR' PARA PRENDER Y APAGAR EL LED \n";
			cout<<"Input: ";
			cin>>input;
			if (input=="cerrar" || input=="CERRAR")
			{
   			out(0x378,0x01);   
    		cout<<"Light is CERRAR\n";
			}
			else if(input=="abrir" || input=="ABRIR")
			{
   			out(0x378,0);  
    		cout<<"Light is ABRIR\n";
			}
			}
			while (input != "salir" || input !="SALIR");
			system("PAUSE");
			return EXIT_SUCCESS;
			}
		

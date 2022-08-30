#include <time.h>
#include <iostream>
# include <cstring>
 using namespace std;
 
int main(){
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);

    char output[128];


    strftime(output, 128, "%H:%M", tlocal);
    printf("Hora: %s\n",output);
   
    bool ban=true;
    char horas[5];
    int i,ret,retu;
    char hora[5];
    cout<<"Ingrese la hora de encendido en el siguiente formato Hh:Mm= ";gets(hora);
    cout<<"Ingrese la hora de apagado en el siguente formato Hh:Mm";gets(horas);
     
    while(ban==true){
	
   	time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char output[128];
    strftime(output, 128, "%H:%M", tlocal);
    system("cls");
    ret=strcmp(output,hora);
    if(ret==0){
    	ban=false;
	}
	else{
		ban=true;
	}
	
}
	
	
    
    cout<<endl<<"leds encendidios"<<endl<<endl;
    system("PAUSE");
    ban=true;
    
    while(ban==true){
	
   	time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char output[128];
    strftime(output, 128, "%H:%M", tlocal);
    system("cls");
    retu=strcmp(output,horas);
    if(retu==0){
    	cout<<"Leds apagados"<<endl<<endl;
    	ban=false;
	}
	else{
		ban=true;
	}
	
}
    system("PAUSE");
}

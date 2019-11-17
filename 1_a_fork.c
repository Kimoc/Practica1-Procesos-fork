#include <stdlib>
#include <unistd>
#include <stdio>

void main(){

    //Creamos 3 variables para crear tres proceso hijos

    pid,pid2,pid3;

    //Creamos primer hijo
    pid=fork();

    if(pid==-1){
        printf("Error al crear hijo 1 ");
        exit(-1);
    }
    if(pid==0){
        printf("Soy el Hijo=1, Mi padre es %d , Mi PID= %d\n",getppid(),getppid());
    }
    //Creamos segundo hijo
    pid2=fork();
    if(pid2==-1){
        printf("Error al crear hijo 2 ");
        exit(-1);
    }
    if(pid2==0){
        printf("Soy el Hijo=2, Mi padre es %d , Mi PID= %d\n",getppid(),getppid());
    }
    //Creamos tercer hijo
    pid3=fork();
    if(pid3==-1){
        printf("Error al crear hijo 3 ");
        exit(-1);
    }
    if(pid3==0){
        printf("Soy el Hijo=3, Mi padre es %d , Mi PID= %d\n",getppid(),getppid());
    }
    
    //Imprimimos proceso padre

    printf("Proceso Padre = %d",getppid());
    exit(0);
    

    
}
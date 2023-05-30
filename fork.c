#include<stdio.h>
#include<unistd.h>
int main(){
    int p;
    printf("main process id is %d",getpid());
    p=fork();
    if(p==0){
        printf("Child process :-");
        printf("child process id is %d",getpid());
        printf("parent process id is %d",getppid());
    }
    else{
        printf("Parent process :-");
        printf("parent process id is %d",getpid());
    }
}
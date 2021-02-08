#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int top = -1;
char stack[MAX];
void push(char);
void pop();


void push(char a)
{
      top++;
      stack[top]  =  a;
}

void pop()
{
      top--;
}

int main(){
      int i,count=0;
      char s[MAX], a;
  
      switch (1)
            {
             case 1:
             printf("Yazi giriniz : \n");
             scanf("%s", s);
             for (i = 0;s[i] != '\0';i++){
                
				  a = s[i];
                  push(a);
                        }
                              for (i = 0;i < (strlen(s) / 2);i++){
                              if (stack[top] == stack[count]){
                                    pop();
                                    count++;
                                  }
                                  
                              else{
                                    printf("'%s' palindrom degildir.\n", s);
                                    break;
                              }
                        }
                        
                        if ((strlen(s) / 2)==  count)
                              
							    printf("'%s' palindromdur.\n",  s);
            
                        break;
                 }
      return 0;
}



    

//未完成まだ採点しないでください
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct passchar{
    char pass;
    struct passchar *next;
} passchar;

passchar *head = NULL;
void add_pass_to_front(char pass){
    passchar *new_char = (passchar *)malloc(sizeof(passchar));
    if(new_char == NULL){
        printf("メモリ確保エラー");
        exit(EXIT_FAILURE);
    }
    new_char->pass = pass;
    new_char->next = head;

    head = new_char;
}

char list_print(int n){
    int i=0;
    passchar* next=head;
    while(i<n){
        if(next->next == NULL){
            printf("メモリ参照エラー");
            exit(EXIT_FAILURE);
        }
        next = next->next;
        i++;
    }
    char pass = next->pass;
    return(pass);
}

char  judgecomplex(int n,char start,char end){
    int i=0;
    while(n>i){
        if(list_print(i) >= start && list_print(i)<=end){
            return (1);
        }
        i++;
    }
    return(0);
}

int main(){
    int flag[3];
    char word;
    int counter=0;
    int i=0;
    printf("enter your pass word. (plz enter ctrl + Z as EOF)");
    while(scanf("%c", &word) != EOF){
        add_pass_to_front(word);
        counter++ ;
    }
    if(counter <= 8){
        printf("Your password is too short to use. So, you shold consider long pass.");
        exit(EXIT_SUCCESS);
    }
    if(judgecomplex(counter,49,57)&&judgecomplex(counter,65,90)&&judgecomplex(counter,97,122)){
        printf("Your password is Strong.");
        exit(EXIT_SUCCESS);
    }

}
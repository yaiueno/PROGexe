//完成版2025/12/13 上野能登制作
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct passchar{
    char pass;
    struct passchar *next;
} passchar;
passchar *head = NULL;

void mfree(){
    passchar *current = head;
    passchar *temp;
    while (current != NULL) {
        temp = current;       
        current = current->next; 
        free(temp);           
    }
}

void add_pass_to_front(char pass){
    passchar *new_char = (passchar *)malloc(sizeof(passchar));
    if(new_char == NULL){
        mfree();
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
            mfree();
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
    printf("Enter your password. It must be 8 characters or more in length. Also You must include uppercase letters, lowercase letters, and digits.\nEnter your password:");
    while(scanf("%c", &word) != EOF){
        if(word == '\n' || word == '\r') break; // 改行はスキップ
        add_pass_to_front(word);
        counter++ ;
    }
    if(counter < 8){
        printf("Your password is too short to use. So, you should consider long pass.");
    }
    else if(judgecomplex(counter,'0','9')&&judgecomplex(counter,'A','Z')&&judgecomplex(counter,'a','z')){
        printf("Your password is Strong.");
    }
    else{
        printf("Your password is too easy to use. You should include uppercase letters, lowercase letters, and digits.");
    }
    mfree();
}

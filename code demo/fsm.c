#include<stdio.h>
enum{HeadSpace,COPY};
int main(){
    char op;
    int state;
    state = HeadSpace;   //初始前导空格状态
    printf("Input text, end of Ctrl+Z:\n");
    while ((op = getchar()) != EOF) {
        switch (state) {
            case HeadSpace:
                if (op != ' '&&op != '\t') { //不为空格时，才开始输出,若为空格，不输出
                    putchar(op);
                    state = COPY;
                }
                break;
            case COPY:
                if ((op == '\n')||(op==' ')) state = HeadSpace;
                else putchar(op);
                break;
        }
    }

    return 0;
}
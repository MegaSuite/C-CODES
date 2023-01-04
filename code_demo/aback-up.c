#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>
int all=0;
struct list {
    char num[15], name[9];
    int c, phy, e, math;
    float ave;
    struct list* next;
};
struct list* creat()
{
    int n;
    scanf("%d",&n);
    all+=n;
    int i;
    struct list* h = (struct list*)malloc(sizeof(struct list));
    struct list* p2 = h;
    for (i = 0; i < n; i++){
        struct list* p = (struct list*)malloc(sizeof(struct list)); 
        scanf("%s %s %d %d %d %d",&p->num,&p->name,&p->c,&p->phy,&p->e,&p->math);
        int sum;
        sum=p->c + p->phy + p->e + p->math;
        p->ave=(float)sum/4;
        p2->next = p;
        p2 = p;
        p->next = NULL;
    }   
    return h; 
}
void input(struct list* p3) {
    int n;
    scanf("%d",&n);
    all+=n;
    int i;
    struct list* p2 =p3;
    while(p2->next!=NULL)
        p2=p2->next;
    for (i = 0; i < n; i++){
        struct list* p = (struct list*)malloc(sizeof(struct list)); 
        scanf("%s %s %d %d %d %d",&p->num,&p->name,&p->c,&p->phy,&p->e,&p->math);
        int sum=p->c + p->phy + p->e + p->math;
        p->ave=(float)sum/4;
        p2->next = p;
        p2 = p;
        p->next = NULL;
    }
}
void out(struct list* p) {
    struct list *q = p->next;
    while (q != NULL) {
        printf("%s %s ", q->num, q->name);
        printf("%d %d %d %d\n", q->c, q->phy, q->e, q->math);
        q = q->next;
    }
}
void change(struct list* p, char* p1) {
    while (p != NULL) {
        if (strcmp(p->num, p1)==0){
            int x;
            scanf("%d",&x);
            if(x==1) scanf("%d",&p->c);
            else if(x==2) scanf("%d",&p->phy);
            else if(x==3) scanf("%d",&p->e);
            else if(x==4) scanf("%d",&p->math);
            int sum;
            sum=p->c + p->phy + p->e + p->math;
            p->ave=(float)sum/4;
        }
        p = p->next;
    }
}
void sum1(struct list* q) {
    struct list *p = q->next;
    while (p != NULL) {       
        printf("%s %s %.2f\n",p->num,p->name, p->ave);
        p = p->next;
    }   
}
void sum2(struct list* q) {
    struct list *p = q->next;
    int sum=0;
    while (p != NULL) {    
        sum=p->c + p->phy + p->e + p->math;   
        printf("%s %s %d %.2f\n",p->num,p->name,sum,p->ave);
        sum = 0;
        p = p->next;
    }
}
void swap(struct list* p,struct list* q){
    swop(p->num,q->num);
    swop(p->name,q->name);
    int temp;
    temp=p->c;p->c=q->c;q->c=temp;
    temp=p->phy;p->phy=q->phy;q->phy=temp;
    temp=p->e;p->e=q->e;q->e=temp;
    temp=p->math;p->math=q->math;q->math=temp;
    float teemp;
    teemp=p->ave;p->ave=q->ave;q->ave=teemp;
}
void swop(char pa[],char pb[]){
    int i=0;
    while(pa[i]!='\0'||pb[i]!='\0'){
        swop2(&pa[i],&pb[i]);
        i++;
    }
}
void swop2(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void upper(struct list* p){
    for(int i=0;i<all-1;i++){
        struct list *q=p->next;
        for(int j=0;j<all-1-i;j++){
            if(q->ave > q->next->ave){
                swap(q,q->next);
            }
            q=q->next;
        }
    }
}
void SaveAsFile()
{
    FILE *fp;
    fp=fopen(stu.dat,w);
    struct list L=p;            
	while(L->next!=NULL){      //将结构体信息写入二进制文件
		fwrite(L->next,sizeof(struct list),1,fp);
		L=L->next;
        // printf("写入成功!");
	}
	fclose(fp);   //关闭文件
}
void InputFromFile()
{
    FILE *fp；
    fp=fopen(stu.dat,r);  
    struct list L=p;              
	while(!feof(fp))
    {      //输出二进制文件全部信息
		fread(L,sizeof(struct list),1,fp);
		printf("%s %s %d %d %d %d\n",L->num,L->name,L->c,L->phy,L->e,L->math);
	}

}
void main() {
    struct list* p=NULL, * h;
    char c, *p1,ex[15];
    int u=0;
    while((c=getchar())!=EOF){
        if(c=='0') break;
        else if(c=='1'&&u==0){
            h=creat();
            u=1;
            upper(h);
        }
        else if(c=='1'&&u==1){
            input(h);
            upper(h);
        }
        else if(c=='2') out(h);
        else if(c=='3'){
            scanf("%s", &ex);
            p1=ex;
            change(h, p1);
            upper(h);
        }
        else if(c=='4') sum1(h);
        else if(c=='5') sum2(h);
    }    
}
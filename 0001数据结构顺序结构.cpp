#include<stdio.h>
#define MaxSize 20
typedef int ElemType;
typedef struct{
   ElemType data[MaxSize];
   int length;
}SqList;

void InitSqList(SqList &L);
void CreateSqList(SqList &L);
void ShowSqList(SqList L);
void InsertSqList(SqList &L,int i,int e);
void DeleteSqList(SqList &L,int i,int e);
int LocateElem(SqList L,int e);
void ReverseSqList(SqList &L);

void InitSqList(SqList &L)
{
	L.length=0;
} 

void CreateSqList(SqList &L)
{
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&L.data[i]);
		L.length++;
	}
}

void ShowSqList(SqList L)
{
	for(int i=0;i<L.length;i++)
	printf("%d ",L.data[i]);
}

void InsertSqList(SqList &L,int i,int e)
{
	for(int j=L.length;j>=i;j--)
	L.data[j]=L.data[j-1];
	L.data[i-1]=e;
	L.length++;
	
}

void DeleteSqList(SqList &L,int i,int e)
{
	for(int j=i;j<=L.length;j++)
	L.data[j-1]=L.data[j];
	
	L.length--; 
}

int LocateElem(SqList L,int e)
{   
    for(int i=0;i<L.length;i++)
    {
    	if(L.data[i]==e)
	    return i+1;
	}
	return 0;
}

void ReverseSqList(SqList &L)
{   
    int t;
	for(int i=0;i<(L.length/2+0.5);i++)
	{
		t=L.data[i];
		L.data[i]=L.data[L.length-i-1];
		L.data[L.length-i-1]=t;
	}
} 
 
main()
{
	
	SqList L;
	InitSqList(L);
	CreateSqList(L);
	ShowSqList(L);
	int e=888;int i=3;
	InsertSqList(L,i,e);
	printf("\n");
	ShowSqList(L);
	DeleteSqList(L,i,e);
    printf("\n");
	ShowSqList(L);
	printf("\n");
	LocateElem(L,e);
	printf("%d\n",i);
	ReverseSqList(L);
	ShowSqList(L);
	printf("\n");
}



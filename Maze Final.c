#include<stdio.h>
#include<stdlib.h>
#define MAX 25

int ins_maze1[6][6]={{1, 1, 1, 1, 1, 1},{1, 0, 0, 0, 0, 0},{1, 0, 0, 0, 1, 1},{1, 0, 0, 0, 1, 1},{0, 0, 0, 0, 1, 1},{1, 1, 1, 1, 1, 1},};
int ins_maze2[6][6]={{1, 1, 1, 1, 1, 1},{1, 0, 0, 0, 0, 0},{1, 0, 1, 0, 1, 1},{1, 0, 1, 0, 1, 1},{0, 0, 0, 0, 1, 1},{1, 1, 1, 1, 1, 1},};


int M1[15][15]={{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},{0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},{1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
	{1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1,},{1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1},{1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},{1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1},{1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1},
	{1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1},{1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1},{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1},
	{1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1},{1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1},{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1}};
	
int M2[15][15]={{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},{1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1},{1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},{1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
	{1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1},{1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1},{1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},{1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},{1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1},{1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1}};
	
int M3[21][21]=  {{1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
	{1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1},
	{1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1}, 
	{1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1 },       
	{1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1 },
	{1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
	{1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1}, 
	{1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1}, 
	{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1} ,
	{1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1},  
	{1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1}, 
	{1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},  
	{1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
	{1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
	
int M4[21][21]={{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
{1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1},
{1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1},
{1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1},
{1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1},
{1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1},
{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1},
{1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1},
{1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1},
{1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1},
{1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1},
{1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
{1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1},
{1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
{1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
{1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1},
{1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1},
{1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0},
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

int M5[21][21]= { { 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
	{1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1},
	{1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1},
	{1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1},
	{1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
	{1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
	{1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1},
	{1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0 ,1 ,0, 1},
	{1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
	{1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0 ,1, 0, 1},
	{1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
	{1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
	

typedef struct mdata
{
	int gr,gc;			//number of rows and columns in a grid respectively
	int spr,spc;		//starting point row index,starting point column index
	int fpr,fpc;		//finishing point row index,finishing point column index
}Mdata;


typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
	struct node *up;
	struct node *down;
}Node;

typedef struct grid
{
	int r,c;
	Node *rowheads[MAX];
	Node *ppos;					//points to the node on which player is present
	Node *start;				//points to the starting point of the maze
	Node *end;					//points to the finishing point of the maze
}Grid;

Grid* create_grid(int r,int c)
{
	int i,j;
	Node *temp,*follow,*Up;
	Up=NULL;
	
	Grid *g;
	g=(Grid*)malloc(sizeof(Grid));
	g->ppos=NULL;
	g->start=NULL;
	g->end=NULL;


	g->r=r;
	g->c=c;
	for(i=0;i<r;i+=1)
	{
		temp=(Node*)malloc(sizeof(Node));	//temp=create_node(1);
		temp->data=1;
		temp->next=NULL;
		temp->prev=NULL;
		temp->up=NULL;
		temp->down=NULL;
		
		if(Up!=NULL)
		{
			temp->up=Up;
			Up->down=temp;
			if(Up->next!=NULL)
			{
					Up=Up->next;
			}
		}
		g->rowheads[i]=temp;
		follow=temp;
		temp=NULL;
		for(j=1;j<c;j+=1)			//adding following nodes to the row
		{
			temp=(Node*)malloc(sizeof(Node));	//temp=create_node(1);
			temp->data=1;
			temp->next=NULL;
			temp->prev=NULL;
			temp->up=NULL;
			temp->down=NULL;
			follow->next=temp;
			temp->prev=follow;
			//printf("%d",2);
			if(Up!=NULL)
			{
				temp->up=Up;
				Up->down=temp;
				if(Up->next!=NULL)
				{
					Up=Up->next;
				}
			}
			follow=follow->next;
			temp=NULL;
		}
		follow=NULL;
		Up=g->rowheads[i];
	}
	return g;
}



void grid_edit(Grid *g,Mdata *M,int Ar[g->r][g->c])
{
	Node *temp;
	int i,j;
	for(i=0;i<g->r;i+=1)
	{
		temp=g->rowheads[i];
		for(j=0;j<g->c;j+=1)
		{

			if(i==M->spr && j==M->spc){
				g->start=temp;			//making the start pointer point on starting node
			}
			else if(i==M->fpr && j==M->fpc){
				g->end=temp;			//making the end pointer point on finishing node
			}
			
			temp->data=Ar[i][j];
			if(temp->next!=NULL)
			{
				temp=temp->next;
			}
		}
	}
	g->ppos=g->start;				//putting the player at the starting position
}

void take_grid_input(int R,int C,int Ar[R][C],Mdata *Maze)
{
	int r,c;
	int sr=0,sc,sv=0;
	int M,Q=0;
	
	char S[C];
	S[0]='V';
	for(sc=1;sc<C;sc+=1)
	{
		S[sc]='_';
	}
	
	r=0;c=0;
	while(Q!=1)
	{
		system("cls");
		for(r=0;r<R;r+=1)
		{
			if(r==sr)
			{
				for(sc=0;sc<C-1;sc+=1)
				{
					putchar(S[sc]);printf(" ");
				}
				putchar(S[sc]);printf("\n");
			}
			else{
				printf("\n");
			}
			for(c=0;c<C-1;c+=1)
			{
				if(r==Maze->spr && c==Maze->spc)
				{
					printf("%c ",83);
				}
				else if(r==Maze->fpr && c==Maze->fpc)
				{
					printf("%c ",70);
				}
				else{
					printf("%d ",Ar[r][c]);
				}
			}
			printf("%d\n",Ar[r][c]);
		}
		printf("\n");
		
		printf("	8:-UP\n");
		printf("4:-LEFT		6:-RIGHT\n");
		printf("	2:-DOWN\n");
		printf("\n");
		
		printf("5:-TOGGLE\n0:-QUIT");
		printf("\n");
		
		printf("your command here:-");
		scanf("%d",&M);
		
		switch(M)
		{
			case 8:if(sr!=0)
					sr-=1;
				   break;		
			
			case 2:if(sr!=R-1)
					sr+=1;
				   break;
			
			case 4:if(sv!=0){
					S[sv-1]='V';
					S[sv]='_';
					sv-=1;
				   }
				   break;
			
			case 6:if(sv!=C-1){
					S[sv+1]='V';
					S[sv]='_';
					sv+=1;			
				   }
				   break;
			
			case 5:if((sr!=Maze->spr || sv!=Maze->spc)&&(sr!=Maze->fpr || sv!=Maze->fpc))
					{
						if(Ar[sr][sv]==0)
							Ar[sr][sv]=1;
				   		else
							Ar[sr][sv]=0;
					}
				   	break;
			case 0:printf("Are you sure u have finished editing the grid(0 or 1)??");
				   scanf("%d",&Q);break;
				   	   
		}
	}
	//return Ar;
} 

void disp_grid(Grid *g)
{
	Node *temp;
	int i,j;

	temp=g->rowheads[0];
	printf("\t\t\t\t\t\t ");
	for(i=0;i<g->c;i+=1){
		if(temp==g->start){					//displaying start point or finishing point
			printf("V");					//if it is at the top of maze
		}
		else if(temp==g->end){
			printf("^");
		}
		else{
			printf(" ");
		}
		temp=temp->next;
	}
	printf("\n");

	for(i=0;i<g->r;i+=1)
	{
		temp=g->rowheads[i];
		printf("\t\t\t\t\t\t");

		if(temp==g->start){			//displaying start point or finishing point
			printf(">");					//if it is at the left of maze
		}
		else if(temp==g->end){
			printf("<");
		}
		else{
			printf(" ");
		}		


		for(j=0;j<g->c;j+=1)
		{
			if(temp==g->ppos && temp->data!=2){
				printf("P");
			}
			else{
				switch(temp->data)
				{
					case 2:printf("%c",'X');
					break;
					case 1:printf("%c",219);
					break;
					case 0:printf("%c",' ');
					break;
			
				}
			}
			temp=temp->next;
		}
		
		if(temp==g->start){			//displaying start point or finishing point
			printf("<\n");			//if it is at the right of maze
		}
		else if(temp==g->end){
			printf(">\n");
		}
		else{
			printf("\n");
		}		

		temp=NULL;
	}
	
	temp=g->rowheads[g->r-1];
	printf("\t\t\t\t\t\t ");
	for(i=0;i<g->c;i+=1){
		if(temp==g->start){					//displaying start point or finishing point
			printf("^");					//if it is at the bottom of maze
		}
		else if(temp==g->end){
			printf("V");
		}
		else{
			printf(" ");
		}
		temp=temp->next;
	}
	printf("\n");
}

void destroy_grid(Grid *g)
{
	Node *temp,*iter;

	g->ppos=NULL;
	g->start=NULL;
	g->end=NULL;

	int i,j;
	for(i=0;i<g->r;i+=1)
	{
		iter=g->rowheads[i];
		for(j=0;j<g->c;j+=1)
		{
			temp=iter;
			if(iter->next!=NULL)
			{
				iter=iter->next;
			}
			else{
				iter=NULL;
			}
			free(temp);
		}
	}
	free(g);
}

int findEnd(Node *N,Node *P,Node *E)
{
	if(N==NULL){
		return 0;
	}
	else if(N->data==1){
		return 0;
	}
	else if(N==E){
		N->data=2;
		return 2;
	}
	else{
		if(N->up!=P){							//if(N->up!=NULL && N->up!=P){	(a replacement just in case)
			N->data+=findEnd(N->up,N,E);
		}
		if(N->down!=P){							//if(N->down!=NULL && N->down!=P){	(a replacement just in case)
			N->data+=findEnd(N->down,N,E);	
		}
		if(N->next!=P){							//if(N->next!=NULL && N->next!=P){	(a replacement just in case)
			N->data+=findEnd(N->next,N,E);
		}
		if(N->prev!=P){							//if(N->prev!=NULL && N->prev!=P){	(a replacement just in case)
			N->data+=findEnd(N->prev,N,E);
		}
		return N->data;
	}
}


void Pathfind(Grid *G)
{
	int f=findEnd(G->start,NULL,G->end);
	system("cls");
	switch(f){
		case 0:disp_grid(G);printf("THERE'S NO WAY FROM START TO END!!!\n");break;
		case 2:disp_grid(G);printf("YOUR MAZE HAS BEEN SOLVED!!\n");
	}
}


void Ardisp(int R,int C,int M[R][C])
{
	int r,c;
	for(r=0;r<R;r+=1)
	{
		printf("\t\t\t\t\t\t ");
		for(c=0;c<R;c+=1)
		{
			switch(M[r][c])
			{
				case 1:printf("%c",219);break;
				case 0:printf(" ");break;
			}
		}
		printf("\n");
	}
}

void indexshow(int R,int C,int M[R][C])
{
	int r,c;
	system("cls");
	
	printf(" ");
	for(c=0;c<C;c+=1)
	{
		printf("%d ",c);
	}
	printf("\n");
	
	for(r=0;r<R;r+=1)
	{
		printf("%d)",r);
		for(c=0;c<C;c+=1)
		{
			printf("%d ",M[r][c]);
		}
		printf("\n");
	}
}

int main()
{
	Grid *g;
	Mdata Maze;

	Mdata Maze1;
	Maze1.gr=15;
	Maze1.gc=15;
	Maze1.spr=1;
	Maze1.spc=0;
	Maze1.fpr=14;
	Maze1.fpc=13;
	 

	Mdata Maze2;
	Maze2.gr=15;
	Maze2.gc=15;
	Maze2.fpr=0;
	Maze2.fpc=1;
	Maze2.spr=14;
	Maze2.spc=13;
	
	Mdata Maze3;

	Maze3.gr=21;
	Maze3.gc=21;
	Maze3.spr=0;
	Maze3.spc=9;
	Maze3.fpr=20;
	Maze3.fpc=11;
	
	Mdata Maze4;
	
	Maze4.gr=21;
	Maze4.gc=21;
	Maze4.spr=0;
	Maze4.spc=1;
	Maze4.fpr=19;
	Maze4.fpc=20;

	Mdata Maze5;
	
	Maze5.gr=21;
	Maze5.gc=21;
	Maze5.spr=0;
	Maze5.spc=9;
	Maze5.fpr=20;
	Maze5.fpc=11;

	int choice;
	int pch;					//provision type choice
	int ch,Com;					//maze choice,Command
	int ready;
	
	int D=0;
	int k=1,rec,flag=0;

	int R,C;
	int r,c;	

	printf("WELCOME TO THE A-MAZE-ING WORLD OF LABYRINTHS\n");
	printf("\n");
	printf("1)PROVIDE A MAZE\n2)PLAY MAZE CHALLENGE\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			system("cls");
			printf("1)Create your own Grid\n2)Provide from the available ones\n");
			printf("your choice Here:-");
			scanf("%d",&pch);
			if(pch==1)
			{
				//printf("WORK UNDER PROGRESS!!\n");break;
	
					system("cls");
					printf("Enter number of rows and columns u want,respectively:-");
					scanf("%d%d",&R,&C);
					
					
					int M[R][C];
					Maze.gr=R;
					Maze.gc=C;
					Maze.spr=0;Maze.spc=1;
					Maze.fpr=R-1;Maze.fpc=C-2;
					
					for(r=0;r<Maze.gr;r+=1)
					{
						for(c=0;c<Maze.gc;c+=1)
						{
							M[r][c]=1;
						}
					}
					
					M[Maze.spr][Maze.spc]=0;M[Maze.fpr][Maze.fpc]=0;
					
					printf("\n");
					printf("INSTRUCTIONS	(******MUST READ******)\n");
					printf("\n");
					printf("-> node[%d][%d] is the starting point(Marked by S)\n",Maze.spr,Maze.spc);
					printf("-> node[%d][%d] is the finishing point(Marked by F)\n",Maze.fpr,Maze.fpc);
					printf("-> please make sure that all paths in ur maze are of same width,i.e. 1 character;\n");
					printf("\t avoid making lines like the one in below example\n");printf("\n");
					Ardisp(6,6,ins_maze1);
					printf("-> please avoid creating closed-circuit paths in your maze,like the one in the following example\n");
					printf("\n");
					Ardisp(6,6,ins_maze2);
					printf("\n\n\n");

					printf("enter any integer to continue\n");
					scanf("%d",&ready);
					ready=1;
					
					take_grid_input(Maze.gr,Maze.gc,M,&Maze);
					
					g=create_grid(Maze.gr,Maze.gc);
					grid_edit(g,&Maze,M);
			}
			else{
					system("cls");
					printf("Select the maze:-\n");printf("\n");
					
					printf("1)\n");
					Ardisp(Maze1.gr,Maze1.gc,M1);
			
					printf("2)\n");
					Ardisp(Maze2.gr,Maze2.gc,M2);
					
					printf("3)\n");
					Ardisp(Maze3.gr,Maze3.gc,M3);
					
					printf("4)\n");
					Ardisp(Maze4.gr,Maze4.gc,M4);
	
					printf("5)\n");
					Ardisp(Maze5.gr,Maze5.gc,M5);
			
					printf("your choice here:-");
					scanf("%d",&ch);
					switch(ch)
					{
						case 1:g=create_grid(Maze1.gr,Maze1.gc);
						 	   grid_edit(g,&Maze1,M1);break;
						case 2:g=create_grid(Maze2.gr,Maze2.gc);
							   grid_edit(g,&Maze2,M2);break;
						case 3:g=create_grid(Maze3.gr,Maze3.gc);
			   				   grid_edit(g,&Maze3,M3);break;
			   			case 4:g=create_grid(Maze4.gr,Maze4.gc);
			   				   grid_edit(g,&Maze4,M4);break;
						case 5:g=create_grid(Maze5.gr,Maze5.gc);
			   				   grid_edit(g,&Maze5,M5);break;	   
					}
					
			}
			Pathfind(g);
			destroy_grid(g);
			break;
		case 2:	
			system("cls");
			printf("select the maze:-\n");

			printf("1)\n");
			Ardisp(Maze1.gr,Maze1.gc,M1);
			
			printf("2)\n");
			Ardisp(Maze2.gr,Maze2.gc,M2);
			
			printf("3)\n");
			Ardisp(Maze3.gr,Maze3.gc,M3);
			
			printf("4)\n");
			Ardisp(Maze4.gr,Maze4.gc,M4);
			
			printf("5)\n");
			Ardisp(Maze5.gr,Maze5.gc,M5);
			
			printf("your choice here:-");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:g=create_grid(Maze1.gr,Maze1.gc);
					   grid_edit(g,&Maze1,M1);break;
				case 2:g=create_grid(Maze2.gr,Maze2.gc);
					   grid_edit(g,&Maze2,M2);break;
				case 3:g=create_grid(Maze3.gr,Maze3.gc);
			   		   grid_edit(g,&Maze3,M3);break;
				case 4:g=create_grid(Maze4.gr,Maze4.gc);
			   		   grid_edit(g,&Maze4,M4);break;
				case 5:g=create_grid(Maze5.gr,Maze5.gc);
			   		   grid_edit(g,&Maze5,M5);break;		  	   	   	 
			}
	
	
			

			while(D!=1){
				skip:
   			    system("cls");					
				disp_grid(g);

				if(g->ppos==g->end){
					printf("You've helped the hungry rat to to eat its CHEESE\nCONGRATULATIONSS!!!\n");printf("\n");							D=1;
				}
				else{
    				printf("\n\t\t\t\tNOTE : You can enter maximum of 9 commands(valid) at a time.\n");
					printf("\t\t\t\t\t\t\t8 -> UP\n");
					printf("\t\t\t\t\t4 -> LEFT\t\t\t6 -> RIGHT\n");
					printf("\t\t\t\t\t\t\t2 -> DOWN\n");
					printf("\n");

					printf("\t\t\t\t\t\t\t0 -> QUIT");
					printf("\n");

					printf("\n\t\t\t\t\tGive your direction or the command : ");
					scanf("%d",&Com);

					//For Quitting-Validates and then enter into the inner loop for execution.
					if(Com==0){
       			    printf("Are you sure you wanna quit!\n\t\tYes(1)/NO(0)  :  ");
       		       	scanf("%d", &k);
       		        if(k==1)
					   findEnd(g->ppos,NULL,g->end);
					   system("cls");
					   disp_grid(g);
					   printf("HERE's YOUR WAY\n");	
        	           break;
          			}

     		       	while(Com>=1){
   			            rec = Com%10;
          			    switch(rec){
            	        	case 8:if(g->ppos->up!=NULL && g->ppos->up->data!=1)
                  			       	{
                  				        g->ppos=g->ppos->up;
                      				}
             			           	break;
          			       	case 2:if(g->ppos->down!=NULL && g->ppos->down->data!=1)
                       				{
                       			    	g->ppos=g->ppos->down;
                       				}
                       				break;
               				case 4:if(g->ppos->prev!=NULL && g->ppos->prev->data!=1)
                       				{
                          				g->ppos=g->ppos->prev;
                       				}
                       				break;
               				case 6:if(g->ppos->next!=NULL && g->ppos->next->data!=1)
                       				{
                          				g->ppos=g->ppos->next;
                       				}
                      			 	break;
                			/*case 0: printf("Are yo sure, you wanna give up YES(1)/NO(0) : ");
							scanf("%d",&D);break;*/

               				default:printf("You entered a wrong command, do you want to continue? YES(0)/NO(1) : ");
                           			scanf("%d",&D);
                           			if(D==0 && flag>=2)
                           			{
              	             			goto skip;//Similar to break statement, i.e., it comes out of the inner loop and starts from the outer loop.
                           			}
                           			flag++;
                           			break;
           				}
                		Com = Com/10;//Accessing each digit of multiple command instruction
            		}
				}
			}
			destroy_grid(g);break;	//case 2 ends here
	}								//main switch[switch(choice)] terminates
	
	printf("THANKS FOR PLAYING!!\n");
}



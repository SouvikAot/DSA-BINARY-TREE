#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
	
};
struct node* createnode(int data){
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=data;
	p->left=NULL;
	p->right=NULL;
	return p;
}
void preorder(struct node* root){
	if(root!=NULL){
	printf("%d\t",root->data);
	preorder(root->left);
	preorder(root->right);
}
}
void postorder(struct node *root){
	struct node * p;
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
	}
	
}
void inorder(struct node *root){
	struct node * p;
	if(root!=NULL){
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
		
	}
	
}
int main(){
	struct node *p1=createnode(4);
	struct node *p2=createnode(1);
	struct node *p3=createnode(6);
	struct node *p4=createnode(5);
	struct node *p5=createnode(2);
	p1->left=p2;
	p1->right=p3;
	p2->left=p4;
	p2->right=p5;
	printf("PREORDER TRAVERSAL DATA ARE\n");
	preorder(p1);
	
	printf("\nPOSTORDER TRAVERSAL DATA ARE\n");
	postorder(p1);
	
	printf("\nINORDER TRAVERSAL DATA ARE\n");
	inorder(p1);
}

#include<stdio.h>
#include<conio.h>
struct rec
{
long num;
struct rec
*left;
struct rec *right;
}
;
struct rec *tree,*second,*head;
struct rec insert(struct rec *tree,long num);
struct rec *copy(struct rec *tree);
void inorder (struct rec *tree);
main()
{
int choice;
long digit;
do
{
choice=select();
switch(choice)
{
case 1:puts("enter integers:to quit enter 0");
scanf("%d",&digit);
while(digit!=0)
{
tree=insert(tree,digit);
scanf("%1d",&digit);
}
continue;
case 2:copy(tree);
continue;
case 3:puts("inorder traversing tree");
inorder (tree);
continue;
case 4:puts("end");
exit(0);
}
}
while(choice!=4);
}
int select()
{
int selection;
do
{
puts("enter 1:insert a node in the bst");
puts("enter 2:copy a tree to anoyher bst");
puts("enter 3:display (inorder)the bst");
puts("enter 4:end");
puts("enter your choice");
scanf("%d",&selection) ;
if((selection<1)||(selection>4))
{
puts("wrong choice!try again");
getchar();
}
}
while((selection<1)||(selection>4));
return selection;
}
struct rec *insert(struct rec *tree,long digit)
{
if(tree==null)
{
tree=(struct rec *)
malloc(sizeof(struct rec));
tree->left=tree->right=null;
tree->num=digit;
}
else
if(digit<tree->num)
tree->left=insert(tree->left,digit);
else
if(digit>tree->num)
tree->right=insert(tree->right,digit);
else
if(digit==tree->num)
{
puts("duplicate nodes:program existed");
exit(0);
}
return(tree);
}
struct rec *copy(struct rec *tree)
{
second=(struct rec *)malloc(sizeof(struct rec)) ;
head=second;
if(tree!=null)
{
second->num=tree->num;
if(tree->left!=null)
{
second->left->num=tree->left->num;
copy(tree->right);
}
if(tree->right!=null)
{
second->right->num=tree->num;
copy(tree->left);
}
}
return(head);
}
void inorder(struct rec *tree)
{
if(tree!=null)
{
inorder(tree->left);
printf("%121d\n",tree->num);
inorder(tree->right);
}
}




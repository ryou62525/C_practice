#include <stdio.h>
#include <stdlib.h>

typedf struct _Tree Tree;

struct _Tree{
	int n;
	Tree *left, *right;
};

Tree *Tree_new(){
	Tree *p = malloc(sizeof(Tree));
	p-> = n;
	p->left = p->right = NULL
	return p;
}

static void indent()
{
	int i;
	for(i=0;i<leve)


}

void Tree_print(Tree *tree
{
	printf("n = %d\n", tree->n);
	printf("left = %p\n", tree->left);
	if(tree->left){
		Tree_print(tree->left);
	}
	printf("right = %p\n", tree->right);
	if(tree->right){
		Tree_print(tree->right);
	}
}

int main()
{
	Tree *root = Tree_new(0);
	Tree *left = Tree_new(1);
	Tree *right = Tree_new(-1);
	root->left = left;
	root->right = right;
	Tree_print(root);
	

	return 0;
}

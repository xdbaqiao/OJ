#include <iostream>
#include <cstdio>

using namespace std;

int main(int argv,char *argv)
{
	typedef struct BSTNode BST;
	typedef struct BSTNode *Position;
	typedef struct BSTNode *SearchTree;

	struct BSTNode
	{
		int key;
		Position parent,left,right;
	};

	return 0;
}


// 二叉树,先序遍历
viod PreOrderTraverse(SearchTree tree)
{
	if(tree != NULL)
	{
		printf("%d ",tree->key);
		PreOrderTraverse(tree->left);
		PreOrderTracerse(tree->right);
	}
}

//查找
Position BSTreeSearch(SearchTree tree,int k)
{
	if(tree == NULL || k == tree->key) return tree;
	if(k < tree->key) return BSTreeSearch(tree->left,k);
	else return BSTreeSearch(tree->right,k);
}

//查找 v2
Position BSTreeSearch2(SearchTree tree,int k)
{
	while(tree != NULL && k != tree->key)
	{
		if(tree->key > k) tree = tree->left;
		else tree = tree->right;
	}
	return tree;
}


//最小值

Position BSTreeMinimim(SearchTree tree)
{
	while(tree->left != NULL) tree = tree->left;
	return tree;
}

//后继

Position BSTreeSuccessor(Position x)
{
	if(x->right != NULL) return Position BSTreeMinimim(x->right);
	Position y = x->parent;
	while(y != NULL && x == y->right)
	{
		x = y;
		y = x->parent;
	}
	return y;
}

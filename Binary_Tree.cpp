#include<bits/stdc++.h>

using namespace std;

typedef struct node{
	int infor;
	struct node *left;
	struct node *right;
} *Tree;

void init(Tree *T){
	*T = NULL;
}

Tree getNode(){
	Tree p;
	p = new node;
	return p;
}

void freeNode(Tree p){
	delete p;
}

int isEmpty(Tree *T){
	if(*T == NULL){
		return 1;
	}
	return 0;
}

Tree MakeNode(int x){
	Tree p;
	p = getNode();
	p->infor = x;
	p->left = NULL;
	p->right = NULL;
	return p;
}

Tree Search(Tree T, int x){
	node *p;
	if(T->infor == x){
		return T;
	}
	if(T == NULL){
		return NULL;
	}
	p = Search(T->left, x);
	if(p == NULL){
		p = Search(T->right, x);
	}
	return p;
}

Tree MakeRoot(Tree T, int x){
	if(T == NULL){
		MakeNode(x);
	}
	return T;
}

void Addleft(Tree T, int x, int y){
	Tree p, q;
	p = Search(T, x);
	if(p == NULL){
		return;
	}
	else if(p->left != NULL){
		return;
	}
	else{
		q = MakeNode(y);
		p->left = q;
	}
}
void Addright(Tree T, int x, int y){
	Tree p, q;
	p = Search(T, x);
	if(p == NULL){
		return;
	}
	else if(p->right != NULL){
		return;
	}
	else{
		q = MakeNode(y);
		p->right = q;
	}
}
void Removeleft(Tree T, int x){
	Tree p, q;
	p = Search(T, x);
	if(p == NULL){
		return;
	}
	else if((p->left)->right != NULL || (p->left)->left != NULL){
		return;
	}
	else{
		q = p->left;
		p->left = NULL;
		delete q;
	}
}
void Removeright(Tree T, int x){
	Tree p, q;
	p = Search(T, x);
	if(p == NULL){
		return;
	}
	else if((p->right)->right != NULL || (p->right)->left != NULL){
		return;
	}
	else{
		q = p->right;
		p->right = NULL;
		delete q;
	}
}
//duyet theo thu tu truoc
void NLR(Tree T){
	if(T != NULL){
//		<tham node>
		cout << T->infor << endl;
		NLR(T->left);
		NLR(T->right);
	}
}
//duyet theo thu tu giua
void preorder(Tree T){
	if(T != NULL){
		NLR(T->left);
//		<tham node>
		cout << T->infor << endl;
		NLR(T->right);
	}
}
//duyet theo thu tu sau
void postOrder(Tree T){
	if(T != NULL){
		NLR(T->left);
		NLR(T->right);
//		<tham node>
		cout << T->infor << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		Tree T;
		postOrder(T);
	}
	return 0;
}

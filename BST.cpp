#include <iostream>

using namespace std;

int count = -1;

struct node{
	int info;
	struct node *left, *right;
} *root;

void insert( node *tree, node *newnode ){
	
	count ++;
		
	if( root == NULL ){
		root = new node;
		root -> info = newnode -> info;
		root -> left = NULL;
		root -> right = NULL;
		
		cout << count << endl;
		return;
	} 
	
	if( tree -> info > newnode -> info ){
		if( tree -> left != NULL ){
			insert( tree -> left, newnode ); 
		} else {
			tree -> left = newnode;
			( tree -> left ) -> left = NULL;
			( tree -> left ) -> right = NULL;
			cout << count << endl;
			return;
		}
	}
	
	if( tree -> info < newnode -> info ){
		if( tree -> right != NULL ){
			insert( tree -> right , newnode );
		} else {
			tree -> right = newnode;
			( tree -> right ) -> left = NULL;
			( tree -> right ) -> right = NULL;
			cout << count << endl;
			return;
		}
	}
}

int main ( void ){
	
	int  cases;
	node *temp;
	
	cin >> cases;
	
	while( cases -- ){
		temp = new node;
		cin >> temp -> info;
		insert( root, temp );
		
	}

	return 0;
}


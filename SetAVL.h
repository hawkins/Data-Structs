/*******************************************************************************
* SetBst.h
*
* author: Rikk Anderson
* date created: 2015
* last updated: 9/28/2015
*
* This class defines a set container that uses a binary search tree as the
* storing structure.
* This class was modified to fit the AVLTree data structure.
*******************************************************************************/

#include "AVLTree.h"

class SetAVL {
	private:
		AVLTree* tree;
		TreeNode* treeArray;	// used to store linear representation of SetBst
		int arraySize;				// number of nodes in the tree
		void genTreeArray();
		void genTreeArray(TreeNode* node, int &position);
		void PathLength(TreeNode* node, int item, int &steps);

	public:
		SetAVL();
		TreeNode* Find(int item) const;
		void Insert(int item);
		void Delete(int item);
		void Clear();
		void PathLength(int item,int &steps);
		TreeNode* begin();		// returns a pointer for iterating through treeArray
		TreeNode* end();			// returns a pointer for iterating through treeArray
};

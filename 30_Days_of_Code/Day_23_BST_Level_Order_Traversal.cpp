#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
      //Write your code here
      int height = getHeight(root);
      
      //loop for each level
      for (int i=0; i<height; i++)
      {
        //call print level
        printLevel(root, i);
      } 
  
	}
    
    void printLevel (Node* root, int level)
    {
        if (root == nullptr)
        {
            return;
        }
        if (level == 0)
        {
            cout << root->data << " ";
        }
        //go left, and go right
        else if (level > 0)
        {
            printLevel(root->left, level-1);
            printLevel(root->right, level-1);
        }
    }
    
    int getHeight (Node* root)
    {
        //if at null, return 0
        if (root == NULL)
        {
            return 0;
        }
        //recursively call getheight and return the highest value
        return std::max(getHeight(root->right)+1, getHeight(root->left)+1);
    }

};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
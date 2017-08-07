#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
struct node
{
	int data;
	node* next;
};
node* insert_front(node* last,int x)
{
	node* temp =new node();
	temp->data =x;
	if(last==NULL)
	{
		last = temp;
		temp->next = last;
		return last;
	}
	temp->next =last->next;
	last->next = temp;
	return last; 
}
node* insert_end(node* last,int x)
{
	node* temp = new node();
	temp->data =x;
	if(last==NULL)
	{
		last = temp;
		temp->next = last;
		return last;
	}
	temp->next =last->next;
	last->next = temp;
	last = temp;
	return last; 
}
void print(node* last)
{
	node* ptr=last->next;
	do
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	while(ptr!= last->next);
	cout<<endl;
	return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node* last=NULL;
    last = insert_front(last,3);
    last = insert_front(last,5);
    last = insert_front(last,2);
    last = insert_front(last,8);
    print(last);
    last = insert_end(last,3);
    print(last);
    return 0;
}

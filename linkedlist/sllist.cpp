#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node *next;
	node(int a){
		val=a;
		next=NULL;
	}
};
//print all node in linked list
void show(node* &head){
	node* temp=head;
	while(temp->next!=NULL){
		cout << temp->val <<"->";
		temp=temp->next;
	}
	cout << temp->val << endl;
}
//insertion operations
void insertAtStart(node* &head,int a){
	node* n=new node(a);
	if(head==NULL)
		head=n;
	else{
		n->next=head;
		head=n;
	}
}
void insertAtEnd(node* &head,int a){
	node* n=new node(a);
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
//deletion operations
void deleteAtStart(node* &head){
	head=head->next;
}
void deleteNode(node* &head,int a){
	if(head->val==a)
		head=head->next;
	else{
		node* temp=head;
		while(temp->next->val!=a){
			temp=temp->next;
		}
		temp->next=temp->next->next;
	}
}
//find nth element from end
void nth(node* &head,int n){
	node* cur=head;
	node* toEnd=head;
	for(int i=0;i<n;i++){
		toEnd=toEnd->next;
	}
	while(toEnd!=NULL){
		cur=cur->next;
		toEnd=toEnd->next;
	}
	cout << cur->val << endl;
}
//[no] reverse linked list
void revlist(node* &head,node* prev,node* cur){
	if(cur->next==NULL){
		head=cur;
		head->next=prev;
		return;
	}
	node* next=cur->next;
	cur->next=prev;
	if(cur->next!=NULL){
		revlist(head,cur,next);
	}
	else{
		head=cur;
	}
}
//[no] even at start
void evenStart(node* head){
	node* st=head;
	while(st->next!=NULL){
		if(st->val/2==1)
			break;
		else{
			st=st->next;
		}
	}
	node* en=st->next;
	while(st->next!=NULL and en->next!=NULL){
		if(en->val/2==0){
			int t=st->val;
			st->val=en->val;
			en->val=t;
			while(st->next!=NULL){
				if(st->val/2==1)
					break;
				else{
					st=st->next;
				}
			}
			en=st;
		}
		else{
			en++;
		}
	}
}
int main(){
	node *head;
	insertAtStart(head,1);
	insertAtEnd(head,2);
	insertAtEnd(head,3);
	insertAtEnd(head,4);
	insertAtEnd(head,5);
	insertAtEnd(head,6);
	show(head);
	//evenStart(head);
	show(head);
	//revlist(head,NULL,head);
	//show(head);
	/*
	deleteNode(head,2);
	show(head);
	deleteAtStart(head);
	show(head);
	*/
	return 0;
}

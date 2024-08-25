#include<iostream>
#include<cstring>
using namespace std;


typedef	struct Node{
		char Name[20];
		long phone;
		struct Node *next;
	}PhoneBook;

PhoneBook *head=0, *tail=0,*pt=0,*pt1=0,*pt2=0;

void add(string name,long phone){
if(head==0){
   head =(PhoneBook *) malloc(sizeof(PhoneBook));
   strcpy(head->Name,name.c_str());
head->phone=phone;
head->next=0;
tail=head;
}else{
    pt =(PhoneBook *) malloc(sizeof(PhoneBook));
strcpy(pt->Name,name.c_str());
pt->phone=phone;
pt->next=0;
tail->next=pt;
tail=pt;
}
}

void insert_node(string name,long phone,string position){
    PhoneBook *left_pt=head;
pt=head;
while(pt->next!=0){

if(strcmp(pt->Name,position.c_str())==0)break;
left_pt=pt;
pt=pt->next;
}
pt2 =(PhoneBook *) malloc(sizeof(PhoneBook));
strcpy(pt2->Name,name.c_str());
pt2->phone=phone;
pt2->next=pt;
left_pt->next=pt2;
}

void delete_node(string position){
PhoneBook *left_pt=head;
pt=head;
while(pt->next!=0){
if(strcmp(pt->Name,position.c_str())==0)break;
left_pt=pt;
pt=pt->next;
}
left_pt->next=pt->next;
free(pt);
}

void list(){
    if(head==0){cout<<"empty list"<<endl;return;}
pt=head;
while(pt->next!=0){
cout<<"node address= "<<pt<<" name= "<<pt->Name<<" phone= "<<pt->phone<<" next address= "<<pt->next<<endl;
pt=pt->next;
}
cout<<"node address= "<<pt<<" name= "<<pt->Name<<" phone= "<<pt->phone<<" next address= "<<pt->next<<endl;
}

void destroy(){
    pt=head;
while(pt->next!=0){
    cout<<pt->next<<endl;
 //free(pt);
pt=pt->next;
}
free(pt);
head=0;tail=0;
}

int main(){
add("ohm",1234);
add("ohm2",1234);
add("ohm3",1234);
add("ohm4",1234);
insert_node("ohmX",5555,"ohm3");
insert_node("ohmY",5555,"ohm4");
delete_node("ohm3");

list();
destroy();
list();
return 0;
}

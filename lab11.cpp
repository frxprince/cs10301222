#include<iostream>
#include<cstring>
using namespace std;
typedef struct Node
{
 char Name[20];
 int Age;
 struct Node *next;
}PhoneBook;
PhoneBook *head, *tail, *pt, *pt1, *pt2; 
void list(){
  if(head==0){cout<<"Empty"<<endl;return;}
  pt=head; 
  while(pt->next !=0){cout<<"node address "<<pt <<" name "<<pt->Name <<" age "<<pt->Age
  << " link node "<< pt->next<<endl; pt=pt->next;     }  
  cout<<"node address "<<pt <<" name "<<pt->Name <<" age "<<pt->Age
  << " link node "<< pt->next<<endl;
}
void add(string name, int age){
  if(head==0){ head=(PhoneBook*) malloc(sizeof(PhoneBook));
  strcpy(head->Name,name.c_str()); head->Age= age;head->next=0;tail=head;}else{
    pt=(PhoneBook*) malloc(sizeof(PhoneBook)); strcpy(pt->Name,name.c_str());pt->Age=age;
 pt->next=0;tail->next=pt; tail=pt;   
  }

}
int main(){ 
head=(PhoneBook*)  malloc(sizeof(PhoneBook));
strcpy(head->Name,"John"); head->Age=21; head->next=0;
tail=head;
pt=(PhoneBook*) malloc(sizeof(PhoneBook));
strcpy(pt->Name,"Jane");pt->Age=22;pt->next=0;
tail->next=pt;  tail=pt;
 //list();
 add("Peter",40);add("Mike",51); list();
    return 0;
}
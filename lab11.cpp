#include<iostream>
#include<cstring>
using namespace std;
typedef struct Node
{
 char Name[20];
 int Age;
 struct Node *next;
}PhoneBook;
int main(){
PhoneBook *head, *tail, *pt, *pt1, *pt2;   
head=(PhoneBook*)  malloc(sizeof(PhoneBook));
strcpy(head->Name,"John"); head->Age=21; head->next=0;
tail=head;


    return 0;
}
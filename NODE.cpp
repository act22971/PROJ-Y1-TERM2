#include <iostream>
#include<cstdlib>
using namespace std;
#include"NODE.h"
#include"LL.h"
NODE::NODE(string x ,int y){
      name = x;
      data = y;      
      next=NULL;
      cout<<"adding "<< x <<endl;
}
  NODE:: ~NODE(){
  cout<<name<<" is being deleted"<<endl;    
}
NODE* NODE::move_next(){
      return next;
}
void  NODE:: show_node(){
         cout<<"Item: "<<name<<endl;
         cout<<"Lot no.: "<<data<<endl;
         
 }
void NODE::insert(NODE*& x){
     x->next=this;

     }
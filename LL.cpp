#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
          NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
      t = hol->move_next();
      delete(hol);
      hol =t;
      
     }
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
      cout<<"______________________"<<endl;    
      cout<<"item NO. :"<<i+1<<endl;
      t->show_node();
      cout<<"______________________"<<endl;
      t = t->move_next();
     }
}
void LL::add_node(NODE *&A){

          hol->insert(A);
          hol=A;

       size++;

 }

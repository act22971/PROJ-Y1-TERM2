#include <iostream>
#include <fstream>
#include"NODE.h"
#include"LL.h"
using namespace std;
int main(){
  string name;
  int data;
  LL A;
  ifstream RF;//read text file
  ofstream Fl;//create text file
  
  RF.open("Mytext.txt");//ให้userอ่าน
  if(RF.fail())//if my text file doesn't exist, create one
  {
  Fl.open("Mytext.txt");//name+open file
  Fl<<"   Product                  lotNO.\n";//write on file
  Fl<<"--------------------------------------------------------"<<endl;//write on file
  Fl.close();//fclose()
  }
 RF.close();//fclose()
  //getline(RF,data)//read file line by line

  ifstream RF2;//read text file
  ofstream Fl2;//create text file
  
  RF2.open("stock.txt");//ให้developerเก็บข้อมูล
  if(RF2.fail())//if my text file doesn't exist, create one
  {
  Fl2.open("stock.txt");//name+open file
  Fl2<<"Cocacola      1100703532569";//default
  Fl2.close();//fclose()
  }
 RF2.close();//fclose()
RF2.open("stock.txt");//ให้developerเก็บข้อมูล
  while(RF2>>name>>data){
      NODE *t = new NODE(name,data);//creating NODE
      A.add_node(t);
      cout<<"adding :"<<name<<endl;
  }
RF2.close();//fclose()
      A.show_all();




 
  return 0;
}

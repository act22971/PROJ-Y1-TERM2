#include <iostream>
using namespace std;
class NODE{
      string name;
      int data;
      NODE* next;
public:
        NODE(string,int);
        void show_node();
        void insert(NODE*&);
        NODE* move_next();
       
        ~NODE();
      };
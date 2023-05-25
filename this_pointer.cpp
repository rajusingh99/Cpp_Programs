#include<iostream>
using namespace std;

class  room
{
    public:
      int room_no;
      string room_name;
      int room_amount;

      room(int  room_no, string room_name, int room_amount)
      {
        this->room_no = room_no;  
        this->room_amount = room_amount;
        this->room_name = room_name; 
      }
      
      void disp()
      {
        cout<<"room no is = "<<room_no<<" "<<endl;
        cout<<"room name is = "<<room_name<<" "<<endl;
        cout<<"room amount is = "<<room_amount<<" "<<endl;
      }
};

int main()
{  
    room r(512 , "Ram" , 7000);
    r.disp();

    return 0;
}
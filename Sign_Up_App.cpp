#include <iostream>
#include <array>
#include <string>
 
int num_users=0;
constexpr int max_users=100;
class signUp
{
public:
   std::string user_name;
   int user_age; 

   void AddRecord ( const std::string name,const int age);
   void FetchRecord (const int user_ID);
};
std::array<signUp,100> users;

void signUp :: AddRecord ( const std::string name,const int age){
     users[num_users].user_name=name;
     users[num_users].user_age=age;
     std::cout<<"User ID: "<<num_users+1<<"\n \n";
     std::cout<<"User record added successfully. \n \n";
      }

void signUp :: FetchRecord (const int user_ID){
    std::cout<<"User Name:"<<users[user_ID-1].user_name<<"\n";
    std::cout<<"User Age: "<<users[user_ID-1].user_age<<"\n \n";
      }

enum class option{
add_record=1,
fetch_record=2,
quit=3
    
};

std::istream& operator>>(std::istream & input_stream,option & result){
int int_option;
input_stream>>int_option; //integer
//convert integer into option enum
result=static_cast<option>(int_option);
return input_stream;

}

void show_options(){
std::cout<<"Please select an option: \n";
std::cout<<"1: Add Record \n";
std::cout<<"2: Fetch Record \n";
std::cout<<"3: Quit \n \n";
}

int main(){

option option=option::add_record;
bool isRunning=true;
int age=0;
std::string name;
int user_ID=0;

std::cout<<"User signUp Application \n \n";

while (isRunning)
{ show_options();
std::cout<<"Enter option: ";
std::cin>>option;
std::cout<<"\n";
switch (option)
{
case option::add_record:
    if(num_users==max_users){
     std::cout<<"Invalid record. Max numbers of records = 100 \n \n";   
     break; }   
    std::cout<<"Add User. Please enter user name and age: \n";
    std::cout<<"Name: ";
    std::cin>>name;
    std::cout<<"Age: ";
    std::cin>>age;
    users[num_users].AddRecord(name,age);
    num_users++;
    break;

    case option::fetch_record:
        std::cout<<"Please enter user ID: \n";
        std::cout<<"User ID: ";
        std::cin>>user_ID;
        if(user_ID<0 || user_ID>num_users){
            std::cout<<"Invalid User ID \n \n";
            break ;
            }
        users[user_ID].FetchRecord(user_ID);
        break;

    case option::quit:
        isRunning=false;
        break;

    default:
    std::cout<<"No vaild option  \n";
        break;
    } } 
    }

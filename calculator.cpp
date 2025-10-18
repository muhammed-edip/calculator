
#include <iostream>
using namespace std;

int main()
{
 
 char oper;
 int num_1=0;
 int num_2=0;
 int result=0;
 
 cout<<"enter one of (+,-,/,X,%) operator : ";
  cin>>oper;
 
 cout<<"enter first num : ";
  cin>>num_1;
  
 cout<<"enter second num : ";
  cin>>num_2;
  
 switch(oper)
 {
    case '+' :
        result=num_1+num_2;
        cout<<"the result of the addition process is  : "<<result;
    break;
    
     case '-' :
        cout<<num_1<<'-'<<num_2<<'='<<num_1-num_2<<endl;
    break;
    
    case '/' :
        cout<<num_1<<'/'<<num_2<<'='<<num_1/num_2<<endl;
    break;
    
    case 'X' :
      result=num_1*num_2;
      cout<<"the result of the multiplication  operation is : "<<num_1<<'X'<<num_2<<'='<<result;
    break;
    
    case '%' :
        cout<<"remainder is "<<num_1<<'%'<<num_2<<'='<<num_1%num_2<<endl;
    break;
    
    default:
        cout<<"wrong input";
     
 }
 


    return 0;
}
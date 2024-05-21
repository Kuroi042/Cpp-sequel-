#include <iostream>

void Megaphone(char *str)
   {
     std::size_t i = 0 ;
     while(str[i])
      {

           if(str[i]>='a'&& str[i]<='z')
            {
            str[i]-=32;
            std::cout<<str[i];
      }
         else if( !isalpha(str[i]))
            std::cout<<str[i];
         else 
            std::cout<<str[i];
         i++;
      }
     

   }

int main(int argc , char **argv)
{
   if(argc >1)
      {
         int i = 1;
      while(i<argc){
         if(argv[i])
            {
            std::cout<<" ";
         Megaphone(argv[i]);
            }
         i++;
      }
       }
   else 
      std::cout <<"EMPTY ARGS WHooooooOOooooOooOooooOooooooOOOOOOoOOOOooo"<<std::endl;
      }
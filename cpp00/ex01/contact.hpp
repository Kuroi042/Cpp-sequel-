#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "phonebook.hpp"
#include <iostream>
#include <stdio.h>

class Contact{

    public :
    Contact(void)
  {
    std::cout<<"contact const\n";
  }
  ~Contact(void)
    {
    std::cout<<"contact destractor\n";
    }






};

#endif
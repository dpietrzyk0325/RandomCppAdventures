#include <iostream>

/*

********************                Pure
** Abstract class ** <--------->    Virtual
********************                Function

A class that contains a pure virtual function is called an abstract class

*/

/*
********                
* Pure * Virtual Function
******** 
    is not a keyword like virtual

You don't need to write pure anywhere in a program
    Suppose there is a class which contains a virtual
    function "display"
*/

// class A
class A
{
private:
    /* data */
public:
    // virtual void display(/* args */);

    // to make it pure virtual add = 0;
    // it has no definition.
    // This is also called a do nothing funtion
    // Why = 0?
    // No definition
    // what is the use of such a function then?
    // You cannot define this function in this class, therefore it is called pure virtual
    //      but
    // You have to define that class in all derived classes (It's compulsory)
    // You have to define it in a class      or      Again make it pure virtual
    virtual void display(/* args */) = 0; // pure virtual function, that's it
};

class B: public A
{
private:
    /* data */
public:
    void display()
    {
        /*code for definition*/
    }
};

// if you forget then the compiler will give you an error
class C: public A
{
private:
    
public:
    
};

class D: public A
{
private:
    /* data */
public:
    // make it pure virtual again
    virtual void display() = 0;
};

/*
    What about an abstract class?
    The only thing about an abstract class is
        You cannot create objects of abstract classes
*/

/*
    What is the use of such a class then?
    
    It is used as a base class for other derived classes

    All the common code in the derived classes is written in the abstract class

    But we can also use normal inheritance
    Why do we need abstract classes?
*/

/*
    Explaination:
    let's consider a class named Database of a bank
    Now we want to kepp all common functions in class Database

    We will make a function getName()
    pure virtual in class database

    why was getName made pure virtual?
        Because everyone has a Name
    We wanted all derived classed to define this function
    in their classs to get their names

    Database has become an abstract class

    We will use the Manager class objects to store the managers data,
    similarily for objects of Accountant and Customer

    Is there any use of a Database class object?
        They represent nothing

    So we need an Abstract class

    So we cannot make objects of that class
        Let's code and check out all errors
*/

class Database
{
private:
    /* data */
public:
    virtual void getName() = 0;
};
class Manager: public Database
{
private:
    /* data */
public:
    void getName()
    {
        std::cout << "This is the Manager class" << std::endl;        
    }

};
class Accountant: public Database
{
private:
    /* data */
public:
    void getName()
    {
        std::cout << "This is the Accountant class" << std::endl;
    }

};
class Customer: public Database
{
private:
    /* data */
public:
    void getName()
    {
        std::cout << "This is the Customer class" << std::endl;       
    }

};

int main()
{
    /*
        object of abstract class type "C" is not allowed:C/C++(322)
        abstract_class_and_pure_virtual_functions.cpp: pure virtual function "A::display" has no overrider
        C letter
        pure virtual function "A::display" has no overrider
    */
    // uncomment to see the error
    // C letter;

    Manager m;
    Accountant a;
    Customer c;

    m.getName();
    a.getName();
    c.getName();

    // We cannot create an object of an abstract class, but we can create a pointer of the abstract class
    Database *ptr = nullptr;
    Manager m2;
    ptr=&m2;
    ptr->getName();

    return 0;
}

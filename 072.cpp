#include <iostream>

#include <boost/mpl/lambda.hpp>
#include <boost/mpl/transform.hpp>
#include <boost/mpl/vector.hpp>
#include <boost/mpl/for_each.hpp>

class A
{
public:
        A()
        {
                std::cout << "A()" << std::endl;
                f();
        }

        ~A()
        {
                std::cout << "~A()" << std::endl;
                f();
        }

        void cf()
        {
                std::cout << "A::cf()" << std::endl;
                f();
        }

        virtual void f()
        {
                std::cout << "A::f()" << std::endl;
        }

};

class B : public A
{
public:
        B()
        {
                std::cout << "B()" << std::endl;
        }

        ~B()
        {
                std::cout << "~B()" << std::endl;
        }

        virtual void f()
        {
                std::cout << "B::f()" << std::endl;
        }


};

int main()
{

        B bobj;

        //add a new comments
        bobj.f();
        //try again new comments
        bobj.cf();

        return 0;
}


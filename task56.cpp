
3.Create a class Example1 and it should have methods 
 public void test1()
 private void test2()
 public static void test3()
 public final void test4()
and create an sub class called and Example2 it should have all the methods of its parent class in main methos create  objects of both Base and Derived and call all the methods



program:
#include<iostream>
using namespace std;
class Example1
{
 public: void test1()
 {
     cout<<"\n test 1";
 }
  void test2()
 {
     cout<<"\n test 2";
 }
 public: void test3()
 {
     cout<<"\n test 3";
 }
 public: void test4()
 {
     cout<<"\n test 4";
 }
};
class Example2:public Example1
{
 public: void test1()
 {
     cout<<"\n test 1";
 }
 void test2()
 {
     cout<<"\n Test 2";
 }
 public: void test3()
 {
     cout<<"\n test 3";
 }
 public: void test4()
 {
     cout<<"\n test 4";
 }
};
int main()
{
    Example2 e2;
    e2.test1();
    e2.test2();
    e2.test3();
    e2.test4();
    Example1 e1;
    e1.test1();
    e1.test2();
    e1.test3();
    e1.test4();
    return 0;
}


#include<iostream>
using namespace std;
// struct Test
// {
//     static int ccount;
//     static int dcount;
// };
// struct Test2
// {
//     void func()
//     {
//         Test::ccount=30;
//         Test::dcount=40;
//         cout<<"ccount="<<Test::ccount<<endl;
//         cout<<"dcount="<<Test::dcount<<endl;
//     }
// };
// int main()
// {
//     int a=10;
//     int*p=&a;
//     int**q=&p;
//     void*r=&a;
//     // Test t;
//     Test2 t2;
//     // cout<<t.ccount;
//     // cout<<t.dcount;
//     t2.func();
//     cout<<"value of a is "<< *static_cast<int*>(r)<<endl;
//     cout<<"value of a is "<<**q<<endl;
//     std::cout<<"hello world";
//     system("pause");
//     return 0;
// }
// 在main函数外声明类
class MyClass{
public:
    static int count;
    int value;
    MyClass():value(0) {
        count++;
    }//一种初始化方法
    void display() const{
        std::cout << "Value: " << value << std::endl;
    }//const保证函数内成员变量不会被修改
};
// 定义静态成员变量（分配内存）
int MyClass::count = 0;
void f()
{
    MyClass* p=new MyClass;
    int a=0;
    static int b=0;
    a++;
    b++;
    cout<<a<<","<<b<<endl;
    cout<<p->value<<endl;
    delete p;
}

int main() {
    // 在main函数内使用 - 正确
    const int& ref=9;
    MyClass obj;
    obj.count = 10;
    cout << "Count: " << obj.count << std::endl;
    cout << "Value: " << MyClass::count<< std::endl;    
    obj.value = 42;
    obj.display();
    f();
    // f();
    // f();
    system("pause");
    return 0;
}



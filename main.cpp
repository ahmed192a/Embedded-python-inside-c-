#include <Python.h>
#include <iostream>


using namespace std;


int main(){
    Py_Initialize();
    //  print "hello world"
    PyRun_SimpleString("print('hello world')");
    Py_Finalize();
    return 0;
}
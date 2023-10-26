#include <stdio.h>
#include <numpy/arrayobject.h>
#include <pandas/pandas.h>

int main() {
    // 创建两个整型数组
    PythonObject* n1 = PyArray_NewFromDescr(PyArray_DescrFromType(NPY_INT32), PyArray_DIMS(n1), NULL);
    PythonObject* n2 = PyArray_NewFromDescr(PyArray_DescrFromType(NPY_INT32), PyArray_DIMS(n2), NULL);
    // 设置数组的基础对象
    PyArray_SetBaseObject(n1, n1);
    PyArray_SetBaseObject(n2, n2);
    // 打印数组n1的浮点值
    printf("%lf\n", PyArray_AsFloat(n1));
    // 打印数组n2的浮点值
    printf("%lf\n", PyArray_AsFloat(n2));
    // 计算数组n1和n2的乘积
    PythonObject* n1_n2 = PyArray_Multiply(n1, n2);
    // 计算数组n1和n2的乘方
    PythonObject* n1_n2_power = PyArray_Power(n1, n2);
    // 打印数组n1_n2的浮点值
    printf("%lf\n", PyArray_AsFloat(n1_n2));
    // 打印数组n1_n2_power的浮点值
    printf("%lf\n", PyArray_AsFloat(n1_n2_power));
    // 将数组n1和n2转换为DataFrame
    PythonObject* df = PyDataFrame_BuildFromArray(PyArray_NewFromDescr(PyArray_DescrFromType(NPY_INT32), PyArray_DIMS(df), NULL), PyArray_DATA(df));
    // 打印DataFrame的浮点值
    printf("%lf\n", PyArray_AsFloat(df));
    printf("%lf\n", PyArray_AsFloat(df));
    printf("%lf\n", PyArray_AsFloat(df));
    return 0;
}
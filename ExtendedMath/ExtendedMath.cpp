#include "stdafx.h"
#include <iostream>

#include "ExtendedInteger.h"


using namespace std;

int main() {
    uextint256_t* x = new uextint256_t("123");
    uextint256_t* y = new uextint256_t("122");
    uextint256_t* z = new uextint256_t(*x - *y);
    return 0;
}

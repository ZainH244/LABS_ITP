#include <iostream>
using namespace std;

struct complex {
    float real;
    float imag;
};

complex readcomplex() {
    complex c;
    cout << "Enter real part: ";
    cin >> c.real;
    cout << "Enter imaginary part: ";
    cin >> c.imag;
    return c;
}


void writecomplex(complex c) {
    if (c.imag >= 0)
        cout << c.real << " + " << c.imag << "i";
    else
        cout << c.real << " - " << -c.imag << "i";
}


complex add(complex a, complex b) {
    complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

complex multiply(complex a, complex b) {
    complex result;
    result.real = a.real*b.real - a.imag*b.imag;
    result.imag = a.real*b.imag + a.imag*b.real;
    return result;
}

int main() {
    cout << " Enter first complex number\n";
    complex c1 = readcomplex();

    cout << "\n Enter second complex number \n";
    complex c2 = readcomplex();

    complex sum = add(c1, c2);

    complex product = multiply(c1, c2);

    cout << "\n Results \n";

    cout << "First complex number: ";
    writecomplex(c1);
    cout << "\n";

    cout << "Second complex number: ";
    writecomplex(c2);
    cout << "\n";

    cout << "Sum: ";
    writecomplex(sum);
    cout << "\n";

    cout << "Product: ";
    writecomplex(product);
    cout << "\n";

    return 0;
}

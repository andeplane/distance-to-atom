#include <iostream>
#include "distancetoatom.h"
#include <QVector>
#include <QVector3D>
#include <QDebug>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    QVector<QVector3D> vec;
    for(int i=0; i<100; i++) {
        float x = rand() / double(RAND_MAX);
        float y = rand() / double(RAND_MAX);
        float z = rand() / double(RAND_MAX);
        vec.push_back(QVector3D(x,y,z));
    }
    DistanceToAtom da(10);
    da.compute(vec, 0.1);
    auto hore = da.histogram(100);
    for(auto &obj : hore) {
        qDebug() << obj;
    }
    return 0;
}


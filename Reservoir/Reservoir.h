#pragma once
#ifndef RESERVOIR_H
#define RESERVOIR_H
#include <string>
#include <iostream>
using namespace std;

class Reservoir
{
private:

    string name;
    string type;
    double width;
    double length;
    double maxDepth;

public:

    Reservoir();
    explicit Reservoir(const string& name, const string& type, double width, double length, double maxDepth);
    Reservoir(const Reservoir& other);
    ~Reservoir();

    const string& getName() const;
    const string& getType() const;
    double getWidth() const;
    double getLength() const;
    double getMaxDepth() const;

    void setName(const string& name);
    void setType(const string& type);
    void setWidth(double width);
    void setLength(double length);
    void setMaxDepth(double maxDepth);

    double calculateVolume() const;
    double calculateSurfaceArea() const;
    bool isSameType(const Reservoir& other) const;
    bool hasLargerSurface(const Reservoir& other) const;

    void display() const;
};

#endif

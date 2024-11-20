#include "Reservoir.h"


Reservoir::Reservoir() : name(""), type(""), width(0), length(0), maxDepth(0) {}

Reservoir::Reservoir(const string& name, const string& type, double width, double length, double maxDepth)
: name(name), type(type), width(width), length(length), maxDepth(maxDepth) {}

Reservoir::Reservoir(const Reservoir& other)
: name(other.name), type(other.type), width(other.width), length(other.length), maxDepth(other.maxDepth) {}

Reservoir::~Reservoir() {}

const string& Reservoir::getName() const { return name; }
const string& Reservoir::getType() const { return type; }
double Reservoir::getWidth() const { return width; }
double Reservoir::getLength() const { return length; }
double Reservoir::getMaxDepth() const { return maxDepth; }

void Reservoir::setName(const string& name) { this->name = name; }
void Reservoir::setType(const string& type) { this->type = type; }
void Reservoir::setWidth(double width) { this->width = width; }
void Reservoir::setLength(double length) { this->length = length; }
void Reservoir::setMaxDepth(double maxDepth) { this->maxDepth = maxDepth; }

double Reservoir::calculateVolume() const { return width * length * maxDepth; }
double Reservoir::calculateSurfaceArea() const { return width * length; }
bool Reservoir::isSameType(const Reservoir& other) const { return type == other.type; }
bool Reservoir::hasLargerSurface(const Reservoir& other) const { return calculateSurfaceArea() > other.calculateSurfaceArea(); }

void Reservoir::display() const 
{
    cout << "Name: " << name << ", Type: " << type << ", Width: " << width
     << ", Length: " << length << ", Max Depth: " << maxDepth << endl;
}
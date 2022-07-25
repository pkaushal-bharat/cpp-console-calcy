#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <array>
#include <cmath>

class Calculator
{
public:
    Calculator();           /// Constructor
    virtual ~Calculator() = default;    /// Virtual destructor to prevent delete errors
    /// Functions to get user input and do operation
    void add();
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrt();
    /// Functions to get and set mem
    void setMem();
    void printMem() const;
    /// Functions to get result
    //void printRes() const;

    /// Parse input subs in number value when strings result or mem are entered
    double parseInput(const std::string&) const;

    /// provides data on user options, will be overloaded
    virtual void welcome() const;

    /// parse input and decide which member func to call
    virtual void parseOperation(const std::string&);

/// protected so derived class can access.
protected:
    double result;      /// data member to store result
    double mem;         /// data member to store mem
};

#endif // CALCULATOR_H

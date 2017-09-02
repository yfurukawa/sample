#include <iostream>

#include "parserfactory.h"
#include "parser.h"
#include "empolyeeparser.h"
#include "customerparser.h"

ParserFactory::ParserFactory() :
    employeeParser_(nullptr),
    customerParser_(nullptr),
    currentParser_(nullptr)
{
    employeeParser_ = new EmpolyeeParser();
    customerParser_ = new CustomerParser();
    currentParser_ = employeeParser_;
}

ParserFactory::~ParserFactory()
{
    delete employeeParser_;
    delete customerParser_;
}

void ParserFactory::setEmployee()
{
    currentParser_ = employeeParser_;
}

void ParserFactory::setCustomer()
{
    currentParser_ = customerParser_;
}

Parser* ParserFactory::getParser()
{
    return currentParser_;
}

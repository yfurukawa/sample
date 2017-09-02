#ifndef PARSERFACTORY_H
#define PARSERFACTORY_H

class Parser;

class ParserFactory
{
public:
    ParserFactory();
    virtual ~ParserFactory();

    void setEmployee();
    void setCustomer();
    Parser* getParser();

private:
    Parser* employeeParser_;
    Parser* customerParser_;
    Parser* currentParser_;
};

#endif // PARSERFACTORY_H

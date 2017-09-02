#ifndef CUSTOMERPARSER_H
#define CUSTOMERPARSER_H

#include "parser.h"

class CustomerParser : public Parser
{
public:
    CustomerParser();
    virtual ~CustomerParser();

    virtual void parse();
};

#endif // CUSTOMERPARSER_H

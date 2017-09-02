#ifndef EMPOLYEEPARSER_H
#define EMPOLYEEPARSER_H

#include "parser.h"

class EmpolyeeParser : public Parser
{
public:
    EmpolyeeParser();
    virtual ~EmpolyeeParser();

    virtual void parse();
};

#endif // EMPOLYEEPARSER_H

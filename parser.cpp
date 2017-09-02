#include "parser.h"
#include "userdatareaddomain.h"

Parser::Parser() :
    domain_(nullptr)
{

}

Parser::~Parser()
{

}

void Parser::setDomain(UserDataReadDomain *domain)
{
    domain_ = domain;
}


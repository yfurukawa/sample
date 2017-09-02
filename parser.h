#ifndef PARSER_H
#define PARSER_H

class UserDataReadDomain;

class Parser
{
public:
    Parser();
    virtual ~Parser();

    virtual void parse() = 0;
    void setDomain(UserDataReadDomain* domain);

private:
    UserDataReadDomain* domain_;
};

#endif // PARSER_H

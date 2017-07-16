#pragma once
#include <memory>

class Password
{
public:
    Password(std::unique_ptr<AbstractValidator> v =
            std::unique_ptr<AbstractValidator>(new passwordValidator()));

    bool isPasswordValid();
    bool operator != (const Password& pass) const;
    bool operator == (const Password& pass) const;

    void setValue(std::string v);

private:
    std::string value;
    std::unique_ptr<AbstractValidator> validator;

};


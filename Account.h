#include <string>
class Account
{
public:
    // mamber function that sets the account name in the object
    void setName(std::string accountName)
    {
        name = accountName;
    }
    // member function that retrieves the account name from the object
    std::string getName() const
    {
        return name; // return names value to this function caller
    }

private:
    std::string name;
}; // end class account
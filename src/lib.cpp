#include <my_lib/lib.h>
#include <sub_lib.h>

namespace lib
{
    std::string getMessage()
    {
        return "Message from lib";
    }

    std::string getSubLibMessage()
    {
        return sub_lib::getMessage();
    }
}
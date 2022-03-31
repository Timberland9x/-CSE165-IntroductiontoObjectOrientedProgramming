#ifndef Object_h
#define Object_h
using namespace std;
class Object
{

protected:
public:
    static int count;

    Object()
    {
        count++;
    }
    Object(const Object &s)
    {
        count++;
    }
};

#endif
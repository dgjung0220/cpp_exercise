// String Constructor (Deep Copy)
#include <iostream>
#include <cstring>

/*using namespace std;

class String
{
    char* buff;
    int size;

public:
    String(const char* s)
    {
        size = strlen(s);
        buff = new char(size + 1);
        strcpy(buff, s);
    }
    ~String()
    {
        delete[] buff;
    }


    String(const String& s) : size(s.size)
    {
        buff = new char[size + 1];
        strcpy(buff, s.buff);
    }

    String& operator=(const String& s)
    {
        if (&s == this)
            return *this;

        size = s.size;
        delete[] buff;

        buff = new char(size + 1);
        strcpy(buff, s.buff);

        return *this;
    }

    friend ostream& operator<<(ostream&, const String&);
};

ostream& operator<<(ostream& os, const String& s)
{
    os << s.buff;
    return os;
}


int main()
{
    String s1 = "hello";
    cout << s1 << endl;

    String s2 = s1;
    cout << s2 << endl;

    String s3 = "world";
    s3 = s1;
    cout << s3 << endl;

}*/


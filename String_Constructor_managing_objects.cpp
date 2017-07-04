// String Constructor (Reference Counting)
// 2.
#include <iostream>
#include <cstring>

/*using namespace std;

struct Manage_String
{
    char* buff;
    int size;
    int ref;
};

class String
{
    Manage_String* ms;

public:
    String()
    {
        ms = new Manage_String;
        ms->buff = new char(1);
        strcpy(ms->buff, "\0");
        ms->ref = 1;
    }
    String(const char* s)
    {
        ms = new Manage_String;
        ms->size = strlen(s);
        ms->buff = new char(ms->size + 1);
        strcpy(ms->buff, s);

        ms->ref = 1;
    }
    ~String()
    {
        (ms->ref)--;

        if ((ms->ref) == 0)
        {
            delete[] ms->buff;
        }
    }

    String(const String& s)
    {
        ms->buff = s.ms->buff;
        ms->size = s.ms->size;
        ms->ref = s.ms->ref;

        ++(ms->ref);
    }

    String& operator=(const String& s)
    {
        if (&s == this)
            return *this;

        ms->size = s.ms->size;
        delete[] ms->buff;

        ms->buff = new char(ms->size + 1);
        strcpy(ms->buff, s.ms->buff);

        return *this;
    }

    friend ostream& operator<<(ostream&, const String&);
};


ostream& operator<<(ostream& os, const String& s)
{
    os << s.ms->buff;
    return os;
}


int main()
{
    String s1 = "hello";
    cout << s1 << endl;

    String s2;
    s2 = s1;
    cout << s2 << endl;

    String s3 = "student";
    s3 = s1;
    cout << s3 << endl;

    s1 = s1;
    cout << s1 << endl;

    String s4;
    cout << s4;
    cout << s4 << endl;
    cout <<"A" << s4 << "B" << endl;

    s4 = "hello";
    cout << s4 << endl;
    String s5 = "world";
    s4 = s5;
    cout << s5 << endl;
}*/

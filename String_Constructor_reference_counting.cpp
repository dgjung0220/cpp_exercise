// String Constructor (Reference Counting)
// 1��. String class �� ���� ��������� ����Ű�� �����͸� �����ϴ� ��
#include <iostream>
#include <cstring>

/*using namespace std;

class String
{
    char* buff;
    int size;
    int* ref;

public:
    String(const char* s)
    {
        size = strlen(s);
        buff = new char(size + 1);
        strcpy(buff, s);

        ref = new int;
        *ref = 1;
    }
    ~String()
    {
        --(*ref);

        if (*ref == 0)
        {
            delete[] buff;
            delete ref;
        }
    }


    String(const String& s) : buff(s.buff), size(s.size), ref(s.ref)
    {
        ++(*ref);
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


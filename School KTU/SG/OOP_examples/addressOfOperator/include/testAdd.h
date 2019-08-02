//header file testadd.h
#ifndef H_testAdd
#define H_testAdd

class testAddress
{
public:
    void setX(int);
    void printX() const;
    //const
    int& addressOfX();   //this function returns the
                    //address of the private data member

private:
    int x;
};

#endif

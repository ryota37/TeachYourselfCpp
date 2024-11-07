// fix the following code so that it compiles.

class A
{
public:
    void foo() const{}
};

class B
{
    A a;

public:
    operator const A&() const { return a; }
};

int main()
{
    B b;
    A ab = b;
    ab.foo(); //エラー
    // static_cast<const A&>(b).foo(); // Answer
}
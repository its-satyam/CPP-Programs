#include<iostream>
using namespace std;
class square
{
    private:
            int n;
    public:
            square(int n)
            {
                this->n=n;
            }
            friend int find(square);
            void display(int s)
            {
                cout<<s;

            }

};
int find(square ob)
{
    int s;
    s=ob.n*ob.n;
    return s;
}
int main()
{
    square obj(5);
    int s=find(obj);
    obj.display(s);
    return 0;
}
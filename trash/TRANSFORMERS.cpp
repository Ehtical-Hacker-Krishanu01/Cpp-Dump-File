#include <iostream>
using namespace std;
class Transformers
{
    string name;
    string type;
    int age = 0;
public:
    void setName(string namex)
    {
        name = namex;
    }
    void setType(string typex)
    {
        type = typex;
    }
    void displayINFO()
    {
        cout << "Name: " << name << endl
             << "Type: " << type << endl;
    }
    Transformers(string namex = "Transformer--None", string typex = "Neutral")
    {
        name = namex;
        type = typex;
    }
};
class Autobots : public Transformers
{
public:
    Autobots(string namex = "Autobot--None")
    {
        setName(namex);
        setType("Autobots");
    }
};
class Decepticons : public Transformers
{
public:
    Decepticons(string namex = "Decepticon--None")
    {
        setName(namex);
        setType("Decepticons");
    }
};
int main()
{
    Autobots Arcee("Arcee");
    Autobots Bumblebee;
    Arcee.displayINFO();
    Bumblebee.displayINFO();

    Decepticons Megatron("Megatron"), Starscream;
    Megatron.displayINFO();
    Starscream.displayINFO();

    Transformers Primus("Primus", "Autobots"), Unicron("Unicron", "Decepticons");
    Transformers Cheetor;
    Transformers ElitaOne("Elita-One");
    Primus.displayINFO();
    Unicron.displayINFO();
    Cheetor.displayINFO();
    ElitaOne.displayINFO();
    return 0;
}
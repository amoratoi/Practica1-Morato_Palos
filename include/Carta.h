#ifndef CARTA_H
#define CARTA_H


class Carta
{
    public:
        Carta();
        virtual ~Carta();

    Carta(int num, int type)
        : numero(num), tipus(type)
    {}
    protected:

    private:
    int numero{ 0 };
    int tipus{ 0 };
};

#endif // CARTA_H

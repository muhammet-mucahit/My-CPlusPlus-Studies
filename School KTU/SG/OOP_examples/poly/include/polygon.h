#ifndef POLYGON_H
#define POLYGON_H


class polygon
{
    public:
        void set_values(int width, int height);
        virtual double area() = 0;
    protected:
         int x, y;
    private:
};

#endif // POLYGON_H

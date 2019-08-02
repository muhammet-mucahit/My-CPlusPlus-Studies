#ifndef POLYGON_H
#define POLYGON_H


class polygon
{
    public:
        void set_values(double width, double height);
        //polygon();
        virtual double area() = 0;
        virtual char *getName() = 0;
        virtual ~polygon();
        void print_area();
    protected:
         double x, y;
         char *poly_name;
    private:
};

#endif // POLYGON_H

#include <iostream>

using namespace std;

class Func {

};

class exponential: public Func {
    
};

class Minimiser {
    public:
        Minimiser(const Func & f, const double startX);
        double Minimum() const;
        double MinimumLocation() const;

    private:
        Func _f;
        double _startX;
        double _minimum;
        double _minimumX;
};

int main(int argc, char const *argv[])
{
    
    return 0;
}

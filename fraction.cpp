/*Using OOPS create a Fraction class in a program which returns addition and multipliaction of two fractions in
 N/D simplified form .The result of addition of f1 and f2 should be stored in f1 and the result of multiplication
 of f1 and f2 should be stored in f1*/

 #include<iostream>
 using namespace std;

 class Fraction
 {
    private:
    int numerator;
    int denominator;

    public:
    Fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void simplify()
    {
        int j=min(numerator,denominator);
        int gcd=1;
        for(int i=2;i<=numerator;i++)
        {
            if(numerator%i==0 && denominator%i==0)
                gcd=i;
        }

        numerator=numerator/gcd;
        denominator=denominator/gcd;
    }
    void add(Fraction const &f)
    {
        numerator=f.denominator*numerator+denominator*f.numerator; //cross multiplication addition
        denominator=denominator*f.denominator;
        simplify();
    }

    void multiply(Fraction const &f)
    {
        numerator=numerator*f.numerator;
        denominator=denominator*f.denominator;
        simplify();
    }

    void print()
    {
        cout<<numerator<<" / "<<denominator<<endl;
    }
 };

 int main()
 {
    int n1,d1,n2,d2;
    cout<<"Enter fraction 1: Numerator and Denominator"<<endl;
    cin>>n1>>d1;
    cout<<"Enter fraction 2: Numerator and Denominator"<<endl;
    cin>>n2>>d2;
    Fraction f1(n1,d1);
    Fraction f2(n2,d2);
    cout<<"F1 is: ";
    f1.print();
    cout<<"F2 is: ";
    f2.print();
    f1.add(f2);
    cout<<"After addition F1 is: ";
    f1.print();
    cout<<"After addition F2 is: ";
    f2.print();
    f1.multiply(f2);
    cout<<"After multiplication F1 is: ";
    f1.print();
    cout<<"After multiplication F2 is: ";
    f2.print();
 }
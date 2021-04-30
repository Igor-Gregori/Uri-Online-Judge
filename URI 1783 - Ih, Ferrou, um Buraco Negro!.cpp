#include <iostream>

using namespace std;

double get_x_on_equation_1_type_1(double a, double b, double c, double d){
    double e = 2*b - 2*d;
    double f = -1*(a*a)-1*(b*b)+(c*c)+(d*d);
    double g = 2*(-1*a+c);

    if(f != 0)
        return f/((-1*e)+g);
    else
        return 0;
}

double get_y_on_equation_2_type_1(double a, double b, double c, double d, double x){
    double e = 2*b - 2*d;
    double f = -1*(a*a)-1*(b*b)+(c*c)+(d*d);
    double g = 2*(-1*a+c);

    if(f != 0)
        return (x*g+(-1*f))/(e);
    else
        return 0;
}

double get_e_on_equation_1(double b, double d){
    return 2*b - 2*d;
}

double get_f_on_equation_1(double a, double b, double c, double d){
    return -1*(a*a)-1*(b*b)+(c*c)+(d*d);
}

double get_g_on_equation_1(double a, double c){
    return 2*(-1*a+c);
}

double get_y_on_equation_2_type_2(double a, double b, double c, double d, double e, double f, double g){
    double fp = -1*(a*a)*g-1*(b*b)*g+(c*c)*g+(d*d)*g-2*c*f+2*a*f;
    double sp = 2*(d*g-b*g+e*c-e*a);

    return fp/sp;
}

double get_x_on_equation_1_type_2(double a, double b, double c, double d, double y){
    double fp = 2*b*y-2*d*y-1*(a*a)-1*(b*b)+(c*c)+d*d;
    double sp = 2*(-1*a+c);

    return fp/sp;
}

int main()
{
    double axe1, aye1;
    double nxe1, nye1;

    double axe2, aye2;
    double nxe2, nye2;

    double x_of_equation_1 = 0;
    double y_of_equation_2 = 0;

    double e_of_equation_1 = 0;
    double f_of_equation_1 = 0;
    double g_of_equation_1 = 0;

    int t;
    cin>>t;
    for(int i=1; i<=t;i++){
        cin>>axe1>>aye1;
        cin>>axe2>>aye2;

        cin>>nxe1>>nye1;
        cin>>nxe2>>nye2;

        cout.precision(2);
        cout << fixed;

        if(aye1==nye1){
            x_of_equation_1 = get_x_on_equation_1_type_1(axe1, aye1, nxe1, nye1);
            y_of_equation_2 = get_y_on_equation_2_type_1(axe2, aye2, nxe2, nye2, x_of_equation_1);

            cout<<"Caso #"<<i<<": "<<x_of_equation_1<<" "<<y_of_equation_2<<endl;
        }else{
            e_of_equation_1 = get_e_on_equation_1(aye1, nye1);
            f_of_equation_1 = get_f_on_equation_1(axe1, aye1, nxe1, nye1);
            g_of_equation_1 = get_g_on_equation_1(axe1, nxe1);

            y_of_equation_2 = get_y_on_equation_2_type_2(axe2, aye2, nxe2, nye2, e_of_equation_1, f_of_equation_1, g_of_equation_1);
            x_of_equation_1 = get_x_on_equation_1_type_2(axe1, aye1, nxe1, nye1, y_of_equation_2);

            cout<<"Caso #"<<i<<": "<<x_of_equation_1<<" "<<y_of_equation_2<<endl;
        }

    }

    return 0;
}

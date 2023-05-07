#include <iostream>
using namespace std;

class Tablet

{
public:
    double totalbill = 0;
    void displayMedicine1()
    {
        cout<< ("\n");
	cout<< ("|--------------------------------------|\n");
        cout<< ("|     Welcome to our Tablet section    |\n");
        cout<< ("|--------------------------------------|\n");
        cout<< ("\n\n\n");
        cout<< (" (1)Napa              -------      150/-\n");
        cout<< (" (2)Sergel            -------      200/-\n");
        cout<< (" (3)Histachin         -------      100/-\n");
        cout<< (" (4)Alendronate       -------      20/-\n");
    }
     void tagline()
    {
        cout<< "it is Tablet Section"<<endl;
    }

    void displayMedicineBill1()

    {
        char i = 0;
        cout<< "\n";
        cout<< "To confirm your order press 'y' \n";
        cout<< "|      Enter your Choice     | \n ";

        while(1)
        {

            cin>> i;

            if(i == 'y')
            {
                break;
            }

            else if(i == '1')
            {
                totalbill +=150;
                cout<< "Napa              -------      150/-\n"<<endl;
            }
            else if(i == '2')
            {
                totalbill += 200;
                cout<< "Sergel            -------      200/-\n"<<endl;
            }
            else if (i == '3')
            {
                totalbill +=100;
                cout<< "Histachin         -------      100/-\n"<<endl;
            }
            else if(i == '4')
            {
                totalbill +=20;
                cout<< "Alendronate       -------      20/-\n"<<endl;
            }

        }

        cout<< "Total Amount : "<<totalbill<<endl;
    }


};

class Syrup
{
public:
     double totalbill = 0;

    void displayMedicine2()
    {
        cout<< ("\n");
	cout<< ("|---------------------------------|\n");
        cout<< ("|  Welcome to our Syrup section   |\n");
        cout<< ("|---------------------------------|\n");
        cout<< ("\n");
        cout<< (" (1)Napa syrup        ------    100/-\n");
        cout<< (" (2)Robitussin+Chest ------    50/-\n");
        cout<< (" (3)Congestion DM     ------    50/\n");
        cout<< (" (4)Mucinex DM        ------    20/-\n");
    }
     void tagline()
    {
        cout<< "it is Syrup Section"<<endl;
    }



    void displayMedicineBill2()

    {
        char i = 0;
        cout<< "\n";
        cout<< "To confirm your order press 'y' \n";
        cout<< "|      Enter your Choice     | \n ";

        while(1)
        {

            cin>> i;

            if(i == 'y')
            {
                break;
            }

            else if(i == '1')
            {
                totalbill +=100;
                cout<< "Napa syrup        ------    100/-\n"<<endl;
            }
            else if(i == '2')
            {
                totalbill += 50;
                cout<< "Robitussin+Chest ------    50/-\n"<<endl;
            }
            else if (i == '3')
            {
                totalbill +=50;
                cout<< "Congestion DM     ------    50/\n"<<endl;
            }
            else if(i == '4')
            {
                totalbill +=20;
                cout<< "Mucinex DM        ------    20/-\n"<<endl;
            }
        }

        cout<< "Total Amount : "<<totalbill<<endl;

    }




};

class FirstAidKit
{
public:
    double totalbill = 0;
    void displayMedicine3()
    {
        cout<< ("\n");
	cout<< ("|------------------------------------------|\n");
        cout<< ("|    Welcome to our First Aid Kit section  |\n");
        cout<< ("|------------------------------------------|\n");
        cout<< ("\n\n\n");
        cout<< (" (1)Savlon                   --------        70/-\n");
        cout<< (" (2)Small glue bandage       --------        10/-\n");
        cout<< (" (3)Scissors/Sergical Blade  --------        100/-\n");
        cout<< (" (4)Hexisol                  --------        20/-\n");
    }
    void tagline()
    {
        cout<< "it is FirstAidKit Section"<<endl;
    }



    void displayMedicineBill3()

    {
        char i = 0;
        cout<< "\n";
        cout<< "To confirm your order press 'y' \n";
        cout<< "|      Enter your Choice     | \n";

        while(1)
        {

            cin>> i;

            if(i == 'y')
            {
                break;
            }

            else if(i == '1')
            {
                totalbill +=70;
                cout<< "Savlon                   --------        70/-\n"<<endl;
            }
            else if(i == '2')
            {
                totalbill += 10;
                cout<< "Small glue bandage       --------        10/-\n"<<endl;
            }
            else if (i == '3')
            {
                totalbill +=100;
                cout<< "Scissors/Sergical Blade  --------        100/-\n"<<endl;
            }
            else if(i == '4')
            {
                totalbill +=20;
                cout<< "Hexisol                  --------        20/-\n"<<endl;
            }
        }

        cout<< "Total Amount : "<<totalbill<<endl;
    }




};



class Option:public Tablet,public Syrup,public FirstAidKit
{
public:




        void displayItem1()

        {
           cout<< ("|-------------------------------------|\n");
           cout<< ("|    Welcome to NUB Pharmacy          |\n");
           cout<< ("|-------------------------------------|\n");
           cout<< ("\n");
           cout<< ("|-------------------------------------|\n");
           cout<< ("|    Which Medicine do you need ?     |\n");
           cout<< ("|-------------------------------------|\n");
           cout<< ("\n");
           cout<< (".          (1) Tablet\n");
           cout<< ("\n");
           cout<< (".          (2) Syrup\n");
           cout<< ("\n");
           cout<< (".          (3) Fast kit\n");
           cout<< ("\n");
        }

        void choice1()
        {



                char a;
                cout<< "|      Enter your Choice     | \n";
                cin>>a;

                if(a == '1')
                {
                    system("cls");
                    Tablet t1;
                    t1.displayMedicine1();
                    t1.tagline();
                    t1.displayMedicineBill1();


                }
                if (a == '2')
                {
                    system("cls");
                    Syrup s1;
                    s1.displayMedicine2();
                    s1.tagline();
                    s1.displayMedicineBill2();

                }

                if (a == '3')
                {
                    system("cls");
                    FirstAidKit f1;
                    f1.displayMedicine3();
                    f1.tagline();
                    f1.displayMedicineBill3();


                }

        }

};

int main()

{
    Option o1;
    o1.displayItem1();
    o1.choice1();

}

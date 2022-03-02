/*Write two classes to store distances in meter-centimeter and feet-inch systems respectively.
 Write conversions functions so that the program can convert objects of both types.*/
 #include<iostream>
 using namespace std;
 class met_cen{
     float meter;
     float centimeter;
     public:
     met_cen():meter(0.0),centimeter(0.0){}
     met_cen(float met, float c_met)
     {
         meter=met;
         meter=c_met;
     }
     void get_mc()
     {
         cout<<"Enter meter:";
         cin>> meter;
         cout<<"/nEnter centimeter:";
         cin>>centimeter;
     }
     float return_met(){return meter;}
     float return_cm(){return centimeter;}
     void display()
     {
         cout<<"Meter: "<<return_met()<<endl;
         cout<<"Centimeter: "<<return_cm()<<endl;
     }
 };
 class feet_inch{
     private:
     float inch;
     float feet;
     public:
     feet_inch():inch(0.0),feet(0.0){}
     void get_fi()
     {
         cout<<"Enter feet: ";
         cin>>feet;
         cout<<"Enter inch: ";
         cin>>inch;
     }
     feet_inch(met_cen cm)
     {
         float meters=cm.return_met()+cm.return_cm()/100;
         float feets = meters*3.28;
         feet=static_cast<int>(meters*3.28);
         inch=static_cast<int>(feets-feet)*12;
     }
     operator met_cen()
     {
         float feets=feet+inch*12;
         float meters=feet/3.28;
         float met=static_cast<int>(meters);
         float cmet=static_cast<int>(meters-met)*100;
         return met_cen(met,cmet);
     }
     void display()
     {
         cout<<"Feet: "<<feet<<endl;
         cout<<"Inch: "<<inch<<endl;
     }


 };
 int main()
 {
     int temp;
     met_cen cm;
     feet_inch fi;
     cout<<"1. conversion from meter-centimeter to feet-inch"<<endl;
     cout<<"2. conversion from feet-inch to meter-centimeter"<<endl;
     cout<<"Enter choice: ";
     cin>>temp;
     switch(temp)
     {
         case 1:
         cm.get_mc();
         fi=cm;
         fi.display();
         break;

         case 2:
         fi.get_fi();
         cm=fi;
         cm.display();
         break;

         default:
         cout<<"Enter either 1 or 2: "<<endl;
         break;
     }

     return 0;
 }
#include <string>
#include <iostream>

using namespace std;
class Matricule {
private:
    int nbreDeMatricule ;
    int jour,mois,annee;

    //string pays ;
//friend ostream& operator(ostream& ,Date&):
   // friend istream& operator(istream& ,cont Date&);
public:
Matricule(int nbre , int j, int m, int a): nbreDeMatricule(nbre), jour(j), mois(m), annee(a){}
void const getmatricule() {cout << nbreDeMatricule;}
void setMatricule(int m ) {nbreDeMatricule = m;}
void setdate(int j ,int m ,int a) {jour = j; mois = m; annee = a;}
//virtual float formuleAssuarance()=0;
Matricule() {}
};
//////////////////
class Automotive
{
private :
    int code ;
    protected :
    string _nom ;
    Matricule matricule;
public:
//  Automotive (string n="" ):_nom(n){Matricule(nbre , j, m,a);}
    Automotive (const string &nom,const Matricule &matricule)
    {
        this->_nom = nom;
        this->matricule = matricule;
    }
    Automotive() {}
};

class Car : public Automotive {

private:

    char  _WheelDrive;   //RWD or FWD
    char _mode ;  //(electrique or mecanique)
    int _nbrePower ;
    int _mileage ;  // kilometrage
    int _DoorNumbre;
    int _vitesse;
    Automotive automotive ;
public:


    Car (const char& WheelDrive,const char& mode,int nbrePower,int mileage ,int DoorNumbre,int vitesse,const Automotive& automotive)
     {
        this->_WheelDrive = WheelDrive;
        this->_mode = mode;
        this->_nbrePower = nbrePower;
        this->_mileage = mileage;
        this->_DoorNumbre = DoorNumbre;
        this->_vitesse = vitesse;
        this->automotive=automotive ;
 }
Car() {}

float formuleAssurance()
{float carAssuAhmed;

    if (_WheelDrive=='h')
    {
     carAssuAhmed= (int)_mode+_nbrePower*2+ _mileage*1.5+_DoorNumbre*20+ _vitesse*10;
    }else
    {
     carAssuAhmed= (int)_mode+_nbrePower*7+ _mileage*2+_DoorNumbre*30+ _vitesse*10;

    }
cout<<"vous devez payer par an "<<carAssuAhmed<<" DT"<<endl;
return carAssuAhmed;

}

    const int &getnbrepower() const {
        return _nbrePower ;
    }

    const int &getmileage() const {
        return _mileage ;
    }
     const int &getdoornumber() const {
        return _DoorNumbre ;
    }


    const char &getmode() const {
        return _mode ;
    }
const char &getWheelDrive() const {
        return _WheelDrive ;
    }

    const int &getvitesse() const {
        return _vitesse ;
    }


    void Setmileage(int &mille) {
        _mileage = mille;
    }
    void SetMode(char &mm) {
        _mode = mm;
    }
    void Setdoornumber(int &wwe) {
        _DoorNumbre = wwe;
    }
};



class Motobike: public Automotive {

private:

    int _nbr_Roue;
    int _weight ;
    int _vitesse;
    int _mileage ;
    int _nbrcheveaux;
    Automotive automotive ;
public:
//  Bike(int n,string m="",int we,int ch=0,int ki=0): nbr_Roue(n),mode(m),weight(we),chev(ch),kilom(ki){Automotive::Automotive();}

Motobike (int nbr_Roue,int weight,int vitesse,int mileage,int nbrcheveaux,Automotive& automotive)
     {

        this->_nbr_Roue = nbr_Roue;
        this->_weight=weight;
        this->_vitesse = vitesse;
        this->_mileage = mileage;
        this->_nbrcheveaux=nbrcheveaux;
        this->automotive=automotive ;
 }
float formuleAssurance()
{float r;
r=(_nbr_Roue*50+_weight*30+_vitesse*3+_mileage*4+_nbrcheveaux*6);
cout<<"vous devez payer par an "<<r<<" DT"<<endl;
return r;
}




    const int &getnbre_Roue() const {
        return _nbr_Roue ;
    }


       const  int &getweight()  {
        return _weight ;
    }

    const int &getvitesse() const {
        return _vitesse ;
    }
    const int &getmileage() const {
        return _mileage ;
    }
    const int &getnbrcheveaux() const {
        return _nbrcheveaux ;
    }


    void SetNbreR(int &nbre) {
        _nbr_Roue = nbre;
    }

    void SetWeight(int &ww) {
        _weight = ww;
    }

};

class Truck : public Automotive {

private:


    int _nbrePower ;
    int _mileage ;  // kilometrage
    int _DoorNumbre;
    int _weigth ;
    int _length ;
    int _vitesse;
    int _height ;
    Automotive automotive ;
public:

   Truck (int nbrePower,int mileage,int DoorNumbre,int weigth ,int length,int vitesse,Automotive& automotive)
     {
        this->_nbrePower = nbrePower;
        this->_mileage = mileage;
        this->_DoorNumbre = DoorNumbre;
        this->_weigth = weigth;
        this->_length = length;
        this->_vitesse = vitesse;
        this->automotive = automotive ;
 }

    float formuleAssurance() {
        float r;
        r=(_nbrePower*50+_vitesse*3+_mileage*40+_DoorNumbre*30+_length*2+_weigth*10);
        cout<<"vous devez payer par an "<<r<<" DT"<<endl;
        return r;
    }

    const int &getnbrepower() const {
        return _nbrePower ;
    }

    const int &getmileage() const {
        return _mileage ;
    }
     const int &getdoornumber() const {
        return _DoorNumbre ;
    }


    const char &getweigth() const {
        return _weigth ;
    }
const char &getlength() const {
        return _length ;
    }

    const int &getvitesse() const {
        return _vitesse ;
    }





};




class Velo : public Automotive  {

private:
    int _weight;
    char _type;
    Automotive automotive ;
public:
   //Bike (int n,string m="",int w,int we,int che=0,int ki=0): nbr_Roue(n),mode(m),weight(we),chev(ch),kilom(ki){Automotive(k);}

Velo (int weight,const char type,Automotive& automotive)
     {
        this->_type = type;
        this->_weight=weight;
        this->automotive=automotive ;
 }


float formuleAssurance()
{float r;
if (_type=='v')
r=(100+_weight*30);
else
    r=(200+_weight*30);
cout<<"vous devez payer par an "<<r<<" DT"<<endl;
return r;
}
    const char gettype() const {
        return _type ;
    }
         int getweight()  {
        return _weight ;
    }

    void SetMode(char &mm) {
        _type = mm;
    }
    void SetWeight(int &ww) {
        _weight = ww;
    }

};






int main() {

string nnomm;

char verif,ac;
int number,j,m,a;
cout<<endl<<endl;
cout << "                              ~~~~~~  Bienvenue au service assurance Riadh ~~~~~~"<<endl<<endl;

cout <<"          donner la marque du vehicule"<<endl;
cin>>nnomm;


cout <<"          saisie le numero de matricule "<<endl;
cin>>number ;


cout<<"           saisir le date d'achat de vehicule "<<endl;

do
{
cout<<"jour: ";
cin>>j;
}while (j>31 || j<0);

do{
cout<<"mois :";
cin>>m;
}while (m>12 || j<0);

do
{


cout<<"annee: ";
cin>>a;
}while (a<1900 || a>2024);

Matricule M =Matricule(number,j,m,a) ;
Automotive D=Automotive(nnomm,M);



cout <<"sasir le type de automotive utilise en tapant le lettre entre crochet"<<endl<<endl;
cout <<"                 voiture         [c]"<<endl ;
cout <<"                 camion          [d]"<<endl ;
cout <<"                 bike            [e]"<<endl ;
cout <<"                 scooter         [f]"<<endl ;


do{
cin>>ac ;
}while (ac<99 ||ac>102);



switch (ac)
    {
    case 'c':
{


        char m,w;
        int nch,np,kl,kmh;
        do
        {
        cout<< "             donner le mode de marche :  traction avant     [h]"<<endl;
        cout<<"                                          traction arriere   [i]"<<endl;
        cin>>w;
        }while(w<104 || w>105);

        do {
        cout <<"             donner le mode de fonctionnement : electrique [j]"<<endl;
        cout <<"                                                mecanique  [k]"<<endl;
        cin >> m;
        }while(m<106||m>107);
        cout<<"              donner le nombre des portes : "<<endl;
        cin >>np;
        cout<<"              donner le nombre des chevaux : "<<endl;
        cin>>nch;
        cout<<"              donner le nbre de compteur kilometrique : "<< endl ;
        cin >>kl;
        cout<< "             donner la vitesse maximale en km/h: "<<endl;
        cin>>kmh;
        Car k = Car(w,m,nch,kl,np,kmh,D);

        cout<<endl;
        cout<<endl;

        k.formuleAssurance();
        cout<<endl;
        cout<<endl;


        do{
cout << "vous voulez verifier vos donnes cliquer sur  [n]:non "<<endl;
cout << "                                             [o]:oui "<<endl;
cin >>verif;
}while(verif<110 || verif >111);
if(verif==111)
{
    cout<<k.getnbrepower()<<endl;
    cout<<k.getmileage()<<endl;
    cout<<k.getdoornumber()<<endl;
    cout<<k.getmode()<<endl;
    cout<<k.getvitesse()<<endl;
}

        break;
    }
     case 'd':
    {

        int ch,cc,np,poids,ll,hh,kmh;
        do{
        cout<< "               donner le nombre des cheveaux : "<<endl;
        cin>>ch;
        }while(ch<0);
        do{
        cout <<"              donner le nbre du compteur en km : "<<endl;
        cin >> cc;
        }while(cc<0);
        do{
        cout<<"              donner le nombre des portes : "<<endl;
        cin >>np;
        }while(np<0);
        do{
        cout<<"              donner le poids du camion en kg  : "<<endl;
        cin >>poids;
        }while(poids<0);
        do{
        cout<<"              donner le longueur du camion en metre  : "<<endl;
        cin >>ll;
        }while(ll<0);
        do {
        cout<< "              donner la vitesse maximale en km/h: "<<endl;
        cin>>kmh;

        }while(kmh<0);

        Truck t =Truck(ch,cc,np,poids,ll,kmh,D);
        cout<<endl;

        cout<<endl;

        t.formuleAssurance();
        cout<<endl;

        cout<<endl;


        do{
cout << "vous voulez verifier vos donnes cliquer sur  [n]:non "<<endl;
cout << "                                             [o]:oui "<<endl;
cin >>verif;
}while(verif<110 || verif >111);

if (verif ==111)
{
    cout<<t.getnbrepower()<<endl;
    cout<<t.getmileage()<<endl;
    cout<<t.getdoornumber()<<endl;
    cout<<t.getweigth()<<endl;
    cout<<t.getlength()<<endl;
    cout<<t.getvitesse()<<endl;
}

        break;
        }
    case 'e':
    {


        char tt;
        int poids;
        do {
        cout<< "              donner le type de velo :   vtt  :  [V]"<<endl;
        cout<<"                                          autre:  [w]"<<endl;
        cin>>tt;
        }while (tt<118 || tt>119);
        do {
        cout<<"              donner le poids du velo en kg: "<<endl;
        cin >>poids;
        }while (poids<0);
        Velo v =Velo(poids,tt,D);
cout<<endl;
cout<<endl;


        v.formuleAssurance();
cout<<endl;
cout<<endl;


do{
cout << "vous voulez verifier vos donnes cliquer sur  [n]:non "<<endl;
cout << "                                             [o]:oui "<<endl;
cin >>verif;
}while(verif<110 || verif >111);

if (verif==111)
{
    cout<<v.gettype()<<endl;
    cout<<v.getweight()<<endl;
}

       break;
        }

    case 'f':
    {

        int rr,ch,kmh,cc,poids;
        do{
        cout<<"              donner le nombre de roux: "<<endl;
        cin >>rr;
        }while(rr<0 || rr >4);
        do {
        cout<<"              donner le poids du moto en kg: "<<endl;
        cin >>poids;
        }while (poids<0);

        do {
        cout<<"              donner la vitesse maximale en km/h: "<<endl;
        cin >>kmh;
        }while (kmh<0);
        do {
        cout <<"              donner le nbre de compteur en kilometre: "<<endl;
        cin >> cc;
        }while(cc<0);
        do {
        cout<< "              donner le nombre des cheveaux fiscaux: "<<endl;
        cin>>ch;
        }while (ch<0);
        cout<<endl;
        cout<<endl;

        Motobike B=Motobike(rr,poids,kmh,cc,ch,D);


        B.formuleAssurance();
        cout<<endl;
cout<<endl;


        do{
cout << "vous voulez verifier vos donnes cliquer sur  [n]:non "<<endl;
cout << "                                             [o]:oui "<<endl;
cin >>verif;
}while(verif<110 || verif >111);


if (verif==111)
{
    cout<<B.getnbre_Roue()<<endl;
    cout<<B.getweight()<<endl;
    cout<<B.getvitesse()<<endl;
    cout<<B.getmileage()<<endl;
    cout<<B.getnbrcheveaux()<<endl;
}
        break;
        }


}
cout<<endl;
cout<<endl;

cout << "merci pour votre essie "<<endl;

cout<<endl;

    return 0;
}


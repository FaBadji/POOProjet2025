
#include <iostream>
#include <QString>

using namespace std;

struct Caracteristique{
    QString type;
    QString standing;
    int nb_chambres;
    int nb_toilettes;
    QString image1;
    QString image2;
    QString image3;
    QString image4;
    QString image5;
    QString description;

};



class Maison{  
    public:
    QString cle ;
    Caracteristique *valeur;
       Maison(QString& , Caracteristique *);
       ~Maison(){}
       QString getCle();
       void afficher();
       Maison(const Maison&); // constructeur de copie pour la classe maison
};

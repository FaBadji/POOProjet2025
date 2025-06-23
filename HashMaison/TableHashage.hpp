
#include <QVector>
#include "maison.hpp"


using namespace std;


// f1 f2 et f3 ne sont que symble , il sont là pour avoir une bonne gestion de la fonction de hachage
enum FonctionHachage{
    f1,
    f2,
    f3
};
    // j'utilise les énumérations pour symboliser les fonctions de hachage pour pouvoir travailler avec la fonction de hash

struct maillon{
    Maison *maison;
    maillon* next;

};   // nous avons là une liste chainée de maison

//typedef maillon* Liste;



class TableHachage{ 
    private:
    int t_taille;
    maillon **t_table;
    int taille_courant ;
    FonctionHachage fonctionchoisie;
    
    int hash(QString& cle) const;
    int fonctionHachage1(const QString& cle) const;
    int fonctionHachage2(const QString& cle) const;
    int fonctionHachage3(const QString&  cle) const;


    public:

    // operation de base
    TableHachage(int);
    ~TableHachage();
    void insertion(QString& , Caracteristique *);
    Caracteristique* get(QString& );
    void suppression (QString& );
    bool contient(QString& ) const;
    int size() const;
    bool estvide() const;
    
    void chargerDepuiBase();
    void sauvegarderVersBase();
   //
//    int mesurerTempsInsertion(const Liste maison& maisons);
//    int mesurerTempsRecherche(const QList<QString>& cles);

};
  // une fonction permettant de détruire une liste chainée d'élément

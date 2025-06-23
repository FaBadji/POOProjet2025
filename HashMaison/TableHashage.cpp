#include "TableHashage.hpp"
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QSqlDatabase>
#include <iostream>
TableHachage::TableHachage(int taille) {
    t_taille =taille;
    fonctionchoisie=f1;  // la fonction de hachage par défaut est f1
    t_table=new maillon*[taille];
    if (t_table==NULL){
        cerr<<"Erreur d'allocation";
        exit(1);}
    for(int i=0;i<t_taille;i++)
        t_table[i]=NULL;
    taille_courant=0;
}

TableHachage::~TableHachage(){
    for (int i=0;i<t_taille;i++){
        maillon* p=t_table[i], *q=NULL;
        while(p!=NULL){
            q=p;
            p=p->next;
            delete q;
         }
          }
}  


// j'utilise une fonction d'ajout en tête qui est plus rapide que l'ajout en queue



void TableHachage::insertion(QString &cl, Caracteristique *val){
    Maison m(cl,val);
    maillon *node = new maillon ;
      node->maison = &m;
      node->next = NULL;
    int index=hash(cl);
    // insertion de la maison à l'indice correspondante 
    maillon *p=t_table[index];
    while(p!=NULL && p->maison->cle!=cl)
        p=p->next;
    if(p==NULL){
        node->next=t_table[index];
        t_table[index]=node;
        taille_courant++;
       }
//    else
//        qDebug()<<"La cle est presente";


}

Caracteristique* TableHachage::get(QString& cle)  {
    int index=hash(cle);

    maillon *p=t_table[index]; // je récupère l'adresse de la maillon* correspondante
    while(p!=NULL && p->maison->cle!=cle)
         p=p->next;
    

    if (p!=NULL)
        return (p->maison->valeur);
    
    return NULL;

}


void TableHachage::suppression(QString& cle){
    int index=hash(cle);
    maillon *p=t_table[index];
    maillon *q=NULL;

    while(p!=NULL && p->maison->cle!=cle){
        q=p;
        p=p->next;
   }

   if (p!=NULL){
          if(q==NULL){
            t_table[index]=p->next;
          }
        else{
            q->next=p->next;
    }
    delete p;
    p=NULL;
    taille_courant--;
   }
//   else qDbeug() <<"element non present"<<endl;
    
}

bool TableHachage::contient(QString& cle) const {
    int index=hash(cle);
    maillon* p=t_table[index];
    while(p!=NULL){
        if (p->maison->cle==cle)
            return true;
        p=p->next;
    }
    return false;
}


int TableHachage::size() const {

    return taille_courant;
}



bool TableHachage::estvide() const {


    return(taille_courant==0);
}


// passons à la fonction qui permet de choisir une fonction de hachage

// il nous faut maintenant  adapter notre code ou bien nos fonctions suivant l'application QT sui sera implémentée


// je vai définir ici la fontion hash pour indiquer l'utilisatuer  quelle fontion a t il choisie

int TableHachage::hash(QString& cle)const {
//    //int index;
//    switch (fonctionchoisie) {
//        case f1:
//            return fonctionHachage1(cle);
//            break;
//        case f2:
//             return fonctionHachage2(cle);
//             break;
//        case f3:
//             return fonctionHachage3(cle);
//             break;
//        default:
             return 0;
    }


// donc il faut que définis la fonction de séletion de la fonction de hachage à appeler

//void TableHachage::choisirFonctionHachage(FonctionHachage f){
//     fonctionchoisie=f;  // Maintenant la fonction de hachage est choisi par l'utilisateur
//}

void TableHachage::chargerDepuiBase(){
    QSqlQuery query("SELECT cle, type, standing, nombre_chambre, nombre_toilette, image1,image2,image3,image4,image5 ,description FROM maison");
    while (query.next()){
        Caracteristique c;
        c.type = query.value(1).toString();
        c.standing = query.value(2).toString();
        c.nb_chambres = query.value(3).toInt();
        c.nb_toilettes = query.value(4).toInt();
        c.image1 = query.value(5).toString();
        c.image2 = query.value(6).toString();
        c.image3 = query.value(7).toString();
        c.image4 = query.value(8).toString();
        c.image5 = query.value(9).toString();
        c.description = query.value(10).toString();
        QString cl = query.value(0).toString();

        insertion(cl, &c);
    }
}

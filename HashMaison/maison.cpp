#include "maison.hpp"


Maison::Maison( QString& cl, Caracteristique *val){
    cle=cl;
    valeur=val;

}

QString Maison::getCle(){
    return cle;
}


// méthode permettant d'afficher une maison

//void Maison::afficher(){
//      qDebug() <<"Affichage de la maison"<<endl;
//     qDebug() <<"Cle:"<<cle<<endl;
//     qDebug() <<"Type:"<<valeur.type<<endl;
//     qDebug() <<"Standing:"<<valeur.standing<<endl;
//     qDebug() <<valeur.nb_chambres<<"chambres ,"<<valeur.nb_toilettes<<"toilettes ,"<<valeur.nb_salons<<"Salons ,"<<endl;
//     qDebug() <<"Description :"<<valeur.description<<endl;
//}

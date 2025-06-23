#ifndef CONNEXIONDB_H
#define CONNEXIONDB_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

bool Connectionbd()
{
    QSqlDatabase db =QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setDatabaseName("maisonbd");
    db.setPort(3306);
    db.setPassword("fbbm");
    if(db.open())
       {qDebug() <<"connexion a Mysql(base de donnee) avec Succes !!";

        return true;}
    else{qDebug() <<"Echec !!";
     return false;}
}

#endif // CONNEXIONDB_H

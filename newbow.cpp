#include "newbow.h"

newBow::newBow(QWidget *parent) :
    QDialog(parent)
{
    this->setFixedSize(400,300);                                         /////// setstylesheet pour chaque qlabel
    source=new QLabel(this); source->setText("Source");
    source->setGeometry(50,50,100,50);
    source1=new QSpinBox(this);
    source1->setGeometry(150,50,42,22);
///
    destination=new QLabel(this);destination->setText("Destination");
    destination->setGeometry(50,100,100,50);
    destination1=new QSpinBox(this);
    destination1->setGeometry(150,100,42,22);
///
    valeur=new QLabel(this);valeur->setText("Valeur");
    valeur->setGeometry(50,150,100,50);
    valeur1=new QSpinBox(this);
    valeur1->setGeometry(150,150,42,22);
///
    save=new QPushButton("SAVE",this);
    save->setGeometry(100,220,181,41);

    this->show();
}


newBow::~newBow()
{
}


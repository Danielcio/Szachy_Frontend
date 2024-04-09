#include "customwidget.h"
#include "backend/Plansza.h"

#include <QPainter>
#include <QMouseEvent>
//#include "prostokat.h"
#include  "plansza_frontend.h"
#include "figura_frontend.h"
#include <iostream>
#include<QDebug>
    CustomWidget::CustomWidget(QWidget *parent) :
    QWidget(parent)
{
}

void CustomWidget::paintEvent(QPaintEvent *)
{
   QPainter painter(this);
    QRect r1 = rect().adjusted(10,10,-10,-10);
    painter.setPen(QColor("#c7cc37"));
    painter.drawRect(r1);
    plansza.paintEvent(&painter);
    //int ROZMIAR = 50;
    //Figura figura("♔");

    //if(m_lastPos.isNull()) {
         // figura("♔").position(());
         //   } else {
         //        figura.moveCenter(m_lastPos);
         //    }
  //  figura.paintEvent(&painter,200,200);
   // QRect r2(QPoint(10,30),QSize(40,40));
    //Figura figura("♔");
    //figura.paintEvent(&painter,10,30);
    //if(m_lastPos.isNull()) {
      // r2.moveCenter(r1.center());
    //} else {
      //  r2.moveCenter(m_lastPos);
     //}
     //painter.fillRect(r2, QColor("#111211"));
    //  QRect r3(QPoint(0,0),QSize(20,20));
    //   if(m_lastPos.isNull()) {
    //      r3.moveCenter(r1.center());
    //   } else {
    //       r3.moveCenter(m_lastPos);
    //   }
    //   painter.fillRect(r3, QColor("#CD5C5C"));
    //prostokat pr1;
 }
 void CustomWidget::mousePressEvent(QMouseEvent *event)
 {//std::cout<<"a";
    plansza.mousePressEvent(event);
   // event->ignore();
//    // m_lastPos = event->pos();
 update();
//   //  nowy_punkt = event->pos();
//   //  update();
}

 void CustomWidget::mouseMoveEvent(QMouseEvent *event)
 {
//    // m_lastPos = event->pos();
//     //update();
//   //  nowy_punkt= event->pos();
//    // update();
}

// // void CustomWidget::mouseMoveEvent(QMouseEvent *event)
// // {
// //     nowy_punkt = event->pos();
// //     update();
// // }
// // void CustomWidget::mousePressEvent(QMouseEvent *event)
// // {
// //     nowy_punkt = event->pos();
// //     update();
// // }

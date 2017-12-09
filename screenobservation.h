#ifndef SCREENOBSERVATION_H
#define SCREENOBSERVATION_H

#include <QObject>
#include <QWidget>
#include "QLabel"
#include <QHBoxLayout>
#include <QPushButton>
#include <QDebug>
#include <QComboBox>
#include <QMovie>

class screenObservation : public QWidget
{
    Q_OBJECT
public:
    explicit screenObservation(QWidget *parent = nullptr);

private:
    QLabel *gif;

signals:

public slots:
    void change(int);
};

#endif // SCREENOBSERVATION_H

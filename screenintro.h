#ifndef SCREENINTRO_H
#define SCREENINTRO_H

#include <QObject>
#include <QWidget>
#include "QLabel"
#include <QHBoxLayout>

class screenIntro : public QWidget
{
    Q_OBJECT
public:
    explicit screenIntro(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // SCREENINTRO_H

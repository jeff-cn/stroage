#ifndef TEST_H
#define TEST_H

#include <QObject>

class test : public QObject
{
    Q_OBJECT
public:
    explicit test(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // TEST_H

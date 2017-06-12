#ifndef HTTPUTILL_H
#define HTTPUTILL_H

#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QString>
#include <QEventLoop>
#include <QByteArray>
#include <QVariant>

class httpUtill
{
public:
    httpUtill();
    ~httpUtill();
public:
    QString http_Post(QString uri, QString header);
    QString http_Get(QString uri);
};

#endif // HTTPUTILL_H

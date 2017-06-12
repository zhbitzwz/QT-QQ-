#include "httputill.h"

httpUtill::httpUtill()
{

}

httpUtill::~httpUtill()
{

}



/**
 * http post request
 * Post("http://112.74.49.223/zwz/hw_qq/api.php","account=6489711231&password=12345678");
 * @brief Post
 * @param uri
 * @param header
 * @return
 */
QString httpUtill::http_Post(QString uri, QString header)
{
    QEventLoop eventLoop;
    QNetworkAccessManager manager;
    QUrl url(uri);
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    QObject::connect(&manager, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
    QNetworkReply *reply = manager.post(request, header.toUtf8());
    eventLoop.exec();
    return reply->readAll();
}
/**
 * http post request
 * Get("http://112.74.49.223/zwz/hw_qq/api.php?action=login&account=6489711231&password=12345678")
 * @brief Get
 * @param uri
 * @return
 */
QString httpUtill::http_Get(QString uri)
{
    QEventLoop eventLoop;
    QNetworkAccessManager mgr;
    QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
    QUrl url(uri);
    QNetworkRequest req(url);
    QNetworkReply *reply = mgr.get(req);
    eventLoop.exec();
    return reply->readAll();

}

/**
 * use data deal from cloud server intial
 * Register Login addfriend
 * @brief dataChat
 * @param data
 * @return
 */
//QString dataChat(QString data)
//{
//    QStringList strlist = data.split("#");
////    qDebug() << "sqlit string=>" << strlist;
//    if(strlist.at(0) == "1") {

//    } else if (strlist.at(0) == "0") {
//        return strlist.at(1);
//    }
//    return data;
//}

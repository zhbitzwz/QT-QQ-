#ifndef USERINFO_H
#define USERINFO_H

#include <QString>
#include <QDateTime>

class userInfo
{
private:
    QString uid;
    QString account;
    QString password;
    QString nickname;
    QString reg_time;
public:
    userInfo();
    ~userInfo();

    void setUid(QString uid);
    void setAccount(QString account);
    void setPassword(QString password);
    void setNickName(QString nickname);
    void setRegTime(QString reg_time);

    QString getUid();
    QString getAccount();
    QString getPassword();
    QString getNickName();
    QString getRegTime();
};

#endif // USERINFO_H

#include "userinfo.h"

userInfo::userInfo()
{

}
userInfo::~userInfo()
{

}
void userInfo::setUid(QString uid)
{
    userInfo::uid = uid;
}
void userInfo::setAccount(QString account)
{
    userInfo::account = account;
}
void userInfo::setNickName(QString nickname)
{
    userInfo::nickname = nickname;
}
void userInfo::setPassword(QString password)
{
    userInfo::password = password;
}
void userInfo::setRegTime(QString reg_time)
{
    userInfo::reg_time = reg_time;
}
QString userInfo::getUid()
{
    return userInfo::uid;
}
QString userInfo::getNickName()
{
    return userInfo::nickname;
}
QString userInfo::getPassword()
{
    return userInfo::password;
}
QString userInfo::getRegTime()
{
    return userInfo::reg_time;
}

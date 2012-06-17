#ifndef KontomierzReply_H
#define KontomierzReply_H
#include <QtNetwork>
#include <QtCore/QObject>

class KontomierzReply : public QObject
{
Q_OBJECT
public:
    QNetworkAccessManager *manager;
    QNetworkRequest * request;
    QNetworkReply *reply;
  
    KontomierzReply(const char *);
    ~KontomierzReply()
    {
    }
    
private slots:
  void slotReadyRead();
  void provideAuthenication(QNetworkReply *, QAuthenticator *);
    
};

#endif // KontomierzReply_H

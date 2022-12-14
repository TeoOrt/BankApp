#include "databasehandler.h"
#include <QNetworkRequest>
#include <QDebug>
#include <QJsonDocument>
#include <QVariantMap>

DatabaseHandler::DatabaseHandler(QObject *parent)
    : QObject(parent){
    m_networkManager = new QNetworkAccessManager(this);
    m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://bank-9c1c4-default-rtdb.firebaseio.com/Client.json")));
    QVariantMap newClient;
    newClient["Email"] = "foo@gmail.com";
    newClient["Name"] = "Bar";
    newClient["Phone Number"]= "911562353";
    QJsonDocument jsonDoc = QJsonDocument:: fromVariant(newClient);
    QNetworkRequest newClientRequestr(QUrl("https://bank-9c1c4-default-rtdb.firebaseio.com/Client.json"));
    newClientRequestr.setHeader(QNetworkRequest::ContentTypeHeader, QString("application/json"));
    m_networkManager->post(newClientRequestr,jsonDoc.toJson());

    connect(m_networkReply, &QNetworkReply::readyRead, this, &DatabaseHandler::networkReplyReadyRead);
}

DatabaseHandler::~DatabaseHandler()
{
    m_networkManager->deleteLater();
}

void DatabaseHandler::networkReplyReadyRead()
{
    qDebug() << m_networkReply->readAll();
}

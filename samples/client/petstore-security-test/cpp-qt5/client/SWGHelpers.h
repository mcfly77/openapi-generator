/**
 * Swagger Petstore *_/ ' \" =end -- \\r\\n \\n \\r
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\  *_/ ' \" =end --       
 *
 * OpenAPI spec version: 1.0.0 *_/ ' \" =end -- \\r\\n \\n \\r
 * Contact: apiteam@swagger.io *_/ ' \" =end -- \\r\\n \\n \\r
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#ifndef SWGHELPERS_H
#define SWGHELPERS_H

#include <QJsonValue>

namespace Swagger {

    void setValue(void* value, QJsonValue obj, QString type, QString complexType);
    void toJsonArray(QList<void*>* value, QJsonArray* output, QString innerName, QString innerType);
    void toJsonValue(QString name, void* value, QJsonObject* output, QString type);
    bool isCompatibleJsonValue(QString type);
    QString stringValue(QString* value);
    QString stringValue(qint32 value);
    QString stringValue(qint64 value);
    QString stringValue(bool value);

}

#endif // SWGHELPERS_H
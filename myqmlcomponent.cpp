#include <QQuickItem>
#include <libmscore/mscore.h>

class MyQmlComponent : public QQuickItem
{
    Q_OBJECT
        Q_PROPERTY(QString myProperty READ myProperty WRITE setMyProperty NOTIFY myPropertyChanged)

public:
    MyQmlComponent(QQuickItem* parent = nullptr);

    QString myProperty() const;
    void setMyProperty(const QString& value);

signals:
    void myPropertyChanged();

private:
    Ms::Score* score;
    QString m_myProperty;
};

MyQmlComponent::MyQmlComponent(QQuickItem* parent)
    : QQuickItem(parent)
{
    // Create an instance of libmscore
    score = new Ms::Score();
}

QString MyQmlComponent::myProperty() const
{
    return m_myProperty;
}

void MyQmlComponent::setMyProperty(const QString& value)
{
    if (m_myProperty != value) {
        m_myProperty = value;
        emit myPropertyChanged();
    }
}

// Register the QML component
QML_DECLARE_TYPE(MyQmlComponent)

#ifndef IPEDIT_H
#define IPEDIT_H

#include <QWidget>
#include <QLineEdit>
#include <QSpinBox>
#include <QLabel>
#include <QBoxLayout>
#include <QPaintEvent>

class IPEdit : public QWidget
{
    Q_OBJECT
public:
    explicit IPEdit(QWidget *parent = 0);
    ~IPEdit();
    
    QString text();
    void setText(const QString& text);
    
protected:
    void init();
    void initForEdit(QLineEdit* edit);
    
    virtual void paintEvent(QPaintEvent* event);
    virtual bool eventFilter(QObject* object, QEvent* event);
    
private:
    QBoxLayout* m_layout;
    QLineEdit* m_edit1;
    QLineEdit* m_edit2;
    QLineEdit* m_edit3;
    QLineEdit* m_edit4;
    QLabel* m_dot1;
    QLabel* m_dot2;
    QLabel* m_dot3;
};

#endif // IPEDIT_H

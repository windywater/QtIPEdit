# 用法
``` cpp
    IPEdit* ipEdit = new IPEdit(this);
    ipEdit->setGeometry(10, 10, 130, 25);
    ipEdit->show();

    ipEdit->setText("255.255.255.0");
    QString text = ipEdit->text();
```
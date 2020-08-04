/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *usuarioLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *contraLineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *usuarioNormalRadioButton;
    QRadioButton *adminRadioButton;
    QDialogButtonBox *buttonBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *registrarAdminPushButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(410, 197);
        verticalLayout_4 = new QVBoxLayout(Login);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        usuarioLineEdit = new QLineEdit(Login);
        usuarioLineEdit->setObjectName(QString::fromUtf8("usuarioLineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(10);
        usuarioLineEdit->setFont(font1);

        horizontalLayout->addWidget(usuarioLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        contraLineEdit = new QLineEdit(Login);
        contraLineEdit->setObjectName(QString::fromUtf8("contraLineEdit"));
        contraLineEdit->setFont(font1);

        horizontalLayout_2->addWidget(contraLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_2);

        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        usuarioNormalRadioButton = new QRadioButton(groupBox);
        usuarioNormalRadioButton->setObjectName(QString::fromUtf8("usuarioNormalRadioButton"));

        verticalLayout->addWidget(usuarioNormalRadioButton);

        adminRadioButton = new QRadioButton(groupBox);
        adminRadioButton->setObjectName(QString::fromUtf8("adminRadioButton"));

        verticalLayout->addWidget(adminRadioButton);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout_4->addWidget(groupBox);


        verticalLayout_4->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(Login);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setFont(font);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);

        line = new QFrame(Login);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        registrarAdminPushButton = new QPushButton(Login);
        registrarAdminPushButton->setObjectName(QString::fromUtf8("registrarAdminPushButton"));
        registrarAdminPushButton->setFont(font);
        registrarAdminPushButton->setToolTipDuration(20);
        registrarAdminPushButton->setCheckable(false);
        registrarAdminPushButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(registrarAdminPushButton);


        verticalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "DNI", nullptr));
        usuarioLineEdit->setPlaceholderText(QCoreApplication::translate("Login", "Ingrese su DNI", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Contrase\303\261a", nullptr));
        contraLineEdit->setPlaceholderText(QCoreApplication::translate("Login", "Ingrese su Contrase\303\261a", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Login", "Tipo", nullptr));
        usuarioNormalRadioButton->setText(QCoreApplication::translate("Login", "Usuario normal", nullptr));
        adminRadioButton->setText(QCoreApplication::translate("Login", "Administrador", nullptr));
#if QT_CONFIG(tooltip)
        registrarAdminPushButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        registrarAdminPushButton->setText(QCoreApplication::translate("Login", "Registrar administrador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

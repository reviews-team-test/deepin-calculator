#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <DMainWindow>
#include <QGridLayout>
#include <QKeyEvent>
#include "titlebar.h"
#include "expressionlist.h"
#include "textbutton.h"

DWIDGET_USE_NAMESPACE

class MainWindow : public DMainWindow
{
    Q_OBJECT

public:
    MainWindow(DMainWindow *parent=0);
    ~MainWindow();

private:
    QWidget *mainWidget;
    QGridLayout *mainLayout;
    TitleBar *titleBar;
    ExpressionList *expList;
    TextButton *clearButton;
    TextButton *backButton;
    TextButton *modButton;
    TextButton *divButton;
    TextButton *num7Button;
    TextButton *num8Button;
    TextButton *num9Button;
    TextButton *multButton;
    TextButton *num4Button;
    TextButton *num5Button;
    TextButton *num6Button;
    TextButton *minButton;
    TextButton *num1Button;
    TextButton *num2Button;
    TextButton *num3Button;
    TextButton *plusButton;
    TextButton *zeroButton;
    TextButton *pointButton;
    TextButton *bracketsButton;
    TextButton *equalButton;

protected:
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *);

private slots:
    void onNumberButtonClicked(const QString &str);
    void onBackButtonClicked();
    void onPointButtonClicked();
    void onSymbolButtonClicked(const QString &str);
    void onClearButtonClicked();
    void onEqualButtonClicked();
    void onBracketButtonClicked();
    void onModButtonClicked();
};

#endif
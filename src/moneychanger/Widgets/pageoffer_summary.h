#ifndef PAGEOFFER_SUMMARY_H
#define PAGEOFFER_SUMMARY_H

#include <QWizardPage>

namespace Ui {
class PageOffer_Summary;
}

class PageOffer_Summary : public QWizardPage
{
    Q_OBJECT

public:
    explicit PageOffer_Summary(QWidget *parent = 0);
    ~PageOffer_Summary();

private:
    Ui::PageOffer_Summary *ui;
};

#endif // PAGEOFFER_SUMMARY_H

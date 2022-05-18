#include <iostream>
#include "Tests.h"
#include "Ui.h"

int main(int argc, char** argv) {
    Tests::runAll();
    Repo r{"tasks.txt"};
    Service s{r};
    QApplication a{argc, argv};
    Ui mainW{s};

    mainW.show();
    a.exec();
    return 0;
}

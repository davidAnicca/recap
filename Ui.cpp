//
// Created by david on 18.05.2022.
//

#include "Ui.h"

void Ui::init() {
    setLayout(mainL);

    mainL->addWidget(list);

    dreaptaW->setLayout(dreaptaL);
    dreaptaL->addWidget(input);
    dreaptaL->addWidget(showBtn);
    dreaptaL->addWidget(duration);
    mainL->addWidget(dreaptaW);

}

void Ui::conec() {
    QObject::connect(showBtn, &QPushButton::clicked, [&](){
        if(input->text().isEmpty()){
            duration->setText("0");
        }else{
            try{
                int p = std::stoi(input->text().toStdString());
                duration->setText(QString::fromStdString(
                        std::to_string(srv.getWPriority(p))
                        ));
            }catch(std::invalid_argument&){
                QMessageBox::warning(this,
                                     "atenție!",
                                     "trebe număr");
            }
        }
    });
}

void Ui::reload(const vector<Task> all) {
    list->clear();
    for(auto& task : all){
        auto* item = new QListWidgetItem;
        item->setText(QString::fromStdString(task.getName()
        + " " + std::to_string(task.getDuration())
        + " " +
        std::to_string(task.getPriority())));
        item->setData(Qt::UserRole,
                      QString::fromStdString(
                              std::to_string(
                                      task.getPriority()
                                      )
                              ));
        if(task.getPriority() == 1){
            QFont fnt = item->font();
            fnt.setWeight(QFont::Bold);
            item->setFont(fnt);
        }
        list->addItem(item);
    }
}

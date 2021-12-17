//
// Created by Dmitry Morozov on 10.12.2021.
//

#ifndef LABTRAINING_MARKS_H
#define LABTRAINING_MARKS_H

class Mark {
public:
    Mark(int mark, int weight);

    int getMark() const;

    int getWeight() const;

    int getMarkWithWeight() const;
};

#endif //LABTRAINING_MARKS_H

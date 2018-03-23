//
// Created by Miguel Angel Julian Aguilar on 22/3/18.
//

#ifndef GOOGLEFRUIT_EXAMPLE_NICEWRITER_H
#define GOOGLEFRUIT_EXAMPLE_NICEWRITER_H


#include <fruit/macro.h>
#include "IWriter.h"

class NiceWriter : public IWriter {
public:
    // Like "StdoutWriter() = default;" but also marks this constructor as the one to use for injection.
    INJECT(NiceWriter()) = default;

    virtual void writer(std::string s) override;
};


#endif //GOOGLEFRUIT_EXAMPLE_NICEWRITER_H

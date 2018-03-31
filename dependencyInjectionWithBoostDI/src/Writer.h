//
// Created by Miguel Angel Julian Aguilar on 22/3/18.
//

#ifndef GOOGLEFRUIT_EXAMPLE_WRITER_H
#define GOOGLEFRUIT_EXAMPLE_WRITER_H


#include "IWriter.h"

class Writer : public IWriter {
public:
    // Like "StdoutWriter() = default;" but also marks this constructor as the one to use for injection.
    Writer() = default;

    virtual void writer(std::string s) override;
};


#endif //GOOGLEFRUIT_EXAMPLE_WRITER_H

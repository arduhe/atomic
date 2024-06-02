#ifndef _MOCK_BAR_H_
#define _MOCK_BAR_H_

#include <Bar.h>
#include <gmock/gmock.h>


class Mock_Bar : public Bar {
public:
    Mock_Bar();
    ~Mock_Bar();

    MOCK_METHOD(void, setRotation, (int n));
};

#endif

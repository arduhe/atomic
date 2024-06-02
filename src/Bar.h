#ifndef _BAR_h_
#define _BAR_h_

class Bar {
    public:

        void setRotation(int n) { rotation = n % 4; }

    private:
       int rotation;

};

#endif


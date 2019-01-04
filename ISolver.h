

#ifndef SERVERAPPLICATION_SOLVER_H
#define SERVERAPPLICATION_SOLVER_H

namespace server_side {

    template <class P, class S>
    class ISolver {

    public:

        virtual S solve(P) = 0;

    };
}



#endif //SERVERAPPLICATION_SOLVER_H

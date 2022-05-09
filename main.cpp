#include <iostream>
#include <string>
#include <functional>

// States
// q = {{state, symbol, next_state, action}, ...}

struct State {
    std::string state;
    std::string symbol;
    std::string next_state;
    std::function<void()> action;
};

int main(int, char**) {
    static const auto NO_ACTION = [](){/*No action*/};

static const State states[75] = {
        /* 1 */
        {"Q0", "1", "Q1", NO_ACTION},
        {"Q1", "1", "Q2", NO_ACTION},
        {"Q2", "1", "Q3", NO_ACTION},
        {"Q3", "1", "Q4", NO_ACTION},
        {"Q4", "1", "Q5", NO_ACTION},
        {"Q5", "1", "Q6", NO_ACTION},
        {"Q6", "1", "Q7", NO_ACTION},
        {"Q7", "1", "Q8", NO_ACTION},
        {"Q8", "1", "Q9", NO_ACTION},
        {"Q9", "1", "Q10", NO_ACTION},
        {"Q10", "1", "Q11", NO_ACTION},
        {"Q11", "1", "Q12", NO_ACTION},
        {"Q12", "1", "Q13", NO_ACTION},
        {"Q13", "1", "Q14", NO_ACTION},
        {"Q14", "1", "Q15", NO_ACTION},
        {"Q15", "1", "Q16", NO_ACTION},
        {"Q16", "1", "Q17", NO_ACTION},
        {"Q17", "1", "Q18", NO_ACTION},
        {"Q18", "1", "Q19", NO_ACTION},
        {"Q19", "1", "Q20", NO_ACTION},
        {"Q20", "1", "Q21", NO_ACTION},
        {"Q21", "1", "Q22", NO_ACTION},
        {"Q22", "1", "Q23", NO_ACTION},
        {"Q23", "1", "Q24", NO_ACTION},
        {"Q24", "1", "Q25", NO_ACTION},
        /* 2 */
        {"Q0", "2", "Q2", NO_ACTION},
        {"Q1", "2", "Q3", NO_ACTION},  
        {"Q2", "2", "Q4", NO_ACTION},  
        {"Q3", "2", "Q5", NO_ACTION},  
        {"Q4", "2", "Q6", NO_ACTION},  
        {"Q5", "2", "Q7", NO_ACTION},  
        {"Q6", "2", "Q8", NO_ACTION},  
        {"Q7", "2", "Q9", NO_ACTION},  
        {"Q8", "2", "Q10", NO_ACTION}, 
        {"Q9", "2", "Q11", NO_ACTION}, 
        {"Q10", "2", "Q12", NO_ACTION},
        {"Q11", "2", "Q13", NO_ACTION},
        {"Q12", "2", "Q14", NO_ACTION},
        {"Q13", "2", "Q15", NO_ACTION},
        {"Q14", "2", "Q16", NO_ACTION},
        {"Q15", "2", "Q17", NO_ACTION},
        {"Q16", "2", "Q18", NO_ACTION},
        {"Q17", "2", "Q19", NO_ACTION},
        {"Q18", "2", "Q20", NO_ACTION},
        {"Q19", "2", "Q21", NO_ACTION},
        {"Q20", "2", "Q22", NO_ACTION},
        {"Q21", "2", "Q23", NO_ACTION},
        {"Q22", "2", "Q24", NO_ACTION},
        {"Q23", "2", "Q25", NO_ACTION},
        {"Q24", "2", "Q26", NO_ACTION},
        /* 5 */
    };
    std::cout << "Hello, world!\n" << states[0].next_state << "\n";
}

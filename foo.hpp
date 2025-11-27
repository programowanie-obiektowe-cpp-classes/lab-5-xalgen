#pragma once

#include "Human.hpp"
#include <list>
#include <vector>
#include <algorithm>


std::vector< char > foo(std::list< Human >& people)
{

    std::vector<char> result;

    for (auto it = people.begin(); it != people.end(); ++it) {

        it->birthday();
    }

    for (auto ip = people.begin(); ip != people.end();++ip) {

        if (ip->isMonster()) {
            result.emplace_back('n');

        }
        else {
            result.emplace_back('y');
        }
    }
    std::reverse(result.begin(), result.end());

    return result;
}

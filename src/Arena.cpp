
#include "Arena.hpp"

bool is_wall(int cell)
{
    return cell & 1;
}

bool is_mine(int cell)
{
    return (cell & 2);
}

bool is_oppo(int cell)
{
    return cell & 4;
}

bool is_empty(int cell)
{
    return cell & 4 == 0;
}

bool is_rocket(int cell)
{
    return cell & 8;
}

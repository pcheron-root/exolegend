
// Every test should return true

bool test_is_wall()
{
    int cell = 1 + 8;
    return is_wall(cell);
}

bool test_is_mine()
{
    int cell = 2 + 32;
    return is_mine(cell);
}

bool test_is_oppo()
{
    int cell = 2;
    return !is_oppo(cell);
}

bool test_is_empty()
{
    int cell = 8;
    return is_empty(cell);
}

bool test_is_rocket()
{
    int cell = 8;
    return !is_rocket(cell);
}

//
// map de test
//

// 2 chemin avec un des deux chemins plus grand
// 1, 1, 1, 1, 1, 1
// 1, 0, 2, 0, 0, 1
// 1, 1, 1, 1, 1, 1

// 4 chemins, une rockette
// 1, 1, 1, 1, 1,
// 1, 1, 0, 1, 1,
// 1, 0, 2, 0, 1,
// 1, 1, 8, 1, 1,
// 1, 1, 1, 1, 1,

// 3 chemins un des chemin est plus grand
// 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
// 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1
// 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1
// 1, 0, 2, 0, 1, 0, 1, 1, 1, 1, 1
// 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1
// 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1

// 4 chemins, une bombe a prendre avant de partir dans le plus grand chemin
// 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
// 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1
// 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1
// 1, 0, 2, 0, 0, 0, 1, 1, 1, 1, 1
// 1, 1, 8, 1, 0, 0, 1, 1, 1, 1, 1
// 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1

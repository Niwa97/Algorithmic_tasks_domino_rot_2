#include <iostream>
#include <vector>

int min_rotates(std::vector<int>& A, std::vector<int>& B) {
    int size = A.size();
    if(size == 1)
    {
        return 0;
    }
    int cmp_top = A.at(0);
    int cmp_bottom = B.at(0);
    int rot_top = 0;
    int rot_bottom = 0;
    int i = 1;
    while( (cmp_top != 0 && cmp_bottom != 0) || i < size)
    {
        if(cmp_top != A.at(i) && cmp_top != B.at(i))
        {
            cmp_top = 0;
        }
        if(cmp_bottom != A.at(i) && cmp_bottom != B.at(i))
        {
            cmp_bottom = 0;
        }
        if(cmp_top != A.at(i) && cmp_top == B.at(i))
        {
            rot_top++;

        }
        if(cmp_bottom == A.at(i) && cmp_bottom != B.at(i))
        {
            rot_bottom++;
        }
        i++;
    }
    if(cmp_top == 0 && cmp_bottom == 0)
    {
        return -1;
    }
    else if(rot_top > 0 && rot_bottom)
    {
        return std::min(rot_top,rot_bottom);
    }
    else
    {
        return std::max(rot_top,rot_bottom);
    }

}

int main() {
    std::vector<int> Up;
    std::vector<int> Down;
    std::vector<int> Up2;
    std::vector<int> Down2;
    std::vector<int> Up3;
    std::vector<int> Down3;
    std::vector<int> Up4;
    std::vector<int> Down4;
    Up.push_back(2);
    Up.push_back(1);
    Up.push_back(2);
    Up.push_back(4);
    Up.push_back(2);
    Up.push_back(2);
    Down.push_back(5);
    Down.push_back(2);
    Down.push_back(6);
    Down.push_back(2);
    Down.push_back(3);
    Down.push_back(2);
    Up2.push_back(3);
    Up2.push_back(5);
    Up2.push_back(1);
    Up2.push_back(2);
    Up2.push_back(3);
    Down2.push_back(3);
    Down2.push_back(6);
    Down2.push_back(3);
    Down2.push_back(3);
    Down2.push_back(4);
    Up3.push_back(1);
    Up3.push_back(1);
    Up3.push_back(1);
    Up3.push_back(1);
    Up3.push_back(1);
    Up3.push_back(1);
    Down3.push_back(5);
    Down3.push_back(2);
    Down3.push_back(6);
    Down3.push_back(2);
    Down3.push_back(3);
    Down3.push_back(2);
    Up4.push_back(1);
    Down4.push_back(5);
    int rot = min_rotates(Up,Down);
    std::cout << rot << std::endl;
    rot = min_rotates(Up2,Down2);
    std::cout << rot << std::endl;
    rot = min_rotates(Up3,Down3);
    std::cout << rot << std::endl;
    rot = min_rotates(Up4,Down4);
    std::cout << rot << std::endl;
}

#include <iostream>
#include "Rect.h"
#include "Vec.h"
#include "RectStash.h"
#include <vector>

int main(int argc, const char *argv[])
{
    RectStash h;

    float f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    while (!(f1 < 0.0f && f2 < 0.0f && f3 < 0.0f && f4 < 0.0f))
    {
        // cout << "while loop" << endl;
        cin >> f1;
        cin >> f2;
        cin >> f3;
        cin >> f4;
        if (!(f1 < 0.0f && f2 < 0.0f && f3 < 0.0f && f4 < 0.0f))
        {
            Rect ad(f1, f2, f3, f4);
            h.add(&ad);
        }
    }
    vector<Vec> ve;
    float i1, i2;
    while (!(i1 == -99 && i2 == -99))
    {
        cin >> i1;
        cin >> i2;
        if (!(i1 == -99 && i2 == -99))
        {
            Vec d(i1, i2);
            ve.push_back(d);
        }
    }
    for (int j = 0; j < ve.size(); j++)
    {
        for (int i = 0; i < h.get().size(); i++)
        {
            if (h.get().at(i).contains(ve.at(j)))
            {

                cout << "in ";
            }
            else
            {
                cout << "out ";
            }
        }
        cout << endl;
    }
    //     Rect a(-5.0f, -5.0f, 2.0f, 2.0f),
    //     b(5.0f, 8.0f, 2.0f, 2.0f);
    // if (a.contains(Vec::null))
    //     std::cout << "error1\n";
    // if (b.contains(Vec::null))
    //     std::cout << "error2\n";
    // if (!a.contains(Vec(-4.0f, -6.0f)))
    //     std::cout << "error3\n";
    // if (b.contains(Vec(6.0f, 9.0f)))
    //     std::cout << "error4\n";
    // if (b.contains(Vec(6.0f, 5.0f)))
    //     std::cout << "error5\n";
    // std::cout << "Done\n";

    // if (a.contains(Vec(-3.0f, -4.0f)))
    //     std::cout << "error3.5\n";
    // if (a.contains(Vec(-5.0f, -7.0f)))
    // {
    // }
    return 0;
}

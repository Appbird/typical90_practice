#include <vector>
#include <cassert>
#include <iostream>

int main(){
    size_t N; std::cin >> N;
    // class1[i]: `i`番目未満のクラス1の学生の得点の累積和
    std::vector<int32_t> class1(N + 1, 0);
    // class2[i]: `i`番目未満のクラス2の学生の得点の累積和
    std::vector<int32_t> class2(N + 1, 0);
    
    for (size_t i = 0; i < N; i++) {
        int32_t C_i, P_i; std::cin >> C_i >> P_i;
        int32_t increment_class1 = 0, increment_class2 = 0;
        switch (C_i) {
            case 1:
                increment_class1 = P_i;
                break;
            case 2:
                increment_class2 = P_i;
                break;
            default:
                assert(0);
        }
        class1[i+1] = class1[i] + increment_class1;
        class2[i+1] = class2[i] + increment_class2;
    }

    size_t Q; std::cin >> Q;
    for (size_t q = 0; q < Q; q++) {
        size_t A_i, B_i; std::cin >> A_i >> B_i;
        std::cout
        << class1[B_i] - class1[A_i - 1]
        << " "
        << class2[B_i] - class2[A_i - 1]
        << std::endl;
    }
    return 0;
}
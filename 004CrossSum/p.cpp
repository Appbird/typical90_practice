#include <vector>
#include <cassert>
#include <iostream>

int main(){
    size_t H, W; std::cin >> H >> W;
    std::vector<std::vector<int32_t>> A(H, std::vector(W, 0));
    std::vector<int32_t> row(H);
    std::vector<int32_t> column(W);
    
    for (size_t i = 0; i < H; i++) {
        for (size_t j = 0; j < W; j++) {
            std::cin >> A[i][j];
        }
    }

    for (size_t r = 0; r < H; r++) {
        for (size_t c = 0; c < W; c++) {
            row[r] += A[r][c];
            column[c] += A[r][c];
        }
    }

    for (size_t r = 0; r < H; r++) {
        for (size_t c = 0; c < W; c++) {
            std::cout << row[r] + column[c] - A[r][c] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
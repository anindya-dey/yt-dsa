class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;

        for (char move : moves) {
            switch (move) {
                case 'L': x--; break;
                case 'R': x++; break;
                case 'U': y++; break;
                case 'D': y--; break;
            }
        }

        return x == 0 && y == 0;
    }
};

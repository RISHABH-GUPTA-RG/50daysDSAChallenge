class Solution {
public:
    vector<int> getRow(int rowIndex) {
        std::vector<int> result = {1};

        for (int i = 1; i <= rowIndex; i++) {
            long prevElement = result[i - 1];

            long currentElement = prevElement * (rowIndex - i + 1) / i;
            result.push_back(static_cast<int>(currentElement));
        }

        return result;
    }
};
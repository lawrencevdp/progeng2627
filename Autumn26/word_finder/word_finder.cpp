#include <string>
#include <vector>
#include <iostream>


bool check_word_in_rows(
    const std::string& word,
    const std::vector<std::string>& grid,
    int& starting_row,
    int& starting_col
)
{
    int target=word.size();
    int width=grid[0].size();

    for (int row=0; row<grid.size(); row++) {
        for (int col=0; col<=width-target; col++) {
            bool good_so_far=true;

            for (int i=0; i<target && good_so_far; i++) {
                if (grid[row][col+i]!=word[i]) {
                    good_so_far=false;
                }
            }

            if (good_so_far) {
                starting_row=row;
                starting_col=col;
                return true;
            }
        }
    }

    return false;
}

bool check_word_in_cols(
    const std::string& word,
    const std::vector<std::string>& grid,
    int& starting_row,
    int& starting_col
)
{
    int target=word.size();
    int height=grid.size();

    for (int col=0; col<grid[0].size(); col++) {
        for (int row=0; row<=height-target; row++) {
            bool good_so_far=true;

            for (int i=0; i<target && good_so_far; i++) {
                if (grid[row+i][col]!=word[i]) {
                    good_so_far=false;
                }
            }

            if (good_so_far) {
                starting_row=row;
                starting_col=col;
                return true;
            }
        }
    }

    return false;
}

void build_solution_row (
    std::string& row,
    const std::string& word,
    int starting_col
)
{
    for (int i=0; i<word.size(); i++) {
        row[starting_col+i]=word[i];
    }
}
void build_solution_col(
    std::vector<std::string>& solution,
    const std::string& word,
    int starting_row,
    int starting_col
)
{
    for (int i=0; i<word.size(); i++) {
        solution[starting_row+i][starting_col]=word[i];
    }
}


void create_hashtag_grid(
    std::vector<std::string>& empty_grid,
    const std::vector<std::string>&grid
)
{
    for (int row=0; row<grid.size(); row++) {
        std::string temp_row="";
        for (int col=0; col<grid[0].size(); col++) {
            temp_row+="#";
        }
        empty_grid.push_back(temp_row);
    }
}


void find_words(
    const std::vector<std::string>& grid,
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
)
{
    create_hashtag_grid(solution, grid);

    for (int i=0; i<words.size(); i++) {
        int starting_row=-1;
        int starting_col=-1;

        if (check_word_in_rows(words[i], grid, starting_row, starting_col)) 
        {
            build_solution_row(solution[starting_row], words[i], starting_col);
        }
        else if (check_word_in_cols(words[i], grid, starting_row, starting_col)) 
        {
            build_solution_col(solution, words[i], starting_row, starting_col);
        }
        else {
            not_found.push_back(words[i]);
        }
    }
}


int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}
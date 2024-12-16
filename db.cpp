#include <iostream>
#include <string>

namespace mingxi_sqlite {

void print_prompt() 
{
  std::cout << "db > ";
}

};

using namespace mingxi_sqlite;

int main(int argc, char* argv[])
{
  std::string input_buf; 

  while(1) {
    print_prompt();

    std::getline(std::cin, input_buf);

    if (input_buf == ".exit") {
      exit(0);
    }
    else {
      std::cout << "Unrecognized command: " << input_buf << std::endl;
    }
  }

  return 0;
}


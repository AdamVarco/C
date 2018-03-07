#include <iostream>
#include <fstream>
#include <string>
#include <vector>
int main(int argc, char** argv) {
    if (argc != 3)
        return(EXIT_FAILURE);
     std::vector<std::string> lines_in_reverse;
     std::ifstream in(argv[1]);
     std::ofstream myfile;
     myfile.open(argv[2]);

     if (!in)
       exit(EXIT_FAILURE);

       if(in.is_open()){

        std::string line;
        while(std::getline(in,line)){
            lines_in_reverse.insert(lines_in_reverse.begin(),line);
        }
        in.close();
       }
for (std::vector<std::string>::const_iterator i = lines_in_reverse.begin(); i != lines_in_reverse.end(); ++i){
    std::cout << *i <<std::endl;
    myfile << *i << std::endl;
 }
    myfile.close();
    
}

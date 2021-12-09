//
// Created by Dmitry Morozov on 09.12.2021.
//

#include <vector>
#include <iostream>

struct SCData {
  std::vector<std::vector<std::string >> data;
  void showData() {
    for (auto &row : data) {
      for (auto &col : row) {
        std::cout << col << " ";
      }
      std::cout << std::endl;
    }
  }
};

class ReadCSV {
public:
    ReadCSV(const std::string &fileName) {
        std::cout << "Read CSV init Read starting CSV file " << fileName << std::endl;
    };

    SCData getData() {
        std::cout << "ReadCSV ::  Getting data from CSV file" << std::endl;
        return  {"1", "2", "3"};


    }
};

class ReadXLS {
public:
    ReadXLS(const std::string &fileName) {
        std::cout << "ReadXLS Init Read starting XLS file " << fileName << std::endl;
    };

    std::vector<std::vector<std::string>> getData() {
        std::cout << "ReadXLS ::  Getting data from XLS file" << std::endl;
        return {{"7", "8", "9"},
                {"10", "11", "12"}};
    }
};


class DataFrame {
public:
    DataFrame(std::string &fileName) : _fileName(fileName) {
        std::cout << "Initializing data frame  in file " << fileName << std::endl;
        receiveFrame();
    }

    const std::vector<std::vector<std::string>> getFrame() const {
        return _Frame;
    }

private:
    std::string _fileName;
    std::vector<std::vector<std::string>> _Frame;

    void receiveFrame();

};

void DataFrame::receiveFrame() {

    if (_fileName.find(".csv") != std::string::npos) {
        std::cout << "Receiving data from CSV file" << std::endl;
        std::unique_ptr<ReadCSV> _reader = std::make_unique<ReadCSV>(_fileName);
        _Frame = _reader->getData();
    } else if (_fileName.find(".xls") != std::string::npos) {
        std::cout << "Receiving data from XLS file" << std::endl;
        std::unique_ptr<ReadXLS> _reader = std::make_unique<ReadXLS>(_fileName);
        _Frame = _reader->getData();
    } else {
        std::throw_with_nested(std::runtime_error("File format is not supported"));
    }

}

int main() {
    std::string fileName;
    std::cout << "Enter file name: ";
    std::cin >> fileName;
    auto csv_data = DataFrame(fileName);
    auto xls_data = DataFrame(fileName);

    return 0;
}
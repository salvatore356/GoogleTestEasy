//
//  FileManager.hpp
//  SynteticGenerator
//
//  Created by Salvatore on 2/4/24.
//

#ifndef FileManager_hpp
#define FileManager_hpp

#include <stdio.h>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

class FileManager {
public:
    bool createFile(const std::string& filename) {
        std::ofstream file(filename);
        return file.is_open();
    }

    bool deleteFile(const std::string& filename) {
        return fs::remove(filename);
    }

    bool isFileExists(const std::string& filename) {
        return fs::exists(filename);
    }
};

#endif /* FileManager_hpp */

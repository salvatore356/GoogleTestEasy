//
//  FileManagerTestFixture.hpp
//  GoogleTestEasy
//
//  Created by Salvatore on 2/4/24.
//

#ifndef FileManagerTestFixture_hpp
#define FileManagerTestFixture_hpp

#include "FileManager.hpp"

class FileManagerTestFixture : public ::testing::Test {
protected:
    void SetUp() override {
        // Create a FileManager object and initialize files for testing
        fileManager.createFile("file1.txt");
        fileManager.createFile("file2.txt");
    }

    void TearDown() override {
        // Clean up files created during testing
        fileManager.deleteFile("file1.txt");
        fileManager.deleteFile("file2.txt");
    }

    FileManager fileManager; // FileManager object used in tests
};

TEST_F(FileManagerTestFixture, CreateFile) {
    // Arrange: FileManager is initialized with files "file1.txt" and "file2.txt"
    // Act: Create a new file
    fileManager.createFile("file3.txt");

    // Assert: Check if the new file exists
    ASSERT_TRUE(fileManager.isFileExists("file3.txt"));
}

TEST_F(FileManagerTestFixture, DeleteFile) {
    // Arrange: FileManager is initialized with files "file1.txt" and "file2.txt"
    // Act: Delete one of the files
    fileManager.deleteFile("file1.txt");

    // Assert: Check if the deleted file no longer exists
    ASSERT_FALSE(fileManager.isFileExists("file1.txt"));
}

TEST_F(FileManagerTestFixture, CheckFileExists) {
    // Assert: Check if the deleted file no longer exists
    ASSERT_TRUE(fileManager.isFileExists("file1.txt"));
    ASSERT_FALSE(fileManager.isFileExists("file4.txt"));
}

#endif /* FileManagerTestFixture_hpp */

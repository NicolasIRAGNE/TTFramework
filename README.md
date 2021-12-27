# TTFramework

This repository is a simple draft for a "Technical Test Framework". Simply put, it is a boilerplate for writing quick and simple unit tests for arbitrary code.
This is mostly for demonstration purposes. This is not a very practical solution but it provides a good starting point for writing tests.

## Usage

Simply add the code to be tested in the `src` folder and add it to the CMakeLists.txt file.
Then do the same for the `tests` directory.

## Use cases

I am using this boilerplate for the following use cases:

- Testing some quick standalone functions, like the challenges you can find on various websites (e.g. [LeetCode](https://leetcode.com/))
- Provide a quick working platform for a potential interviewee. In this case, the header file and the tests file are provided. The candidate has to implement the actual functions in the source file.

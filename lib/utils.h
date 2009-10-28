
#ifndef UTILS_H
#define UTILS_H

#include <string>

class Exception {
  std::string _what;
  public:
    Exception(std::string what) : _what(what) { }
    virtual const char* what() const throw() { return _what.c_str(); }
};


//
// File(name) handling
//

/**
 * Return true iff s starts with prefix
 */
bool startswith(std::string s, std::string prefix);

#ifdef WIN32
  const char pathDelimiter = '\\';
#else
  const char pathDelimiter = '/';
#endif

/**
 * Return directory name of given path
 */
std::string dirname(std::string path);

/**
 */
void touch(std::string path);

/**
 */
bool exists(std::string path);


/**
 * Return the higher of the given values
 */
template <typename T>
T max(T a, T b) {
  return a >= b ? a : b;
}


#endif // UTILS_H

